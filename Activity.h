//
// Created by malav on 03/12/2024.
//

#ifndef REGISTER_ACTIVITY_H
#define REGISTER_ACTIVITY_H

#include <string>
#include <ctime>

class Activity {

public:

    Activity(const std::string& description, const std::string& startDate);

    Activity() = default;

    int getIdActivity() const;

    void setIdActivity(int idActivity);

    std::string getDescription() const {
        return this->description;
    }

    void setDescription(const std::string& description) {
        this->description = description;
    }

    std::string getStartDate(){
        return this->startDate;
    }

    void setStartDate(const std::string& startDate){
        this->startDate = startDate;
    }

    std::time_t getEndDate() const{
        return this->endDate;
    }

    void setEndDate(const std::time_t& endDate){
        this->endDate = endDate;
    }


private:
    int idActivity;
    std::string description;
    std::string startDate;
    std::time_t endDate;
};


#endif //REGISTER_ACTIVITY_H
