#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor rightMotorMotorA = motor(PORT9, ratio18_1, false);
motor rightMotorMotorB = motor(PORT12, ratio18_1, false);
motor_group rightMotor = motor_group(rightMotorMotorA, rightMotorMotorB);
motor leftMotorMotorA = motor(PORT11, ratio18_1, true);
motor leftMotorMotorB = motor(PORT8, ratio18_1, true);
motor_group leftMotor = motor_group(leftMotorMotorA, leftMotorMotorB);
controller Controller1 = controller(primary);
rotation forward_spinny = rotation(PORT7, false);
rotation side_spinny = rotation(PORT14, false);
inertial Inertial16 = inertial(PORT16);
distance Distance15 = distance(PORT15);
optical Optical13 = optical(PORT13);
/*vex-vision-config:begin*/
vision Vision21 = vision (PORT21, 50);
/*vex-vision-config:end*/

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}