// Basic interactions: fade-in on scroll, dot nav, header nav scroll, simple carousel
document.addEventListener('DOMContentLoaded', function () {

  // Year
  const y = new Date().getFullYear();
  document.getElementById('year').textContent = y;

  // IntersectionObserver to toggle 'inview' class for fade animations
  const sections = document.querySelectorAll('.section');
  const io = new IntersectionObserver((entries) => {
    entries.forEach(e => {
      if (e.isIntersecting) {
        e.target.classList.add('inview');
        // update active dot
        updateActiveDot(e.target.id);
      } else {
        // leave sections visible after visited (optional)
        // e.target.classList.remove('inview');
      }
    });
  }, {threshold: 0.32});

  sections.forEach(s => io.observe(s));

  // Dot navigation: click scroll
  const dots = document.querySelectorAll('.dot');
  dots.forEach(d => {
    d.addEventListener('click', () => {
      const id = d.dataset.target;
      const el = document.getElementById(id);
      if (!el) return;
      // fade-out animation on document body while moving — implemented by CSS smooth scroll + focus
      el.scrollIntoView({behavior:'smooth', block:'start'});
    });
  });

  function updateActiveDot(visibleId){
    dots.forEach(dt => {
      dt.classList.toggle('active', dt.dataset.target === visibleId);
    });
  }

  // Top nav anchors (same scrolling behavior)
  document.querySelectorAll('.top-nav a').forEach(a => {
    a.addEventListener('click', (ev) => {
      ev.preventDefault();
      const href = a.getAttribute('href').replace('#','');
      const target = document.getElementById(href);
      if (target) target.scrollIntoView({behavior:'smooth', block:'start'});
    });
  });

  // Simple carousel scroll controls for Section 4
  const track = document.querySelector('.carousel-track');
  const prev = document.getElementById('prev');
  const next = document.getElementById('next');

  if (track) {
    const cardWidth = () => track.querySelector('.card').getBoundingClientRect().width + 18;
    let index = 0;

    function updateTrack(){
      const w = cardWidth();
      track.style.transform = `translateX(${ - index * w }px)`;
    }
    next && next.addEventListener('click', () => {
      const cards = track.querySelectorAll('.card').length;
      index = Math.min(index + 1, cards - Math.floor((window.innerWidth - 100) / cardWidth()) );
      updateTrack();
    });
    prev && prev.addEventListener('click', () => {
      index = Math.max(index - 1, 0);
      updateTrack();
    });

    // make responsive on resize
    window.addEventListener('resize', () => {
      updateTrack();
    });
  }

  // Optional: keyboard nav with up/down
  window.addEventListener('keydown', (e) => {
    if (e.key === 'ArrowDown' || e.key === 'PageDown') {
      // find current visible section
      const visible = Array.from(sections).find(s => s.classList.contains('inview'));
      if (visible) {
        const nextS = visible.nextElementSibling;
        if (nextS) nextS.scrollIntoView({behavior:'smooth', block:'start'});
      }
    }
    if (e.key === 'ArrowUp' || e.key === 'PageUp') {
      const visible = Array.from(sections).find(s => s.classList.contains('inview'));
      if (visible) {
        const prevS = visible.previousElementSibling;
        if (prevS) prevS.scrollIntoView({behavior:'smooth', block:'start'});
      }
    }
  });

  // Optional: click on circle buttons - show modal or navigate to section
  document.querySelectorAll('.circle-btn').forEach((btn, i) => {
    btn.addEventListener('click', () => {
      // Default behavior: go to mid-feature (section-3). Customize as needed.
      const target = document.getElementById('section-3');
      if (target) target.scrollIntoView({behavior:'smooth', block:'start'});
    });
  });

});

