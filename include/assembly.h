

#pragma once

#include "vex.h"

class Assembly {
public:
    static mik::motor_group left_motors;
    static mik::motor_group right_motors;

    static vex::inertial imu;
    static vex::distance front_distance;
    static vex::distance rear_distance;

    void init();
    void control();
};