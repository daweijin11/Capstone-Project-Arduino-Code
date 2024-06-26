#include <AccelStepper.h>
// Define step constants
#define FULLSTEP 8
#define FULLSTEP 8

// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
AccelStepper Stepper1(FULLSTEP, 8, 10, 9, 11);
AccelStepper Stepper2(FULLSTEP, 0, 2, 1, 3);

void setup() {
	// setting the maximum speed and the acceleration factor,
	stepper1.setMaxSpeed(1000.0);
	stepper1.setAcceleration(50.0);
	stepper1.moveTo(10000);

	
	Stepper2.setMaxSpeed(1000.0);
	Stepper2.setAcceleration(50.0);
	Stepper2.moveTo(10000);
}

void loop() {
	if (stepper1.distanceToGo() == 0) 
		stepper1.moveTo(10000);
	if (stepper2.distanceToGo() == 0) 
		stepper2.moveTo(10000);


	Stepper1.run();
	Stepper2.run();
}
