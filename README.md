## [qrcode.html](qrcode.html)

## [HOME](index.html)

![qrcode.png](qrcode.png)

# [VOICE OF THE MUSHROOM](https://github.com/LafeLabs/VOICE-OF-THE-MUSHROOM)

# [GITHUB REPLICATOR SCROLL](https://github.com/LafeLabs/VOICE-OF-THE-MUSHROOM)

# [LOCALHOST README EDITOR](http://localhost/VOICE-OF-THE-MUSHROOM/edit-readme.html)

## [16 bit ADC](https://www.adafruit.com/product/1085)
## [spike signal paper](https://www.nature.com/articles/s41598-018-26007-1)
## [language of mushrooms paper](https://royalsocietypublishing.org/rsos/article/9/4/211926/96736/Language-of-fungi-derived-from-their-electrical)
## [SETI@HOME, the inspiration for the global dirtscope](https://setiathome.berkeley.edu/)

MICROCONTROLLER PROBE OF VOLTAGE IN THE MYCELIUM!

PLACE PLUS, MINUS, AND SENSE ELECTRODES INTO MYCELIUM! 

CONNECT THEM TO VCC, GROUND, AND ONE OF THE ANALOG PINS OF A MICROCONTROLLER!

PROGRAM THAT MICROCONTROLLER TO CONTINUOUSLY SEND THE VALUE AT THE ANALOG TO DIGITAL CONVERTER DOWN THE SERIAL LINE AT 9600 BAUD!

PYTHON RUNNING ON A TRASH MAGIC SERVER READS NUMBERS FROM SERIAL AND CONVERTS THEM INTO A JSON FILE WHICH TAKES 666 POINTS AT A TIME, ONE POINT PER SECOND!

SO 666 POINTS IS 666 SECONDS WHICH IS JUST OVER 11 MINUTES! 
THAT IS ONE DATAGRAM!

IT'S A JSON OBJECT!
THAT JSON OBJECT HAS AN ARRAY OF VOLTAGES, A START TIME AND START DATE, AND A NOTES FIELD!

THE SERVER WHICH TAKES DATA ALSO PLAYS A TONE FROM 420 HZ THROUGH 1666 HZ WHICH THE OPERATOR USES TO TUNE THE ELECTRODE PLACEMENT!

DATA ARE SAVED TO FORKS OF THIS GITHUB REPOSITORY AND PUBLISHED TO GITHUB, FORMING A NETWORK OF LINKED DATA SETS!

THUS, THE FUNGI BECOME A CYBERNETIC NETWORK USING THE WORLD WIDE WEB!

WE USE THE EXISTING INFRASTRUCTURE OF GITHUB(PLEASE PORT ALL THIS TO CODEBERG AS SOON AS YOU CAN) TO SCALE A NETWORK OF CONNECTED FUNGI ACROSS THE WHOLE WORLD!  

THESE ELECTRODES CAN GO INTO LIVING SOIL AND COMPOST TO MONITOR THE INFORMATION CONTAINED IN THOSE NETWORKS!

THIS TECHNOLOGY IS AGNOSTIC ABOUT THE CHOICE OF MICROCONTROLLER TECHNOLOGY! IT CAN WORK WITH ARDUINO OR CIRCUIT PYTHON!

IT IS ALSO AGNOSTIC ABOUT THE OPERATING SYSTEM OF THE TRASH MAGIC SERVER!

IT CAN RUN ON WINDOWS, LINUX, AND MACOS! ALL IT NEEDS IS A WEB SERVER WITH PHP, PYTHON, AND SOME KIND OF MICROCONTROLLER SOFTWARE LIKE ARDUINO OR MU FOR CIRCUIT PYTYHON!

## [voice.ino](voice/voice.ino)

```
int voltage = 0;   //value of A0
  
void setup() {
   Serial.begin(9600);
}
  
void loop() {
  voltage = analogRead(A0);
  Serial.println(voltage);
  delay(10);
}
```

FILES:

 - [index.html(edit this README.md file)](index.html)
 - [edit-readme.html](edit-readme.html)
 - [voice.html(read the most recent data point of the most recent data set and play a tone at a frequency that maps from 0 to 1023 to 420 Hz to 1666 Hz)](voice.html)
 - [voice.ino(Ardruino program that sense the A0 ADC and sends it down the serial with a newline)](voice.ino)
 - [voice.py(python loop which fetches serial data and saves to json and png files)](voice.py)

every 11 minutes and 6 seconds another .png and .json file are saved. these can then be posted to a federated social media platform via voice.py, which runs until break from command line on any machine with python.

I WILL GET IT WORKING FOR THE ARDUINO UNO FOR THE INITIAL DEMONSTRATION!