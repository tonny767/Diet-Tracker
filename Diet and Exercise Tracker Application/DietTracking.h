/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DietTracking.h
 * Author: McRoven
 *
 * Created on May 10, 2021, 1:24 AM
 */
//Documentation in .cpp file
#include "Meal.h"
#include <time.h>
#include <iomanip>
#include <sstream>
#include <ctime>
#ifndef DIETTRACKING_H
#define DIETTRACKING_H
#include "UserProfileManagement.h"
#include <iostream>
#include <vector>
using namespace std;

class DietTracking {
public:
    DietTracking();
    DietTracking(const DietTracking& orig);
    void addMeal();
    void removeMeal();
    int viewMeal();
    int getCaloriesConsumed(){ return _consumption; }
    void viewDailyCaloriesConsumption();
    void viewMonthlyCaloriesConsumption();
    virtual ~DietTracking();
    //UNIT TESTING
    void addMeal2(Meal *m);
private:
    int _selected;
    vector<Meal *> _meal;
    int _consumption = 0;
};

#endif /* DIETTRACKING_H */

