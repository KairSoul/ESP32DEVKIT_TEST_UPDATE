#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>

LED led1(LED1_PIN, LED1_ACT);
LED led2(LED2_PIN, LED2_ACT);

void btnPush();
void btnDoubleClick();
void btnHold();

OneButton button1(BTN1_PIN, !BTN1_ACT);
OneButton button2(BTN2_PIN, !BTN2_ACT);

static int selectedLED = 1; //defalt led

void setup() {

  //led1 setup
  led1.off();
  button1.attachClick(btnPush);
  button1.attachDoubleClick(btnDoubleClick);
  button1.attachLongPressStart(btnHold);

  //led 2 setup
  led2.off();
  button1.attachClick(btnPush);
  button1.attachDoubleClick(btnDoubleClick);
  button1.attachLongPressStart(btnHold);
}

void loop() {



  //start
  led.loop();
  button.tick();

}

void btnDoubleClick(){
  if(selectedLED == 1){
    selectedLED = 2;
  }else{
    selectedLED = 1;
  }
}

void btnPush(){
  if(selectedLED == 1){
    led1.flip();
  }else{
    led2.flip();
  }
}


void btnHold()
{
  if(selectedLED == 1){
    led1.blink();
  }else{
    led2.blink();
  }
}