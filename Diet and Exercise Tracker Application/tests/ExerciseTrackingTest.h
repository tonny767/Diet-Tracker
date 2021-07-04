/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ExerciseTrackingTest.h
 * Author: McRoven
 *
 * Created on May 12, 2021, 5:15:12 PM
 */
#include <iomanip>
#include <ctime>
#include <sstream>
#ifndef EXERCISETRACKINGTEST_H
#define EXERCISETRACKINGTEST_H
#include "D:\Works\CT2\ExerciseTracking.h"
#include "D:\Works\CT2\Exercise.h"
#include "Running.h"
#include "Walking.h"
#include "Freestyle.h"
#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
using namespace std;
class ExerciseTrackingTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ExerciseTrackingTest);
    CPPUNIT_TEST(testMonthlyCalories);
    CPPUNIT_TEST_SUITE_END();

public:
    ExerciseTrackingTest();
    virtual ~ExerciseTrackingTest();
private:
    void testMonthlyCalories();
};

#endif /* EXERCISETRACKINGTEST_H */

