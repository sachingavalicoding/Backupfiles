let ans = "";
let span = document.querySelectorAll('span');
span.forEach(e  => {
  e.addEventListener('click',()=>{
    let value = e.innerText;
    ans = ans + value;
    console.log(eval(ans));
  })
});