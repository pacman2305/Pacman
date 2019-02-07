# Pacman
Pacman
Hello, this is a code for a very basic and kinda flawed animation for the Adafruit 16\*32 LED Matrix.
Please do not mind the mistakes as I am a beginner and started programming like a week ago.
The Matrix basically works like a coordinate system and I used it as such, as you can see in the code I changed the status of every single LED with this function: matrix.drawPixel(x, y, matrix.Color333(r, b, y));
  delay(000);
  
  The x and y can change the position of the LED while the r,b,y variables mix the colour. 
  For example: 
   *(7, 0 ,0));* will change the colour to red, while  *(7, 4 ,0));* will be a yellow light.
   
  Keep in mind that matrix.Color333 is a constant.
  Also remember to download the needed library for this project.
