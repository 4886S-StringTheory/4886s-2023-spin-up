/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Aden                                             */
/*    Created:      Mon May 16 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "../include/main.h"

using namespace vex;

competition Competition;

int main() {
  B_SCREEN.print("main");
  pre_auton();
  Competition.autonomous(autonomous);
  Competition.drivercontrol(opcontrol);

  while (true) {
    task::sleep(20);
  }
}
