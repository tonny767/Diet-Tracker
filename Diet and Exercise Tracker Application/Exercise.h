/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercise.h
 * Author: McRoven
 *
 * Created on May 10, 2021, 12:06 PM
 */
//PARENT CLASS FOR WALKING,RUNNING,FREESTYLE classes
#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;
class Exercise {
public:
    Exercise(int tt, time_t _date);
    Exercise(const Exercise& orig);
    virtual ~Exercise();
    //abstract void and int
    virtual void PrintExerciseInfo() = 0;
    virtual int CalculateCaloriesBurnt() = 0;
    time_t getDate(){return _date;}
protected:
    int _timetaken;
    int _caloriesburned;
    time_t _date;
};

#endif /* EXERCISE_H */

