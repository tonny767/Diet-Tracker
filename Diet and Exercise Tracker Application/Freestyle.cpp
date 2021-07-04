/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Freestyle.cpp
 * Author: McRoven
 * 
 * Created on May 10, 2021, 11:00 PM
 */

#include "Freestyle.h"
//DEFAULT CONSTRUCTOR BASE EXERCISE
Freestyle::Freestyle(int tt, time_t d):Exercise(tt,d) {
}
//override calculation for caloriesburnt
int Freestyle::CalculateCaloriesBurnt(){
    int newcalories;
    Exercise::_caloriesburned = 10;
    newcalories = Exercise::_caloriesburned * Exercise::_timetaken;
    return newcalories;
}
//override void for exercise info
void Freestyle::PrintExerciseInfo(){
    time_t t = getDate();
    tm *ltm = localtime(&t);
    cout<< "Freestyle"<<endl;
    cout<< "Time taken: " << Exercise::_timetaken <<endl;
    cout<< "Calories Burned: " << CalculateCaloriesBurnt()<<endl;
    cout<< "Date: "<<  ltm->tm_mday<<"/"<<1+ltm->tm_mon<<"/"<<1900 + ltm->tm_year << endl;
}

Freestyle::~Freestyle() {
}

