const pages = document.querySelectorAll('.page');
const dots = document.querySelectorAll('.dot');

let current = 0;

function showPage(index) {
  // remove active from all pages
  pages.forEach(p => p.classList.remove('active'));
  dots.forEach(d => d.classList.remove('active'));

  // add active to selected page
  pages[index].classList.add('active');
  dots[index].classList.add('active');

  current = index;
}

dots.forEach((dot, index) => {
  dot.addEventListener('click', () => {
    showPage(index);
  });
});

// initialize first page
showPage(0);