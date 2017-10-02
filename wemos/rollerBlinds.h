#include "AccelStepper.h"

class RollerBlinds
{
  public:
  RollerBlinds(int in1, int in2, int in3, int in4)
    : stepper(AccelStepper::HALF4WIRE, in1,in2,in3,in4)
  {
    stepper.moveTo(posFullDown);
    stepper.setMaxSpeed(500);
    stepper.setAcceleration(100);
    Serial.print("Motor created.");
  }

  void loop() {
    stepper.runSpeed();
  }
  
  private:
    AccelStepper stepper;
    int posFullUp = 0;
    int posFullDown = 20000;
};
