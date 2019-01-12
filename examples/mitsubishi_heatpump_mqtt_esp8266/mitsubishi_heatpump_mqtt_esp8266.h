
//#define OTA

// wifi settings
const char* ssid     = "<YOUR WIFI SSID GOES HERE>";
const char* password = "<YOUR WIFI PASSWORD GOES HERE>";

// mqtt server settings
const char* mqtt_server   = "<YOUR MQTT BROKER IP/HOSTNAME GOES HERE>";
const int mqtt_port       = 1883;
const char* mqtt_username = "<YOUR MQTT USERNAME GOES HERE>";
const char* mqtt_password = "<YOUR MQTT PASSWORD GOES HERE>";

// mqtt client settings
// Note PubSubClient.h has a MQTT_MAX_PACKET_SIZE of 128 defined, so either raise it to 256 or use short topics

#define MQTT_CLIENT_SETTINGS(UNIT_ID) \
const char* client_id                   = "heatpump-controller-" #UNIT_ID;   \
const char* heatpump_topic              = "heatpump" #UNIT_ID;               \
const char* heatpump_set_topic          = "heatpump" #UNIT_ID "/set";        \
const char* heatpump_status_topic       = "heatpump" #UNIT_ID "/status";     \
const char* heatpump_timers_topic       = "heatpump" #UNIT_ID "/timers";     \
const char* heatpump_debug_topic        = "heatpump" #UNIT_ID "/debug";      \
const char* heatpump_debug_set_topic    = "heatpump" #UNIT_ID "/debug/set";

// for multiple units, use e.g., MQTT_CLIENT_SETTINGS(1)
// which will yield client_id=heatpump-controller-1,
// heatpump_topic=heatpump1, etc.
MQTT_CLIENT_SETTINGS()

// pinouts
const int redLedPin  = 0; // Onboard LED = digital pin 0 (red LED on adafruit ESP8266 huzzah)
const int blueLedPin = 2; // Onboard LED = digital pin 0 (blue LED on adafruit ESP8266 huzzah)

// sketch settings
const unsigned int SEND_ROOM_TEMP_INTERVAL_MS = 60000;
