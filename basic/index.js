/* import {x,y} from './app'
console.log(x);
console.log(y); */

/* const x = require('./app');
console.log(x.x);
console.log(x.y); */


/*  ===========Filter Function =========== */


/* let arr = [2,4,3,5,6,34,7,45,342];
let ans = arr.filter((item) => {
    return item <= 34;
});

console.log(ans); */


/* 
const fs = require('fs');
fs.writeFileSync("text.txt","sample file for testing ");
fs.writeFileSync('text.txt', 'add more data ');
 */






/*  ======== Creating server =========== */
const http = require('http');



const dataControl = (req, resp) => {
    res.write(' <h1>  this is my response </h1> ');
    res.end();
}
http.createServer().listen(4500);