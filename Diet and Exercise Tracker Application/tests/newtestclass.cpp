/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.cpp
 * Author: McRoven
 *
 * Created on May 8, 2021, 6:56:26 PM
 */

#include "newtestclass.h"
#include "D:\Works\CT1\FoodNutritionManagement.h"
#include "D:\Works\CT1\FoodNutrition.h"

CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}
void newtestclass::testViewFoodNutrition(){
    FoodNutrition *fn = new FoodNutrition("Food", 300, 200, 100, 100);
    FoodNutrition *fn2 = new FoodNutrition("Food2", 1, 1, 1, 1);
    FoodNutritionManagement *fnm = new FoodNutritionManagement();
    fnm->addFoodNutrition2(fn);
    fnm->addFoodNutrition2(fn2);
    fnm->ViewFoodNutrition();
    CPPUNIT_ASSERT(fnm->ViewFoodNutrition()==2);
}
void newtestclass::testEditFoodNutrition(){
    FoodNutritionManagement *fnm = new FoodNutritionManagement();
    FoodNutrition *fn = new FoodNutrition("Food", 1,1,1,1);
    FoodNutrition *fn2 = new FoodNutrition("Food", 2,2,2,2);
    FoodNutrition *fn3 = new FoodNutrition("Food", 3,3,3,3);
    fnm -> addFoodNutrition2(fn);
    fnm -> addFoodNutrition2(fn2);
    fnm -> addFoodNutrition2(fn3);
    fn->setFoodName("Chicken Rice");
    fnm->ViewFoodNutrition();
    CPPUNIT_ASSERT(fn->getFoodName()== "Chicken Rice");
}
void newtestclass::testDeleteFoodNutrition(){
    FoodNutritionManagement *fnm = new FoodNutritionManagement();
    FoodNutrition *fn = new FoodNutrition("Food", 1,1,1,1);
    FoodNutrition *fn2 = new FoodNutrition("Food", 2,2,2,2);
    FoodNutrition *fn3 = new FoodNutrition("Food", 3,3,3,3);
    fnm -> addFoodNutrition2(fn);
    fnm -> addFoodNutrition2(fn2);
    fnm -> addFoodNutrition2(fn3);
    fnm ->deleteFoodNutrition2(1);
    CPPUNIT_ASSERT(fnm->ViewFoodNutrition()== 2);
}
void newtestclass::testSearchFoodNutrition(){
    FoodNutritionManagement *fnm = new FoodNutritionManagement();
    FoodNutrition *fn = new FoodNutrition("Food", 1,1,1,1);
    FoodNutrition *fn2 = new FoodNutrition("Food2", 2,2,2,2);
    FoodNutrition *fn3 = new FoodNutrition("Food3", 3,3,3,3);
    fnm -> addFoodNutrition2(fn);
    fnm -> addFoodNutrition2(fn2);
    fnm -> addFoodNutrition2(fn3);
    //search fn with food name "food"
    fnm ->searchFoodNutrition2("Food");
    CPPUNIT_ASSERT(fnm->testIterator()== 1);
}
void newtestclass::setUp() {
    
}

void newtestclass::tearDown() {
}

void newtestclass::testMethod() {
    CPPUNIT_ASSERT(true);
}
