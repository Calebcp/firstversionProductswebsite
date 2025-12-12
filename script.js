// Update side dots and nav links on scroll
const sections = document.querySelectorAll('.section');
const sideDots = document.querySelectorAll('.side-dot');
const navLinks = document.querySelectorAll('.header .nav a');

window.addEventListener('scroll', () => {
    let current = '';
    sections.forEach(section => {
        const sectionTop = section.offsetTop;
        const sectionHeight = section.clientHeight;
        if (pageYOffset >= (sectionTop - sectionHeight / 3)) {
            current = section.getAttribute('id');
        }
    });

    // Update side dots
    sideDots.forEach(dot => {
        dot.classList.remove('active');
        if (dot.getAttribute('data-target') === `#${current}`) {
            dot.classList.add('active');
        }
    });

    // Update nav links
    navLinks.forEach(link => {
        link.classList.remove('active');
        if (link.getAttribute('href') === `#${current}`) {
            link.classList.add('active');
        }
    });
});

// Side dot click handler
sideDots.forEach(dot => {
    dot.addEventListener('click', () => {
        const target = dot.getAttribute('data-target');
        document.querySelector(target).scrollIntoView({ behavior: 'smooth' });
    });
});
