using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern motor_group rightMotor;
extern motor_group leftMotor;
extern controller Controller1;
extern rotation forward_spinny;
extern rotation side_spinny;
extern inertial Inertial16;
extern distance Distance15;
extern optical Optical13;
extern signature Vision21__SIG_1;
extern signature Vision21__SIG_2;
extern signature Vision21__SIG_3;
extern signature Vision21__SIG_4;
extern signature Vision21__SIG_5;
extern signature Vision21__SIG_6;
extern signature Vision21__SIG_7;
extern vision Vision21;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );