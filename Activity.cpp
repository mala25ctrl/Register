//
// Created by malav on 03/12/2024.
//

#include "Activity.h"

int Activity::getIdActivity() const {
    return idActivity;
}

void Activity::setIdActivity(int idActivity) {
    Activity::idActivity = idActivity;
}

Activity::Activity(const std::string &description, const std::string &startDate) {
    this->description = description;
    this->startDate = startDate;
}
