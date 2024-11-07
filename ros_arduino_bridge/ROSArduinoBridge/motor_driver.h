/*
   Motor driver function definitions - by James Nugen
   */

 #ifdef L298_MOTOR_DRIVER
   #define RIGHT_MOTOR_BACKWARD 11
   #define LEFT_MOTOR_BACKWARD  7
   #define RIGHT_MOTOR_FORWARD  10
   #define LEFT_MOTOR_FORWARD   9
   #define RIGHT_MOTOR_ENABLE 12
   #define LEFT_MOTOR_ENABLE 13
 #endif

#ifdef HW039_MOTOR_DRIVER //hw-039
  #define RIGHT_MOTOR_R_PWM 6
  #define RIGHT_MOTOR_L_PWM 9
  #define RIGHT_MOTOR_R_ENABLE 2
  #define RIGHT_MOTOR_L_ENABLE 5
  #define LEFT_MOTOR_R_PWM 3
  #define LEFT_MOTOR_L_PWM 5
  #define LEFT_MOTOR_R_ENABLE 7
  #define LEFT_MOTOR_L_ENABLE 11
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
