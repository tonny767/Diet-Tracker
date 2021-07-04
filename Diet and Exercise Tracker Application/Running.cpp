/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Running.cpp
 * Author: McRoven
 * 
 * Created on May 10, 2021, 3:56 PM
 */

#include "Running.h"
//Default constructor
Running::Running(int tt, time_t d):Exercise(tt,d) {
}
//Calculate calories burned
int Running::CalculateCaloriesBurnt(){
    int newcalories;
    Exercise::_caloriesburned = 8;
    newcalories = Exercise::_caloriesburned * Exercise::_timetaken;
    return newcalories;
}
//print info
void Running::PrintExerciseInfo(){
    time_t t = getDate();
    tm *ltm = localtime(&t);
    cout<< "Running"<<endl;
    cout<< "Time taken: " << Exercise::_timetaken <<endl;
    cout<< "Calories Burned: " << CalculateCaloriesBurnt()<<endl;
    cout<< "Date: "<<  ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900 + ltm->tm_year << endl;
}

Running::~Running() {
}

