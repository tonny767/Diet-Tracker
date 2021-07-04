/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Walking.cpp
 * Author: McRoven
 * 
 * Created on May 10, 2021, 12:20 PM
 */

#include "Walking.h"
//default constructor with base from exercise
Walking::Walking(int tt, time_t d):Exercise(tt, d) {
    
}
//override int to calculate calories burnt with different caloriesburned rate
int Walking::CalculateCaloriesBurnt(){
    int newcalories;
    //_caloriesburned varied for each activity
    Exercise::_caloriesburned = 6;
    newcalories = Exercise::_caloriesburned * Exercise::_timetaken;
    return newcalories;
}
//View info
void Walking::PrintExerciseInfo(){
    time_t t = getDate();
    tm *ltm = localtime(&t);
    cout<< "Walking"<<endl;
    cout<< "Time taken: " << Exercise::_timetaken <<endl;
    cout<< "Calories Burned: " << CalculateCaloriesBurnt()<<endl;
    cout<< "Date: "<<  ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900 + ltm->tm_year<< endl;
}
//ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900 + ltm->tm_year
Walking::~Walking() {
}

