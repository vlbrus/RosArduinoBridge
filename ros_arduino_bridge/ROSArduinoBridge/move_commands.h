#define USE_BASE
#ifdef USE_BASE
#define HW039_MOTOR_DRIVER
#include "motor_driver.h"
#endif




#ifdef USE_BASE
long move_time = 0;


void move_A1() {
  Serial.println("Start command");
  move_time  = millis();
  setMotorSpeeds(100, 100);
  if ((millis() - move_time ) > 2000) {

    setMotorSpeeds(0, 0);
  }
  Serial.println("End command");

}
#endif
