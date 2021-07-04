/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MealTest.cpp
 * Author: McRoven
 * 
 * Created on May 12, 2021, 4:41 PM
 */

#include "MealTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(MealTest);

MealTest::MealTest() {
}

MealTest::~MealTest() {
}

void MealTest::testCategory(){
    time_t t = 2000000;
    Meal *m =new Meal(Breakfast,t, "Food", 300);
    CPPUNIT_ASSERT(m->determineCategory()=="Breakfast");
}
