/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Walking.h
 * Author: McRoven
 *
 * Created on May 10, 2021, 12:20 PM
 */
////CHILD CLASS OF PARENT CLASS EXERCISE
#include <ctime>
#ifndef WALKING_H
#define WALKING_H
#include "Exercise.h"
#include <iostream>
using namespace std;
class Walking:public Exercise{
    public:
        Walking(int tt, time_t d);
        Walking(const Walking& orig);
        virtual ~Walking();
        void PrintExerciseInfo();
        int CalculateCaloriesBurnt();
        
    private:
};

#endif /* WALKING_H */

