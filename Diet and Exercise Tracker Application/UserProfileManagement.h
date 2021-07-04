/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UserProfileManagement.h
 * Author: McRoven
 *
 * Created on May 11, 2021, 2:57 PM
 */
//Documentation in .cpp file
#include "UserProfile.h"
#include <vector>
#ifndef USERPROFILEMANAGEMENT_H
#define USERPROFILEMANAGEMENT_H
#include <iostream>
using namespace std;
class UserProfileManagement {
public:
    UserProfileManagement();
    UserProfileManagement(const UserProfileManagement& orig);
    virtual ~UserProfileManagement();
    void addUser();
    void editUser();
    void calculateBMI();
    void identifyTargetedCalories(const int& _caloriesconsumed);
    void setBurned(const int& burned){_caloriesBurned = burned;}
    void setConsumed(const int& consumed){_caloriesconsumed = consumed;}
    int setTargeted();
    //UNIT TESTING public
    float testgetBMI(){return _testbmi;}
    int getIterator(){return _testiterator;}
    int getTargeted(){return _targetedcaloriesconsumed;}
    void setTargetedCaloriesConsumed(const int& i ){_targetedcaloriesconsumed = i;}
    void CalculateBMITest(UserProfile *usp);
private:
    UserProfile *_userprofile;
    int _targetedcaloriesconsumed = 0;
    int _caloriesconsumed = 0;
    int _caloriesBurned;
    //UNIT TESTING VARIABLE
    int _testbmi;
    int _testiterator = 0;
};

#endif /* USERPROFILEMANAGEMENT_H */

