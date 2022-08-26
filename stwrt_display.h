/*
   Stewart Platform Project - Sketch Code

   File: stwrt_display.h
   Description: NR.
*/

class stwrt_display_class {
  private:
    String _line1;
    String _line2;

  public:
    Adafruit_RGBLCDShield lcd = Adafruit_RGBLCDShield();
    String line1;
    String line2;

    // Display Shield Setup
    void setup() {
      lcd.begin(16, 2);
      lcd.clear();
      delay(250);
//      lcd.setCursor(0, 0);
//      lcd.print(F("Starting..."));
//      delay(1000);
    }

    void print(String line1, String line2) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(line1);
      lcd.setCursor(0, 1);
      lcd.print(line2);
    }

};
stwrt_display_class stwrt_display;
