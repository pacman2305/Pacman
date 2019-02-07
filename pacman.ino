
#include <RGBmatrixPanel.h>

// Most of the signal pins are configurable, but the CLK pin has some
// special constraints.  On 8-bit AVR boards it must be on PORTB...
// Pin 8 works on the Arduino Uno & compatibles (e.g. Adafruit Metro),
// Pin 11 works on the Arduino Mega.  On 32-bit SAMD boards it must be
// on the same PORT as the RGB data pins (D2-D7)...
// Pin 8 works on the Adafruit Metro M0 or Arduino Zero,
// Pin A4 works on the Adafruit Metro M4 (if using the Adafruit RGB
// Matrix Shield, cut trace between CLK pads and run a wire to A4).

#define CLK  8   // USE THIS ON ARDUINO UNO, ADAFRUIT METRO M0, etc.
//#define CLK A4 // USE THIS ON METRO M4 (not M0)
//#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2

RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false);


// Double-buffered mode consumes nearly all the RAM available on the
// Arduino Uno -- only a handful of free bytes remain.  So this code uses
// a bunch of precalculated data in tables to minimize RAM usage and speed
// things up.











void setup() {

  matrix.begin();
   matrix.drawPixel(2, 3, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 3, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(3, 4, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 2, matrix.Color333(7, 0, 0));
  delay(000);

  matrix.drawPixel(1, 1, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(1, 2, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(2, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(2, 1, matrix.Color333(7, 0, 0));
  delay(000);

  matrix.drawPixel(4, 1, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(5, 1, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(5, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(4, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(4, 3, matrix.Color333(7, 0, 0));
  delay(000);


  // draw pacman open mouth
  
 matrix.drawPixel(4, 7, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(4, 8, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(4, 9, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(4, 10, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(3, 9, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(3, 8, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(5, 7, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(5, 8, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(5, 9, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(5, 10, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(5, 11, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(6, 6, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(6, 7, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(6, 9, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(6, 8, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(6, 10, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(6, 11, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(6, 5, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(7, 5, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(8, 5, matrix.Color333(7, 4, 0));
  delay(100);
     matrix.drawPixel(6, 12, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(7, 12, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(8, 12, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(7, 7, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(7, 6, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(8, 6, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(7, 11, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(7, 10, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(8, 11, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(9, 5, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(9, 12, matrix.Color333(7, 4, 0));
  delay(100);
matrix.drawPixel(3, 7, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(4, 6, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(5, 5, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(3, 10, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(4, 11, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(5, 12, matrix.Color333(7, 4, 0));
  delay(100);
  //pacman opened mouth end

 

 
  



  
 
    //ghost
    matrix.drawPixel(21, 1, matrix.Color333(4, 0, 7));
  delay(100);
  matrix.drawPixel(22, 1, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(20, 2, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(22, 2, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(19, 3, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(24, 3, matrix.Color333(4, 0, 7));
    delay(100);
    
     matrix.drawPixel(19, 3, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(24, 5, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(24, 4, matrix.Color333(4, 0, 7));
    delay(100);


  matrix.drawPixel(23, 4, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(22, 4, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(21, 4, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(20, 4, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(19, 4, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(22, 3, matrix.Color333(4, 0, 7));
    delay(100);
     matrix.drawPixel(20, 3, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(19, 5, matrix.Color333(4, 0, 7));
    delay(100);
    //left tentacle
     matrix.drawPixel(21, 3, matrix.Color333(0, 4, 7));
    delay(100);
    //left eye
    matrix.drawPixel(23, 3, matrix.Color333(0, 4, 7));
    delay(100);
    //right eye
    matrix.drawPixel(21, 2, matrix.Color333(4, 4, 4));
    delay(100);
     matrix.drawPixel(22, 6, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(22, 5, matrix.Color333(4, 0, 7));
    delay(100);
    //middle tentacle
    matrix.drawPixel(23, 2, matrix.Color333(4, 4, 4));
    delay(100);
    //ghost end
     matrix.drawPixel(6, 6, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(5, 6, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(8, 8, matrix.Color333(0, 7, 7));
  delay(100);
   matrix.drawPixel(12, 8, matrix.Color333(0, 7, 7));
  delay(100);
   matrix.drawPixel(16, 8, matrix.Color333(0, 7, 7));
  delay(100);
    matrix.drawPixel(20, 8, matrix.Color333(0, 7, 7));
    delay(100);
    //pacman laser
   matrix.drawPixel(24, 8, matrix.Color333(0, 7, 7));
  delay(100);
   matrix.drawPixel(28, 8, matrix.Color333(0, 7, 7));
  delay(100);
    matrix.drawPixel(32, 8, matrix.Color333(0, 7, 7));
    delay(100);
    //pacman eye
  matrix.drawPixel(6, 7, matrix.Color333(7, 4, 0));
  delay(1500);
  //pacman eye end
  
 matrix.fillScreen(matrix.Color333(0,0,0));
 delay(100);
 
 matrix.drawPixel(2, 3, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 3, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(3, 4, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 2, matrix.Color333(7, 0, 0));
  delay(000);

  matrix.drawPixel(1, 1, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(1, 2, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(2, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(2, 1, matrix.Color333(7, 0, 0));
  delay(000);

  matrix.drawPixel(4, 1, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(5, 1, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(5, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(4, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(4, 3, matrix.Color333(7, 0, 0));
  delay(000);
 //start des neuen pacmans half closed mouth

 matrix.drawPixel(9,9, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(9,10, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(9,11, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(9,12, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(8,11,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(8,10, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(10,8, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(10,9, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(10,10, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(10,11, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(10,12, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(10,13, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(11,8, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(11,11, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(11,10, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(11,12, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(11,13, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(11,7, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(12,7,matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(13,7,matrix.Color333(7, 4, 0));
  delay(100);
     matrix.drawPixel(11,14, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(12,14,matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(13,14,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(12,9,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(12,8,matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(12,13,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(12,12,matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(13,13,matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(14,7,matrix.Color333(0, 0, 0));
  delay(100);
   matrix.drawPixel(14,14,matrix.Color333(7, 4, 0));
  delay(100);
matrix.drawPixel(8,9, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(10,7, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(8,12, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(9,13, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(10,14, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(11,8, matrix.Color333(0, 0, 0));
  delay(100);
  matrix.drawPixel(10,8, matrix.Color333(0, 0, 0));
  delay(100); 
    matrix.drawPixel(13,8,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(13,11, matrix.Color333(0, 0, 0));
  delay(100); 
   matrix.drawPixel(12,10, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(14,7, matrix.Color333(0, 0, 0));
  delay(100); 
  matrix.drawPixel(14,10,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(15,9,matrix.Color333(0, 0, 0));
  delay(100);
    matrix.drawPixel(14,8,matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(13,10,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(14,9,matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(13,9,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(15,14, matrix.Color333(0, 0, 0));
  delay(100); 
   matrix.drawPixel(15,10,matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(14,13,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(13,12, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(12,11,matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(14,14,matrix.Color333(0, 0, 0));
  delay(100);
   matrix.drawPixel(15,12,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(14,12,matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(11,8,matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(11,9,matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(10,8, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(10,13, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(9,8, matrix.Color333(7, 4, 0));
  delay(1500);
  

  //ghost
    matrix.drawPixel(21, 1, matrix.Color333(4, 0, 7));
  delay(100);
  matrix.drawPixel(22, 1, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(20, 2, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(22, 2, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(19, 3, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(24, 3, matrix.Color333(4, 0, 7));
    delay(100);
    
     matrix.drawPixel(19, 3, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(24, 5, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(24, 4, matrix.Color333(4, 0, 7));
    delay(100);


  matrix.drawPixel(23, 4, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(22, 4, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(21, 4, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(20, 4, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(19, 4, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(22, 3, matrix.Color333(4, 0, 7));
    delay(100);
     matrix.drawPixel(20, 3, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(19, 5, matrix.Color333(4, 0, 7));
    delay(100);
    //left tentacle
     matrix.drawPixel(21, 3, matrix.Color333(0, 4, 7));
    delay(100);
    //left eye
    matrix.drawPixel(23, 3, matrix.Color333(0, 4, 7));
    delay(100);
    //right eye
    matrix.drawPixel(21, 2, matrix.Color333(4, 4, 4));
    delay(100);
     matrix.drawPixel(22, 6, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(22, 5, matrix.Color333(4, 0, 7));
    delay(100);
    //middle tentacle
    matrix.drawPixel(23, 2, matrix.Color333(4, 4, 4));
    delay(100);
    //ghost end
  

  matrix.fillScreen(matrix.Color333(0,0,0));
 delay(100);
 
 //heart
  matrix.drawPixel(2, 3, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 3, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(3, 4, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(1, 1, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(1, 2, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(2, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(2, 1, matrix.Color333(7, 0, 0));
  delay(000);

  

  
 
 

  

  matrix.fillScreen(matrix.Color333(0,0,0));
 delay(100);
 //heart
 matrix.drawPixel(2, 3, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 3, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(3, 4, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(1, 1, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(1, 2, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(2, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(2, 1, matrix.Color333(7, 0, 0));
  delay(000);
 
 
  matrix.drawPixel(19,15, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(20,15, matrix.Color333(7, 4, 0));

    matrix.drawPixel(21,15, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(22,15, matrix.Color333(7, 4, 0));
  delay(100);
  matrix.drawPixel(20,14, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(21,14, matrix.Color333(7, 4, 0));
  delay(100);
    matrix.drawPixel(22,14, matrix.Color333(7, 4, 0));
  delay(100);
   matrix.drawPixel(23,14, matrix.Color333(7, 4, 0));
  delay(100);

  //ghost
    matrix.drawPixel(21, 1, matrix.Color333(4, 0, 7));
  delay(100);
  matrix.drawPixel(22, 1, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(20, 2, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(22, 2, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(19, 3, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(24, 3, matrix.Color333(4, 0, 7));
    delay(100);
    
     matrix.drawPixel(19, 3, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(24, 5, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(24, 4, matrix.Color333(4, 0, 7));
    delay(100);


  matrix.drawPixel(23, 4, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(22, 4, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(21, 4, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(20, 4, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(19, 4, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(22, 3, matrix.Color333(4, 0, 7));
    delay(100);
     matrix.drawPixel(20, 3, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(19, 5, matrix.Color333(4, 0, 7));
    delay(100);
    //left tentacle
     matrix.drawPixel(21, 3, matrix.Color333(0, 4, 7));
    delay(100);
    //left eye
    matrix.drawPixel(23, 3, matrix.Color333(0, 4, 7));
    delay(100);
    //right eye
    matrix.drawPixel(21, 2, matrix.Color333(4, 4, 4));
    delay(100);
     matrix.drawPixel(22, 6, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(22, 5, matrix.Color333(4, 0, 7));
    delay(100);
    //middle tentacle
    matrix.drawPixel(23, 2, matrix.Color333(4, 4, 4));
    delay(100);
    //ghost end

    //ghost
    matrix.drawPixel(21, 1, matrix.Color333(4, 0, 7));
  delay(100);
  matrix.drawPixel(22, 1, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(20, 2, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(22, 2, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(19, 3, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(24, 3, matrix.Color333(4, 0, 7));
    delay(100);
    
     matrix.drawPixel(19, 3, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(24, 5, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(24, 4, matrix.Color333(4, 0, 7));
    delay(100);


  matrix.drawPixel(23, 4, matrix.Color333(4, 0, 7));
  delay(100);
   matrix.drawPixel(22, 4, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(21, 4, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(20, 4, matrix.Color333(4, 0, 7));
  delay(100);
    matrix.drawPixel(19, 4, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(22, 3, matrix.Color333(4, 0, 7));
    delay(100);
     matrix.drawPixel(20, 3, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(19, 5, matrix.Color333(4, 0, 7));
    delay(100);
    //left tentacle
     matrix.drawPixel(21, 3, matrix.Color333(0, 4, 7));
    delay(100);
    //left eye
    matrix.drawPixel(23, 3, matrix.Color333(0, 4, 7));
    delay(100);
    //right eye
    matrix.drawPixel(21, 2, matrix.Color333(4, 4, 4));
    delay(100);
     matrix.drawPixel(22, 6, matrix.Color333(4, 0, 7));
    delay(100);
    matrix.drawPixel(22, 5, matrix.Color333(4, 0, 7));
    delay(100);
    //middle tentacle
    matrix.drawPixel(23, 2, matrix.Color333(4, 4, 4));
    delay(100);
    //ghost end

        //ghost
    matrix.drawPixel(11, 6, matrix.Color333(4, 7, 0));
  delay(100);
  matrix.drawPixel(12, 6, matrix.Color333(4, 7, 0));
  delay(100);
   matrix.drawPixel(10, 7, matrix.Color333(4, 7, 0));
  delay(100);
    matrix.drawPixel(12, 7, matrix.Color333(4, 7, 0));
  delay(100);
   matrix.drawPixel(9, 8, matrix.Color333(4, 7, 0));
  delay(100);
    matrix.drawPixel(14, 10, matrix.Color333(4, 7, 0));
    delay(100);
    
     matrix.drawPixel(9, 8, matrix.Color333(4, 7, 0));
  delay(100);
   matrix.drawPixel(14, 8, matrix.Color333(4, 7, 0));
  delay(100);
    matrix.drawPixel(14, 9, matrix.Color333(4, 7, 0));
    delay(100);


  matrix.drawPixel(13, 9, matrix.Color333(4, 7, 0));
  delay(100);
   matrix.drawPixel(12, 9, matrix.Color333(4, 7, 0));
  delay(100);
    matrix.drawPixel(11, 9, matrix.Color333(4, 7, 0));
    delay(100);
    matrix.drawPixel(10, 9, matrix.Color333(4, 7, 0));
  delay(100);
    matrix.drawPixel(9, 9, matrix.Color333(4, 7, 0));
    delay(100);
    matrix.drawPixel(12, 8, matrix.Color333(4, 7, 0));
    delay(100);
     matrix.drawPixel(10, 8, matrix.Color333(4, 7, 0));
    delay(100);
    matrix.drawPixel(9, 10, matrix.Color333(4, 7, 0));
    delay(100);
    
    //left tentacle
     matrix.drawPixel(11, 8, matrix.Color333(0, 4, 7));
    delay(100);
    //left eye
    matrix.drawPixel(13, 8, matrix.Color333(4, 7, 0));
    delay(100);
       matrix.drawPixel(11, 7, matrix.Color333(4, 4, 4));
    delay(100);
     matrix.drawPixel(11, 8, matrix.Color333(0, 0, 7));
    delay(100);
    //right eye
     matrix.drawPixel(12, 8, matrix.Color333(4, 7, 0));
    delay(100);
    matrix.drawPixel(12, 10, matrix.Color333(4, 7, 0));
    delay(100);
     matrix.drawPixel(13, 7, matrix.Color333(4, 4, 4));
    delay(100);
    //middle tentacle
    matrix.drawPixel(13, 8, matrix.Color333(0, 0, 7));
    delay(100);
    matrix.drawPixel(12, 11, matrix.Color333(4, 7, 0));
    delay(100);
    //ghost end

    //fill screen w/white
    
matrix.fillScreen(matrix.Color333(0,0,0));
 delay(100);
 //heart
 matrix.drawPixel(2, 3, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 3, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(3, 4, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(3, 2, matrix.Color333(7, 0, 0));
  delay(000);

  matrix.drawPixel(1, 1, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(1, 2, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(2, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(2, 1, matrix.Color333(7, 0, 0));
  delay(000);

  matrix.drawPixel(4, 1, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(5, 1, matrix.Color333(7, 0, 0));
  delay(000);
   matrix.drawPixel(5, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(4, 2, matrix.Color333(7, 0, 0));
  delay(000);
  matrix.drawPixel(4, 3, matrix.Color333(7, 0, 0));
  delay(000);


};



 

    
 }


   
 void loop() {
  // Do nothing -- image doesn't change
}   
  
  
  
 
