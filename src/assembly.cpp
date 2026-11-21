#include "vex.h"
#include "assembly.h"

mik::motor_group Assembly::left_motors({
    mik::motor(PORT1, false, blue_6_1, "left front"),
    mik::motor(PORT2, false, blue_6_1, "left back")
});

mik::motor_group Assembly::right_motors({
    mik::motor(PORT3, true, blue_6_1, "right front"),
    mik::motor(PORT4, true, blue_6_1, "right back")
});

vex::inertial Assembly::imu(PORT5);

vex::distance Assembly::front_distance(PORT6);
vex::distance Assembly::rear_distance(PORT7);

void Assembly::init() {
    // Sensor initialization will go here
}

void Assembly::control() {
    // Drivetrain control will go here
}