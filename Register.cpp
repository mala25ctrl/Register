//
// Created by malav on 03/12/2024.
//

#include "Register.h"

Register::Register(int size) {
    this->activities = new Activity[size];
    this->size = size;
    this->numberOfActivity = 0;
}

bool Register::addActivity(const Activity &activity) {
    if ((numberOfActivity + 1) == size)
        return false;
    this->activities[numberOfActivity] = activity;
    numberOfActivity++;
    return true;
}
