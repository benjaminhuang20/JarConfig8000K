#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

motor LeftFront = motor(PORT9, ratio6_1, false);
motor LeftBack = motor(PORT10, ratio6_1, true);
motor RightFront = motor(PORT11, ratio6_1, false); 
motor RightBack = motor(PORT12, ratio6_1, true);

motor liftLeft = motor(PORT9, ratio18_1, false); 
motor liftRight = motor(PORT8, ratio18_1, true); 

motor_group lift = motor_group(liftLeft, liftRight); 



//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  lift.setPosition(0, degrees);
  lift.setStopping(hold);
  // nothing to initialize
}