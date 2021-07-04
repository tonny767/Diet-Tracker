/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExerciseTrackingTest.cpp
 * Author: McRoven
 * 
 * Created on May 12, 2021, 4:47 PM
 */

#include "ExerciseTrackingTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ExerciseTrackingTest);

ExerciseTrackingTest::ExerciseTrackingTest() {
}

ExerciseTrackingTest::~ExerciseTrackingTest() {
}

void ExerciseTrackingTest::testMonthlyCalories(){
    struct tm tm = {0};
    istringstream iss("30/05/2021");
    iss>> get_time(&tm,"%d/%m/%Y");
    time_t t = mktime(&tm);
    struct tm tm2 = {0};
    istringstream iss2("05/05/2021");
    iss2>> get_time(&tm2,"%d/%m/%Y");
    time_t t2 = mktime(&tm2);
    struct tm tm3 = {0};
    istringstream iss3("01/04/2021");
    iss3>> get_time(&tm3,"%d/%m/%Y");
    time_t t3 = mktime(&tm3);
    ExerciseTracking *et = new ExerciseTracking();
    Walking *fn = new Walking(35, t);
    Running *fn2 = new Running(40, t2);
    Freestyle *fn3 = new Freestyle(40, t3);
    et -> AddWalking2(fn);
    et -> AddWalking2(fn2);
    et -> AddWalking2(fn3);
    //only search for the month 05/2021 so must be 2  as returned value
    et -> viewMonthlyCaloriesBurned2("05/2021");
    CPPUNIT_ASSERT(et->getIterator()==1);
}