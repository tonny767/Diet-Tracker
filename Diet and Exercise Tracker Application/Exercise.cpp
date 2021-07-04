/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercise.cpp
 * Author: McRoven
 * 
 * Created on May 10, 2021, 12:06 PM
 */

#include "Exercise.h"
//default constructor
Exercise::Exercise(int tt, time_t d) {
    _timetaken = tt;
    _date = d;
}

Exercise::Exercise(const Exercise& orig) {
}

Exercise::~Exercise() {
}

