#include "pcf8574MultiInterrupts.h"
#include <Arduino.h>
void isr();
void initPCF8574(unsigned char adr,unsigned char interrupt_pin){
  attachInterrupt(digitalPinToInterrupt(interrupt_pin),isr,RISING);
}
void isr(){

}