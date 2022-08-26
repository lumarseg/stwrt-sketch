/*
   Stewart Platform Project - Sketch Code

   File: stwrt-network.h
   Description: NR.
*/

class stwrt_network_class {
#include "stwrt_display.h"

  private:
    byte _mac;

  public:

    // Ethernet Shield Setup
    void setup(byte mac[]) {
      // Start the Ethernet Shield:
      Serial.println("- Initialize Ethernet with DHCP.");
      if (Ethernet.begin(mac) == 0) {
        Serial.println("- Failed to configure Ethernet using DHCP");
        if (Ethernet.hardwareStatus() == EthernetNoHardware) {
          Serial.println("- Ethernet shield was not found.  Sorry, can't run without hardware. :(");
        } else if (Ethernet.linkStatus() == LinkOFF) {
          Serial.println("- Ethernet cable is not connected.");
        }
        // no point in carrying on, so do nothing forevermore:
        while (true) {
          delay(1);
        }
      }

      // Print your local IP address:
      Serial.print("  My IP address: ");
      Serial.println(Ethernet.localIP());
    }
};
stwrt_network_class stwrt_network;
