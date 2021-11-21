let img;
let cnv;
// let margin = 20;
let window_size = 800;
let tileCountX = 31;
let tileCountY = 31;
let rectHeight = window_size * 0.004
// let rw = 25;
// let rh = 4;
let angle = 0;
let deg = 0;
// let array = [22.5, 45, 67.5, 90, 112.5, 135, 157.5];
let array = [0, 25, 30, 45, 50, 60, 65, 90, 105, 120, 130, 150, 160, 180];

function preload() {
  img = loadImage("molnarlentmouvementgiratoire.jpg");
}

function setup() {
  // let cnv = createCanvas(800, 800);
  cnv = createCanvas(window_size, window_size);
  // cnv.position(20, 20);
  // frameRate(1);
  noLoop();
  angleMode(DEGREES);
  rectMode(CENTER);
  tileWidth = width / tileCountX;
  tileHeight = width / tileCountY;
  noStroke();
  fill('#c81e27');
  image(img, 0, 0, window_size, window_size);
}

function draw() {
  //   for (let i = 0; i <= tileCountX; i++) {
  //   angle += 22.5;
  //   // translate(((rw * i) + rw) / 2, rh / 2);
  //   // rotate(angle);
  //   rect(rw * i, 20, rw, rh);
  // }
  clear();
  for (let gridY = 1; gridY < tileCountY; gridY++) {
    for (let gridX = 1; gridX < tileCountX; gridX++) {
      let posX = gridX * tileWidth; //X座標の設定
      let posY = gridY * tileHeight; //Y座標の設定
      // fill('#fff');
      // rect(posX, posY, tileWidth, tileHeight);

      push();
      translate(posX, posY);
      // deg = deg + 0.01;
      // angle += 22.5; 
      // angle += 22.5 * noise(deg);
      // rotate(angle);
      rotate(random(array));
      rect(0, 0, tileWidth, rectHeight);
      pop();
    }
  }
}

function keyReleased() {
  if (key == 's' || key == 'S') saveCanvas(cnv, 'molnarlentmouvementgiratoire', 'png');
}