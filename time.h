#include <string>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <TimeLib.h>

const long utcOffsetWinter = 3600;  // Offset from UTC in seconds (3600 seconds = 1h) -- UTC+1 (Central European Winter Time)
const long utcOffsetSummer = 7200;  // Offset from UTC in seconds (7200 seconds = 2h) -- UTC+2 (Central European Summer Time)

WiFiUDP udpSocket;
NTPClient ntpClient(udpSocket, "0.de.pool.ntp.org");

// Variables to save date and time
String formattedDate;
String dayStamp;
String timeStamp;

void timeClientInit() {
  // Initialize a NTPClient to get time
  ntpClient.begin();
  // Set offset time in seconds to adjust for your timezone, for example:
  // GMT +1 = 3600
  // GMT +8 = 28800
  // GMT -1 = -3600
  // GMT 0 = 0
  ntpClient.setTimeOffset(3600);
}

// Must pass buff[32]
String getCurrentDateAsString() {
  // while (!ntpClient.update()) {
  //   Serial.println("Force Update");
  //   ntpClient.forceUpdate();
  // }
  ntpClient.update();
  Serial.println("Get Epoch Time");
  return String(ntpClient.getEpochTime());
  //unsigned long t = ntpClient.getEpochTime();
  //sprintf(outString, "%02d_%02d_%02dT%02d:%02d:%02d", day(t), month(t), year(t), hour(t), minute(t), second(t));
  //Serial.println(outString);
}
