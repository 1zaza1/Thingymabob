/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\ecrro                                            */
/*    Created:      Mon Sep 18 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// rightMotor           motor_group   9, 12           
// leftMotor            motor_group   11, 8           
// Controller1          controller                    
// forward_spinny       rotation      7               
// side_spinny          rotation      14              
// Inertial16           inertial      16              
// Distance15           distance      15              
// Optical13            optical       13              
// Vision21             vision        21              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "iostream"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true){
    rightMotor.spin(forward,Controller1.Axis3.position(percent), percent);
    leftMotor.spin(forward,Controller1.Axis2.position(percent),percent);
    if(Distance15.objectDistance( inches) <  10 && !(Optical13.color() == vex::color::green) && (Controller1.Axis3.position(percent) > 0 || Controller1.Axis2.position(pct) > 0)){
      rightMotor.stop();
      leftMotor.stop();      
      
    }
    std::cout<<Inertial16.heading(degrees);
    std::cout<<" ";
  } 
} 
