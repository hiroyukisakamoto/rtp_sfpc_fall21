var letters = [];
var font;
var fontSize = 800;
var textTyped = 'モリサワ';

let a = 0.0;

function preload() {
    font = loadFont('NotoSansJP-Bold.otf');
}

function setup() {
    createCanvas(640, 905);
    background(255);
    textSize(width / 4);
    textStyle(BOLD);
    textAlign(CENTER, TOP);
    textFont(font);
    noStroke();
    // noLoop();
}

function draw() {
    let inc = TWO_PI / 25.0;
    let time = millis() / 50;
    // fill('rgba(255,255,255,0.1)');
    // rect(0, 0, width, height);
    push();
    translate(width / 2, height);
    if (time*2 < height) {
        // rotate(time);
        scale(sin(a), time/(height*0.5));
        noFill();
        strokeWeight(1);
        stroke("rgba(0, 0, 0, 0.25)");
        text(textTyped, 0, -time*2);
        a = a + inc;
    } else if (height <= time*2){
        fill(0);
        noStroke();
        text(textTyped, 0, -height);
        noLoop();
    }
    pop();
    console.log(sin(a));
    // createLetters();
}