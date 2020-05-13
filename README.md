# speaker-sd
## Arduino program to play audio files with a speaker
### Requirements:
 - [LM386 Audio Amplifier](https://www.optimusdigital.ro/en/audio-amplifiers/45-lm385-audio-amplifier.html)
 - [MicroSD Card Module](https://www.optimusdigital.ro/en/memories/1516-microsd-card-slot-module.html)
 - ≥32 GB MicroSD Card <br>
 - 5W 4 Ω Speaker
 - Arduino board (I've used an Arduino Nano) <br>
 - 5V - 12V power supply
 
 ### Pin configuration:
- MicroSD Card Module: 
  - CS <--> 4 (can be changed in the code, but it's recommended to leave it to 4)
  - SCK <--> 13
  - MOSI <--> 11
  - MISO <--> 12
  - VCC <--> 5V
  - GND <--> GND
- Audio Amplifier:
 IN:
  - GND <--> GND (on the Arduino)
  - GND <--> GND (on the power supply)
  - IN <--> 9 (can be changed in the code)
  - VCC <--> 5V - 12V (on the power supply)<br>

   OUT:
     - GND <--> GND (speaker)
     - OUT <--> VCC (speaker)
### Audio and card formatting:
Card formatting: I've used the [formatting tool provided by sdcard.org](https://www.sdcard.org/downloads/formatter/index.html). If that doesn't work, you could try to format it FAT32 and pray. <br> Audio formatting: I've used [this](https://audio.online-convert.com/convert-to-wav) online convertor to convert from mp3 to wav. You will need to format it like in the following image: <br>
![](https://i.imgur.com/awleYFY.png)
<br>After you're done formatting the two, you should put the wav file in your MicroSD Card (try to use a simple name like test or music) and the MicroSD Card in to the MicroSD Card Module.

### Libraries for the code:
- SD -- included with the Arduino IDE
- SPI -- included with the Arduino IDE
- TMRpcm -- [download the latest version](https://github.com/TMRh20/TMRpcm/releases) and include it in Arduino IDE by going to Sketch -> Include Library -> Add .ZIP Library and then select the file you've downloaded

### Issues:
If you have any issues try to open Serial Monitor on 9600 baud in the Arduino IDE while you have your Arduino plugged it and see if it says _SD fail_. If that's the case you have problems with either the MicroSD Card itself or the MicroSD Card Module. <br> Verify the pins connections and the card formatting settings. <br> Maybe try to change the potentiometer value on the amplifier. <br> If you have any other issues [contact me on Reddit](https://www.reddit.com/user/sabin_M1).
