//
// Created by malav on 03/12/2024.
//

#ifndef REGISTER_REGISTER_H
#define REGISTER_REGISTER_H

#include "Activity.h"
#include <iostream>


class Register {
public:
    Register(int size);

    ~Register() {
        std::cout << "Libera Memoria" << std::endl;
        delete[] this->activities;
    }

    bool addActivity(const Activity& activity);


private:
    Activity *activities;
    int size;
    int numberOfActivity;
};


#endif //REGISTER_REGISTER_H
