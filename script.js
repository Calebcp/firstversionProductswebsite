// Wait for the entire DOM to load before executing
document.addEventListener('DOMContentLoaded', () => {
    // Select all critical elements
    const sections = document.querySelectorAll('.section');
    const sideDots = document.querySelectorAll('.side-dot');
    const navLinks = document.querySelectorAll('.header .nav a');

    // -------------------------- Error Handling (Debugging) --------------------------
    if (!sections.length) console.warn('⚠️ No sections found (check .section class)');
    if (!sideDots.length) console.warn('⚠️ No side dots found (check .side-dot class)');
    if (!navLinks.length) console.warn('⚠️ No nav links found (check .header .nav a selector)');

    // -------------------------- Update Active States on Scroll --------------------------
    const updateActiveStates = () => {
        let currentSectionId = '';
        const scrollPosition = window.pageYOffset + window.innerHeight / 2; // Middle of viewport (more reliable)

        // Find which section is in the viewport
        sections.forEach(section => {
            const sectionTop = section.offsetTop;
            const sectionBottom = sectionTop + section.offsetHeight;

            if (scrollPosition >= sectionTop && scrollPosition < sectionBottom) {
                currentSectionId = section.getAttribute('id');
            }
        });

        // Update side dots active state
        sideDots.forEach(dot => {
            dot.classList.remove('active');
            if (dot.getAttribute('data-target') === `#${currentSectionId}`) {
                dot.classList.add('active');
            }
        });

        // Update header nav links active state
        navLinks.forEach(link => {
            link.classList.remove('active');
            if (link.getAttribute('href') === `#${currentSectionId}`) {
                link.classList.add('active');
            }
        });
    };

    // Run on initial load + scroll
    updateActiveStates();
    window.addEventListener('scroll', updateActiveStates);

    // -------------------------- Side Dot Click Functionality --------------------------
    sideDots.forEach(dot => {
        dot.addEventListener('click', (e) => {
            e.preventDefault(); // Prevent any default browser behavior

            // Get target section from data attribute
            const targetSelector = dot.getAttribute('data-target');
            const targetSection = document.querySelector(targetSelector);

            // Validate target exists
            if (!targetSection) {
                console.error(`❌ Target section "${targetSelector}" not found (check ID typos)`);
                return;
            }

            // Smooth scroll to the target section (RELIABLE method)
            window.scrollTo({
                top: targetSection.offsetTop,
                behavior: 'smooth'
            });

            // Optional: Manually set active state (in case scroll doesn't trigger update fast enough)
            sideDots.forEach(d => d.classList.remove('active'));
            dot.classList.add('active');
        });
    });

    // -------------------------- Optional: Nav Link Click Fix (Smooth Scroll) --------------------------
    navLinks.forEach(link => {
        link.addEventListener('click', (e) => {
            e.preventDefault();
            const targetSelector = link.getAttribute('href');
            const targetSection = document.querySelector(targetSelector);

            if (targetSection) {
                window.scrollTo({
                    top: targetSection.offsetTop,
                    behavior: 'smooth'
                });
            }
        });
    });
});