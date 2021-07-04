/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Running.h
 * Author: McRoven
 *
 * Created on May 10, 2021, 3:56 PM
 */
//CHILD CLASS OF EXERCISE
#ifndef RUNNING_H
#define RUNNING_H
#include "Exercise.h"
#include <vector>
#include <iostream>
using namespace std;
class Running:public Exercise {//:public Exercise
public:
    Running(int tt, time_t d);
    Running(const Running& orig);
    ~Running();
    void PrintExerciseInfo();
    int CalculateCaloriesBurnt();
private:
};

#endif /* RUNNING_H */

