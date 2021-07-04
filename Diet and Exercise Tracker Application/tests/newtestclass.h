/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.h
 * Author: McRoven
 *
 * Created on May 8, 2021, 6:56:26 PM
 */

#ifndef NEWTESTCLASS_H
#define NEWTESTCLASS_H
#include "D:\Works\CT2\FoodNutritionManagement.h"
#include "FoodNutrition.h"
#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
using namespace std;
#include <vector>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);
    CPPUNIT_TEST(testSearchFoodNutrition);
    CPPUNIT_TEST(testDeleteFoodNutrition);
    CPPUNIT_TEST(testViewFoodNutrition);
    CPPUNIT_TEST(testEditFoodNutrition);
    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testViewFoodNutrition();
    void testEditFoodNutrition();
    void testDeleteFoodNutrition();
    void testSearchFoodNutrition();
    void testMethod();
};

#endif /* NEWTESTCLASS_H */

