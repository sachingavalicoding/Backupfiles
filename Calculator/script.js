let input = document.getElementById('input');
let clear = document.getElementById('clear');
let item = document.querySelectorAll('.items');
let string = '';
item.forEach(element => {
    element.addEventListener('click',()=>{
      string = string + element.innerHTML;
      input.value = string;
      if(element.innerHTML == 'C'){
        input.value = '0';
        string = '0';
      }
      if(element.innerHTML == 'AC' ){
        input.value = ' ';
        string = ' ';
      }
      if(element.innerHTML == '='){
        
       string = eval(input.value);
       input.value === string;
      }
     
    });
});

