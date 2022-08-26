/*
   Stewart Platform Project - Sketch Code

   File: stwrt-sketch.ino
   Hardware: Arduino Due and Adafruit 16 x 12-bit PWM

   Version number: v0.0.3-NIGHTLY
   Created: August 2022
   Author : Luis Diego Maroto Segura
   Github : https://github.com/ldmaroto/stwrt-sketch

   License:
   This work is licensed under the Creative Commons
   Attribution-NonCommercial-ShareAlike 4.0 International License. To view a
   copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/4.0/
   or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.

   Terms of use:
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/

// 1. Loading external libraries:
// -----------------------------------------------------------------------------
// Use the Arduino IDE Library Manager to install Adafruit_RGBLCDShield.h
//
#include <Adafruit_RGBLCDShield.h>
#include <Ethernet.h>
#include <EthernetUdp.h>

// 2. Loading internal libraries:
// -----------------------------------------------------------------------------
//
#include "stwrt_network.h"
#include "stwrt_display.h"
//#include "src/stwrt_keyboard.h"
//#include "src/stwrt_touchpanel.h"
//#include "src/stwrt_joystick.h"
//#include "src/stwrt_buzzer.h"
//#include "src/stwrt_xplanedatalink.h"
//#include "src/stwrt_kinematics.h"
//#include "src/stwrt_smoothcriminaldance.h"
//#include "src/stwrt_pidshow.h"
//#include "src/stwrt_inittest.h"
//#include "src/stwrt_alexa.h"

// 3. Variables definition:
// -----------------------------------------------------------------------------
//

// 3.1 The media access control (ethernet hardware) address for the shield
byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};

// 3.2 ...
String LINE1;
String LINE2;

// 4. Sketch Setup:
// -----------------------------------------------------------------------------
//
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // Ethernet Shield Setup
  stwrt_display.setup();
  stwrt_display.print("Starting...","");
  delay(1000);
  stwrt_network.setup(mac);
  // LINE1 = Ethernet.localIP();
  // String(Ethernet.localIP());
  Serial.print(String(Ethernet.localIP()));
  stwrt_display.print("Starting...",String(Ethernet.localIP()));
  
  //LINE1 = "Starting...";
  //LINE2 = String(Ethernet.localIP());
  //stwrt_display.print(LINE1,LINE2);
}

void loop() {
  // put your main code here, to run repeatedly:
}
