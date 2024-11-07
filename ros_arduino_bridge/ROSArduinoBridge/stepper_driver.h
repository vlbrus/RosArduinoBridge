#ifndef STEPPER_DRIVER_H
#define STEPPER_DRIVER_H

#define LEFT_DIR_PIN 10
#define LEFT_STEP_PIN 11
#define RIGHT_DIR_PIN 12
#define RIGHT_STEP_PIN 13
#define STEPS_PER_REVOLUTION 1600
#define DISTANCE_PER_REVOLUTION 8


//#define N_STEPPER 2
//
//int stepsPerRevolution [N_STEPPER] = { 1600, 1600 };
//int distancePerRevolution [N_STEPPER] = { 8, 8 };
//
//byte stepperPins [4] = { 10, 11, 12, 13 };
//byte stepperInitPosition [N_STEPPER] = { 10, 10 }; 
//
//
//class MoveStepper
//{
//  public:
//    MoveStepper();
//    void initStepper(
//        int stepperPin,
//        int stepsPerRevolutionMS,
//        int distancePerRevolutionMM,
//        int initPosition);
//    void MoveTo();
//    void setTargetDistance(int distance);
//
//  private:
//    int stepsPerRevolutionMS;
//    int distancePerRevolutionMM,
//    int currentPositionMM;
//    int targetPositionMM;
//
//};
//
//MoveStepper steppers [N_STEPPER];

#endif
