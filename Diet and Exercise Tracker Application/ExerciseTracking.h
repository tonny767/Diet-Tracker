/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExerciseTracking.h
 * Author: McRoven
 *
 * Created on May 10, 2021, 3:02 PM
 */
//Documentation in .cpp file
#include <iomanip>
#include <ctime>
#include <sstream>
#ifndef EXERCISETRACKING_H
#define EXERCISETRACKING_H
#include "Exercise.h"
#include "Walking.h"
#include "Running.h"
#include "Freestyle.h"
#include "UserProfileManagement.h"
#include <vector>
#include <iostream>
#include <time.h>
using namespace std;
class ExerciseTracking {
public:
    ExerciseTracking();
    ExerciseTracking(const ExerciseTracking& orig);
    virtual ~ExerciseTracking();
    void AddExercise();
    void AddWalking();
    void AddRunning();
    void AddFreestyle();
    void viewMonthlyCaloriesBurned();
    void viewDailyCaloriesBurned();
    int viewExercise();
    //unittesting only
    int getIterator(){return _testiterator;}
    void AddWalking2(Exercise* ex);
    void viewMonthlyCaloriesBurned2(const string& ask);
private:
    vector<Exercise *> exercise;
    //unittesting private int
    int _testiterator = 0;
};

#endif /* EXERCISETRACKING_H */

