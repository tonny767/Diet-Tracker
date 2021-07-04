/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MealTest.h
 * Author: McRoven
 *
 * Created on May 12, 2021, 4:41 PM
 */

#ifndef MEALTEST_H
#define MEALTEST_H
#include "Meal.h"
#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
using namespace std;
class MealTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(MealTest);
    CPPUNIT_TEST(testCategory);
    CPPUNIT_TEST_SUITE_END();

public:
    MealTest();
    virtual ~MealTest();

private:
    void testCategory();
};

#endif /* MEALTEST_H */

