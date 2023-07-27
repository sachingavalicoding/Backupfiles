// ninja game javascript
score = 0;
cross = true;

window.document.onkeydown = function(e) {

    console.log(e.keyCode);
    // up arrow key 
    if (e.keyCode == 38) {
        document.getElementById('ninja');
        ninja.classList.add("jampNinja");
        setTimeout(() => {
            ninja.classList.remove("jampNinja");
        }, 700);
    }
    if (e.keyCode == 39) {
        document.getElementById('ninja');
        nPosleft = parseInt(window.getComputedStyle(ninja, null).getPropertyValue('left'));
        ninja.style.left = (nPosleft + 182) + "px";

    }
    if (e.keyCode == 37) {
        document.getElementById('ninja');
        nPosleft = parseInt(window.getComputedStyle(ninja, null).getPropertyValue('left'));
        ninja.style.left = (nPosleft - 182) + "px";

    }
};


setInterval(() => {
    // for game over 

    ninja = document.getElementById('ninja');
    fireball = document.getElementById('fireball');
    gameOver = document.getElementById('gameOver');
    /// for ninja 
    nPosleft = parseInt(window.getComputedStyle(ninja, null).getPropertyValue('left'));

    // for top value 
    nPosTop = parseInt(window.getComputedStyle(ninja, null).getPropertyValue('top'));

    // for fireball
    fPosleft = parseInt(window.getComputedStyle(fireBall, null).getPropertyValue('left'));

    // for top value 
    fPosTop = parseInt(window.getComputedStyle(fireBall, null).getPropertyValue('top'));


    offsetX = Math.abs(nPosleft - fPosleft);
    offsetY = Math.abs(nPosTop - fPosTop);
    console.log(offsetX, offsetY);

    // 
    if (offsetX < 180 && offsetY < 130) {
        gameOver = document.getElementById('gameOver');
        gameOver.style.visibility = "visible";
        btn = document.getElementById('btn');
        btn.style.visibility = "visible";
        fireBall = document.getElementById('fireBall');
        fireBall.classList.remove('fireBall2');
    } else if (offsetX < 210 && cross) {
        score += 10;
        upadateScore(score);
        cross = false;
        setTimeout(() => {
            cross = true;
        }, 1000);

    }
}, 100);

const upadateScore = () => {
    const scoreCount = document.getElementById('score');
    scoreCount.innerHTML = " Your Score : " + score;
};