// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        6 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 70 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int a=0;
#define DELAYVAL 100 // Time (in milliseconds) to pause between pixels
void zielonaChoinka()
{
   // Set all pixel colors to 'off'

  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
   pixels.setPixelColor(1, pixels.Color(255,255,0));
   pixels.setPixelColor(2, pixels.Color(255,255,0));
   pixels.setPixelColor(0, pixels.Color(255,255,0));
   pixels.setPixelColor(67, pixels.Color(255,255,0));
   pixels.show(); 
  for(int i=3; i<67; i++) { // For each pixel...

     //pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 255,0));

    pixels.show();   // Send the updated pixel colors to the hardware.

    delay(30); // Pause before next pass through loop
  }
   pixels.setPixelColor(28, pixels.Color(0, 0,44));
   pixels.setPixelColor(34, pixels.Color(44, 0,0));
   pixels.setPixelColor(22, pixels.Color(44, 44,0));
   pixels.setPixelColor(39, pixels.Color(44, 0,44));
   pixels.setPixelColor(61, pixels.Color(0, 0,44));
   pixels.setPixelColor(56, pixels.Color(44, 0,0));
   pixels.show();
   for(int i=0;i<30;i++)
   {
      pixels.setPixelColor(28, pixels.Color(0, 0,144));
      pixels.setPixelColor(34, pixels.Color(144, 0,0));
      pixels.setPixelColor(22, pixels.Color(144, 144,0));
      pixels.setPixelColor(39, pixels.Color(144, 0,144));
      pixels.setPixelColor(61, pixels.Color(0, 0,144));
      pixels.setPixelColor(56, pixels.Color(144, 0,0));
      pixels.show();
      delay(200);
      pixels.setPixelColor(28, pixels.Color(0, 0,44));
      pixels.setPixelColor(34, pixels.Color(44, 0,0));
      pixels.setPixelColor(22, pixels.Color(44, 44,0));
      pixels.setPixelColor(39, pixels.Color(44, 0,44));
      pixels.setPixelColor(61, pixels.Color(0, 0,44));
      pixels.setPixelColor(56, pixels.Color(44, 0,0));
      pixels.show();
      delay(200);
   }
  delay(1000);
  for(int i=66; i>2; i--) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(0, 0,0));

    pixels.show();   // Send the updated pixel colors to the hardware.

    delay(30); // Pause before next pass through loop
  }
  
  delay(100);
   pixels.setPixelColor(1, pixels.Color(0,0,0));
   pixels.setPixelColor(2, pixels.Color(0,0,0));
   pixels.setPixelColor(0, pixels.Color(0,0,0));
   pixels.setPixelColor(67, pixels.Color(0,0,0));
   pixels.show(); 
}
void migajaceSwiatla()
{
  //co 3lub2 pojawiaj lub znikaj
  for(int i=0;i<3;i++)
  {
    
    pixels.setPixelColor(i, pixels.Color(144,144,144));
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    //a=i;
    
    delay(50);
      
  }
  for(int i=3;i<71;i++)
  {
    
    pixels.setPixelColor(i, pixels.Color(144,144,144));
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    //a=i;
    
    delay(50);
      
  }
  
}
void rainbow(int wait) {
  for(long firstPixelHue = 0; firstPixelHue < 5*65536; firstPixelHue += 256) {
    for(int i=0; i<pixels.numPixels(); i++) { 
      int pixelHue = firstPixelHue + (i * 65536L / pixels.numPixels());
      pixels.setPixelColor(i, pixels.gamma32(pixels.ColorHSV(pixelHue)));
    }
    pixels.show();
    delay(wait);
  }
}
void rgb()
{
  for(int i=0;i<71;i++)
  {
    
 
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(144,0,0));
    pixels.show();
     delay(50);
      
  }
  for(int i=0;i<71;i++)
  {
    
 
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(0,144,0));
    pixels.show();
     delay(50);
      
  }
  for(int i=0;i<71;i++)
  {
    
 
    pixels.show();
    pixels.setPixelColor(i, pixels.Color(0,0,144));
    pixels.show();
     delay(50);
      
  }
}
void pepe()
{
  pixels.setPixelColor(67, pixels.Color(144,144,144));
  
  pixels.setPixelColor(66, pixels.Color(144,0,0));
  
  pixels.setPixelColor(65, pixels.Color(144,0,0));
  pixels.setPixelColor(64, pixels.Color(144,0,0));
  pixels.setPixelColor(63, pixels.Color(144,0,0));
  //linijka 7,8,9
 pixels.setPixelColor(62, pixels.Color(0,144,0));
  pixels.setPixelColor(61, pixels.Color(0,144,0));
  pixels.setPixelColor(60, pixels.Color(144,0,0));
  pixels.setPixelColor(59, pixels.Color(144,0,0));
  pixels.setPixelColor(58, pixels.Color(144,0,0));
  //6 linijka
  pixels.setPixelColor(57, pixels.Color(0,144,0));
  pixels.setPixelColor(56, pixels.Color(0,144,0));
  pixels.setPixelColor(55, pixels.Color(0,144,0));
  pixels.setPixelColor(54, pixels.Color(0,144,0));
  pixels.setPixelColor(53, pixels.Color(0,144,0));
  pixels.setPixelColor(52, pixels.Color(0,144,0));
  pixels.setPixelColor(51, pixels.Color(0,144,0));
  //5 linjka
  pixels.setPixelColor(50, pixels.Color(0,144,0));
  pixels.setPixelColor(49, pixels.Color(51,0,25));
  pixels.setPixelColor(48, pixels.Color(144,144,144));
  pixels.setPixelColor(47, pixels.Color(144,144,144));
  pixels.setPixelColor(46, pixels.Color(144,144,144));
  pixels.setPixelColor(45, pixels.Color(51,0,25));
  pixels.setPixelColor(44, pixels.Color(144,144,144));
  pixels.setPixelColor(43, pixels.Color(0,144,0));
  pixels.setPixelColor(42, pixels.Color(0,144,0));
  //linijka4
  pixels.setPixelColor(41, pixels.Color(0,144,0));
  pixels.setPixelColor(40, pixels.Color(0,144,0));
  pixels.setPixelColor(39, pixels.Color(0,144,0));
  pixels.setPixelColor(38, pixels.Color(0,144,0));
  pixels.setPixelColor(37, pixels.Color(0,144,0));
  pixels.setPixelColor(36, pixels.Color(0,144,0));
  pixels.setPixelColor(35, pixels.Color(0,144,0));
  pixels.setPixelColor(34, pixels.Color(0,144,0));
  pixels.setPixelColor(33, pixels.Color(0,144,0));
  pixels.setPixelColor(32, pixels.Color(0,144,0));
  pixels.setPixelColor(31, pixels.Color(0,144,0));
  //linjka 3
  pixels.setPixelColor(30, pixels.Color(144,0,0));
  pixels.setPixelColor(29, pixels.Color(144,0,0));
  pixels.setPixelColor(28, pixels.Color(144,0,0));
  pixels.setPixelColor(27, pixels.Color(144,0,0));
  pixels.setPixelColor(26, pixels.Color(144,0,0));
  pixels.setPixelColor(25, pixels.Color(144,0,0));
  pixels.setPixelColor(24, pixels.Color(144,0,0));
  pixels.setPixelColor(23, pixels.Color(144,0,0));
  pixels.setPixelColor(22, pixels.Color(0,144,0));
  pixels.setPixelColor(21, pixels.Color(0,144,0));
  pixels.setPixelColor(20, pixels.Color(0,144,0));
  pixels.setPixelColor(19, pixels.Color(0,144,0));
  pixels.setPixelColor(18, pixels.Color(0,144,0));
  //linijka 2
  pixels.setPixelColor(18, pixels.Color(0,144,0));
  pixels.setPixelColor(17, pixels.Color(0,144,0));
  pixels.setPixelColor(16, pixels.Color(0,144,0));
  pixels.setPixelColor(15, pixels.Color(0,144,0));
  pixels.setPixelColor(14, pixels.Color(0,144,0));
  pixels.setPixelColor(13, pixels.Color(0,144,0));
  pixels.setPixelColor(12, pixels.Color(0,144,0));
  pixels.setPixelColor(11, pixels.Color(0,144,0));
  pixels.setPixelColor(10, pixels.Color(0,144,0));
  pixels.setPixelColor(9, pixels.Color(0,144,0));
  pixels.setPixelColor(8, pixels.Color(0,144,0));
  pixels.setPixelColor(7, pixels.Color(0,144,0));
  pixels.setPixelColor(6, pixels.Color(0,144,0));
  pixels.setPixelColor(5, pixels.Color(0,144,0));
  pixels.setPixelColor(4, pixels.Color(0,144,0));
pixels.setPixelColor(3, pixels.Color(0,144,0));
  pixels.show();
  for(int i=0;i<6;i++)
  {
    delay(1300);
    pixels.setPixelColor(49, pixels.Color(144,144,144));
    pixels.setPixelColor(45, pixels.Color(144,144,144));
    pixels.show();
    delay(200);
    pixels.setPixelColor(49, pixels.Color(51,0,25));
    pixels.setPixelColor(45, pixels.Color(51,0,25));
    pixels.show();
  }
}
void betterPepe()
{
  pixels.setPixelColor(67, pixels.Color(144,144,144));
  
  pixels.setPixelColor(66, pixels.Color(144,0,0));
  
  pixels.setPixelColor(65, pixels.Color(144,0,0));
  pixels.setPixelColor(64, pixels.Color(144,0,0));
  pixels.setPixelColor(63, pixels.Color(144,0,0));
  //linijka 7,8,9
  pixels.setPixelColor(62, pixels.Color(0,144,0));
  pixels.setPixelColor(61, pixels.Color(0,144,0));
  pixels.setPixelColor(60, pixels.Color(144,0,0));
  pixels.setPixelColor(59, pixels.Color(144,0,0));
  pixels.setPixelColor(58, pixels.Color(144,0,0));
  //6 linijka
  pixels.setPixelColor(57, pixels.Color(0,144,0));
  pixels.setPixelColor(56, pixels.Color(0,144,0));
  pixels.setPixelColor(55, pixels.Color(0,144,0));
  pixels.setPixelColor(54, pixels.Color(0,144,0));
  pixels.setPixelColor(53, pixels.Color(0,144,0));
  pixels.setPixelColor(52, pixels.Color(0,144,0));
  pixels.setPixelColor(51, pixels.Color(0,144,0));
  //5 linjka
  pixels.setPixelColor(49, pixels.Color(0,144,0));
  pixels.setPixelColor(48, pixels.Color(51,0,25));
  pixels.setPixelColor(47, pixels.Color(144,144,144));
  pixels.setPixelColor(46, pixels.Color(144,144,144));
  pixels.setPixelColor(45, pixels.Color(51,0,25));
  pixels.setPixelColor(44, pixels.Color(144,144,144));
  pixels.setPixelColor(43, pixels.Color(0,144,0));
  pixels.setPixelColor(42, pixels.Color(0,144,0));
  //linijka4
  //pixels.setPixelColor(41, pixels.Color(0,144,0));
  pixels.setPixelColor(40, pixels.Color(0,144,0));
  pixels.setPixelColor(39, pixels.Color(0,144,0));
  pixels.setPixelColor(38, pixels.Color(0,144,0));
  pixels.setPixelColor(37, pixels.Color(0,144,0));
  pixels.setPixelColor(36, pixels.Color(0,144,0));
  pixels.setPixelColor(35, pixels.Color(0,144,0));
   pixels.setPixelColor(34, pixels.Color(0,144,0));
   //linijka3
    //pixels.setPixelColor(18, pixels.Color(0,144,0));
    pixels.setPixelColor(19, pixels.Color(0,144,0));
    pixels.setPixelColor(20, pixels.Color(0,144,0));
    pixels.setPixelColor(21, pixels.Color(0,144,0));
    pixels.setPixelColor(22, pixels.Color(0,144,0));
   pixels.setPixelColor(26, pixels.Color(144,0,0));
    pixels.setPixelColor(25, pixels.Color(144,0,0));
     pixels.setPixelColor(24, pixels.Color(144,0,0));
      pixels.setPixelColor(23, pixels.Color(144,0,0));
      //linijka 2
       
       // pixels.setPixelColor(16, pixels.Color(0,144,0));
         pixels.setPixelColor(15, pixels.Color(0,144,0));
          pixels.setPixelColor(14, pixels.Color(0,144,0));
           pixels.setPixelColor(13, pixels.Color(0,144,0));
            pixels.setPixelColor(12, pixels.Color(0,144,0));
             pixels.setPixelColor(11, pixels.Color(0,144,0));
              pixels.setPixelColor(10, pixels.Color(0,144,0));
              pixels.setPixelColor(9, pixels.Color(0,144,0));
              pixels.setPixelColor(8, pixels.Color(0,144,0));
      //linijka 1
  pixels.show();
  for(int i=0;i<6;i++)
  {
    delay(1300);
    pixels.setPixelColor(44, pixels.Color(0,144,0));
    pixels.setPixelColor(45, pixels.Color(0,144,0));
    pixels.show();
    delay(1000);
    pixels.setPixelColor(44, pixels.Color(144,144,144));
    pixels.setPixelColor(45, pixels.Color(51,0,25));
    pixels.show();
  }
}
void setup() {
  // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.clear();
}

void loop() {
 zielonaChoinka();
 migajaceSwiatla();
 rgb();
 rainbow(10);
 pixels.clear();
 pepe();
 pixels.clear();
 betterPepe();
 pixels.clear();
}
