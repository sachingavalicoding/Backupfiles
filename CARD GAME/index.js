// card javascript

let card1 = document.getElementById('card-1');
let card2 = document.getElementById('card-2');
let card3 = document.getElementById('card-3');
let card4 = document.getElementById('card-4');
// input button 


let btn = document.getElementById('btn');

/* function moveCards() {

    card1.innerHTML = '';
} */


function randomNo() {
    let card = Math.floor(Math.random() * 4);
    let input = document.getElementById('input').value;
    let finalInput = input - 1;

    if (card == 0) {
        card1.innerHTML = ' <img src="./7.jpg" alt="card-4" ">';


    } else {
        card1.innerHTML = ' <img src="./9.jpg" alt="card-4" ">';
        card1.className = "cardBox";

    }
    if (card == 1) {
        card2.innerHTML = ' <img src="./7.jpg" alt="card-4" ">';


    } else {
        card2.innerHTML = ' <img src="./9.jpg" alt="card-4" ">';
        card1.className = "cardBox";


    }
    if (card == 2) {
        card3.innerHTML = ' <img src="./7.jpg" alt="card-4" ">';


    } else {
        card3.innerHTML = ' <img src="./9.jpg" alt="card-4" ">';
        card1.className = "cardBox";

    }
    if (card == 3) {
        card4.innerHTML = ' <img src="./7.jpg" alt="card-4" ">';


    } else {
        card4.innerHTML = ' <img src="./9.jpg" alt="card-4" ">';
        card1.className = "cardBox";

    }
    if (finalInput == card) {
        setInterval(win(), 1000);
    } else {
        setInterval(loss(), 1000);
    }

}


function reset() {
    card1.innerHTML = ' <img src="./9.jpg" alt="card-4" ">';
    card2.innerHTML = ' <img src="./9.jpg" alt="card-4" ">';
    card3.innerHTML = ' <img src="./9.jpg" alt="card-4" ">';
    card4.innerHTML = ' <img src="./9.jpg" alt="card-4" ">';
}

function loss() {
    let cardMsg = document.getElementById('cardMsg');
    cardMsg.innerHTML = '<h2>  Wrong <span> CARD</span></h2>';
}

function win() {
    let cardMsg = document.getElementById('cardMsg');
    cardMsg.innerHTML = ' <video controls autoplay   src="./dance1.mp4" width= 150px type="video/mp4"  > </video>';
}