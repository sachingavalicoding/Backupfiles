let colors = ['red', 'green', 'yellow', 'pink', 'blue', 'gray', 'black', 'purple', 'white'];
let mainBox = document.querySelector('.color-box');
let word = document.getElementById('word');
for (let i = colors.length - 1; i > 0; i--) {
    let j = Math.floor(Math.random() * (i + 1));
    let temp = colors[i];
    colors[i] = colors[j];
    colors[j] = temp;
}
for (let i = 0; i < colors.length; i++) {
    let box = document.createElement('span');
    box.classList.add('items');
    box.style.backgroundColor = colors[i];
    word.textContent = colors[Math.floor(Math.random() * colors.length)];
    word.style.color = colors[Math.floor(Math.random() * colors.length)];
    mainBox.appendChild(box);
    box.addEventListener('click',(e)=>{
        console.log(e.target.style.backgroundColor);
    });
}


/* let box = document.querySelectorAll('.color-box');
box.forEach(element => {
    element.addEventListener('click', (e) => {
        console.log(e.target.textContent);
        if(e.target.style.backgroundColor === e.target.style.textContent){
            
        }
        
    });
}); */