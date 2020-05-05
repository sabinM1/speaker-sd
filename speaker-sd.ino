#include "SD.h"
#define SD_ChipSelectPin 4 //CS pin, can be changed
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

void setup(){
tmrpcm.speakerPin = 9; //speaker pin, can be changed
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) {
Serial.println("SD fail");
return;
}

tmrpcm.setVolume(3); //1-6
tmrpcm.play("music.wav"); //change "music" to the filename you have
}

void loop(){  }
