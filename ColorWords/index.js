let colors = ['red', 'green', 'yellow', 'pink', 'blue', 'gray', 'black', 'purple', 'white'];
let word = document.getElementById('word');
let score = document.getElementById('score');
let index = 0;
let idx = 0;
const randomColor2 = (colors, idx) => {
    idx = (Math.floor(Math.random() * colors.length));
    return colors[idx];
}
const randomColor = (colors, idx) => {
    idx = (Math.floor(Math.random() * colors.length));
    /*  let result = [];
    result.push(idx);
    let finalIdx = result.filter(item ,index => {
        return result.indexOf(item) === index;
    });
    console.log(finalIdx); */
    return colors[idx];
}

word.style.color = randomColor2(colors,idx);
let items = document.querySelectorAll('.items');
items.forEach(element => {
   element.style.backgroundColor = randomColor(colors,idx);
   element.addEventListener('click',(e)=>{
     
       if(word.innerText === element.style.backgroundColor){
           word.style.color = randomColor2(colors,idx);
           word.innerText = randomColor(colors,idx);
           index= index + 1;
           score.innerHTML= index;
           items.forEach(element => {
            word.innerText = randomColor(colors,idx);
            element.style.backgroundColor = randomColor(colors,idx);
           
    });
        }
        else{
            score.innerHTML = 0;
            index = 0;
            items.forEach(element => {
                word.innerText = randomColor(colors,idx);
                element.style.backgroundColor = randomColor(colors,idx);
               
        });
       }
   });
});

