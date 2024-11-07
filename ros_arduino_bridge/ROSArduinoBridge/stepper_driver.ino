
#ifdef USE_STEPPER



void initStepper(){
    pinMode(RIGHT_DIR_PIN, OUTPUT);
    pinMode(RIGHT_STEP_PIN, OUTPUT);
    pinMode(LEFT_DIR_PIN, OUTPUT);
    pinMode(LEFT_STEP_PIN, OUTPUT);
    digitalWrite(RIGHT_DIR_PIN, HIGH);
    digitalWrite(LEFT_DIR_PIN, HIGH);
}

void setStepperDistance(int targetDistance) {
  bool target = false;

  if (targetDistance < 0) {
    targetDistance = -targetDistance;
    digitalWrite(RIGHT_DIR_PIN, LOW);
    digitalWrite(LEFT_DIR_PIN, LOW);

  }
  else {
    digitalWrite(RIGHT_DIR_PIN, HIGH);
    digitalWrite(LEFT_DIR_PIN, HIGH);
  }

  float revolutionsToTarget = targetDistance /  DISTANCE_PER_REVOLUTION;

  float stepsToTarget = revolutionsToTarget * STEPS_PER_REVOLUTION;
    if (!target) {

      for (int i = 0; i < stepsToTarget; i++) {
        // These four lines result in 1 step:
        digitalWrite(LEFT_STEP_PIN, HIGH);
        digitalWrite(RIGHT_STEP_PIN, HIGH);
        delayMicroseconds(100);
        digitalWrite(LEFT_STEP_PIN, LOW);
        digitalWrite(RIGHT_STEP_PIN, LOW);
        delayMicroseconds(100);
      }

      target = true;
    }
  } 


#endif
