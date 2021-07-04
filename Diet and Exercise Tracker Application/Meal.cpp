/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Meal.cpp
 * Author: McRoven
 * 
 * Created on May 9, 2021, 4:36 PM
 */

#include "Meal.h"
//Default constructor
Meal::Meal(Categories c, time_t d, string fn, int cal) {
    _categories = c;
    _date = d;
    _foodname = fn;
    _caloriesconsumed = cal;
}
//determine the category by the enumeration detail entered;
string Meal::determineCategory(){
    string result;
    if(_categories == Breakfast){
        result = "Breakfast";
    }
    else if (_categories== Lunch){
        result = "Lunch";
    }
    else if (_categories== Dinner){
        result = "Dinner";
    }
    else if (_categories== Supper){
        result = "Supper";
    }
    return result;
}
//Display meal info
void Meal::mealInfo(){
    tm *ltm = localtime(&_date);
    cout<<"Meal Category: "<< determineCategory()<<endl;
    cout<<"Date:"<< ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900 + ltm->tm_year << endl;
    cout<<"Food name: "<< _foodname<<endl;
    cout<<"Calories Consumed:"<<_caloriesconsumed<<endl;
}

Meal::Meal(const Meal& orig) {
}

Meal::~Meal() {
}

