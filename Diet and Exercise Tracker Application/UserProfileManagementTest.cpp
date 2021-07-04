/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UserProfileManagementTest.cpp
 * Author: McRoven
 * 
 * Created on May 12, 2021, 5:27 PM
 */

#include "UserProfileManagementTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(UserProfileManagementTest);

UserProfileManagementTest::UserProfileManagementTest() {
}

UserProfileManagementTest::~UserProfileManagementTest() {
}
void UserProfileManagementTest::testCalculateBMI(){
    UserProfileManagement *uspm = new UserProfileManagement();
    UserProfile *usp = new UserProfile("Tpnny Wijaya", "Male", 20, 65,165);
    //It should return the bmi of 23 ( because weight is 65 and height is 1.65m)
    uspm->CalculateBMITest(usp);
    CPPUNIT_ASSERT(uspm->testgetBMI()==23);
}
void UserProfileManagementTest::testTargeted(){
    UserProfileManagement *uspm = new UserProfileManagement();
    //settargetedcalories
    uspm->setTargetedCaloriesConsumed(1000);
    CPPUNIT_ASSERT(uspm->getTargeted()==1000);
}
void UserProfileManagementTest::testidentifyTargetedCalories(){
    UserProfileManagement *uspm = new UserProfileManagement();
    //It will trigger the identifytargetedcalories and return 1 from testiterator because targeted < consumed
    uspm->setTargetedCaloriesConsumed(1000);
    uspm->identifyTargetedCalories(2000);
    
    CPPUNIT_ASSERT(uspm->getIterator()==1);
}
void UserProfileManagementTest::testidentifyTargetedCalories2(){
    UserProfileManagement *uspm2 = new UserProfileManagement();
    //It will trigger the identifytargetedcalories and return 1 from testiterator because targeted > consumed
    uspm2->setTargetedCaloriesConsumed(2000);
    uspm2->identifyTargetedCalories(1000);
    CPPUNIT_ASSERT(uspm2->getIterator()==1);
}
void UserProfileManagementTest::testidentifyTargetedCalories3(){
    UserProfileManagement *uspm2 = new UserProfileManagement();
    //It will trigger the identifytargetedcalories and return 0 from testiterator because 
    //neither targeted > consumed nor targeted< consumed
    uspm2->setTargetedCaloriesConsumed(0);
    uspm2->identifyTargetedCalories(0);
    CPPUNIT_ASSERT(uspm2->getIterator()==0);
}
