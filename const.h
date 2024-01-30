const char ssid[] = "FRITZ!Box 6660 Cable VK 2,4";
const char pass[] = "95200541253228319624";

char ftp_server[]             = "192.168.178.62";
char ftp_user[]               = "xxiFear";
char ftp_pass[]               = "13OjP2?!S";
//TODO Adjust the path for every camera
const char ftp_remote_dir[]   = "/Bilder und Videos/SaAnSt/CAM1";
const unsigned short ftp_port = 21;
const int EEPROM_SIZE = 8; //in bytes. Only 256 numbers. For more -> https://roboticsbackend.com/arduino-store-int-into-eeprom/

const bool SERIAL_DEBUG=true;
const int SEND_INTERVAL=60000;
const int WIFI_CONNECT_INTERVAL=30000;
const char FILE_NAME[]="file.jpg";
