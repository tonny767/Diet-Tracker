/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Freestyle.h
 * Author: McRoven
 *
 * Created on May 10, 2021, 11:00 PM
 */
//CHILD CLASS OF EXERCISE
#ifndef FREESTYLE_H
#define FREESTYLE_H
#include "Exercise.h"
#include <vector>
#include <iostream>
using namespace std;
class Freestyle:public Exercise {
public:
    Freestyle(int tt, time_t d);
    ~Freestyle();
    void PrintExerciseInfo();
    int CalculateCaloriesBurnt();
private:
    
};

#endif /* FREESTYLE_H */

