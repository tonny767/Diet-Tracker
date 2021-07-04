/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Meal.h
 * Author: McRoven
 *
 * Created on May 9, 2021, 4:36 PM
 */
//Documentation in .cpp file
#include "time.h"
#include "FoodNutritionManagement.h"
#ifndef MEAL_H
#define MEAL_H
#include <iostream>
#include <vector>
using namespace std;
//Enumeration Categories
enum Categories{
    Breakfast,
    Lunch,
    Dinner,
    Supper
};
class Meal {
public:
    Meal(Categories c, time_t d, string fn, int cal);
    Meal(const Meal& orig);
    virtual ~Meal();
    void mealInfo();
    string determineCategory();
    time_t getDate(){return _date;}
    int getCalories(){return _caloriesconsumed;}
//    friend class FoodNutritionManagement;
    
private:
    Categories _categories;
    time_t _date;
    int _caloriesconsumed;
    string _foodname;
};

#endif /* MEAL_H */

