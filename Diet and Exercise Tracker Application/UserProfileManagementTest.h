/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UserProfileManagementTest.h
 * Author: McRoven
 *
 * Created on May 12, 2021, 5:27 PM
 */

#ifndef USERPROFILEMANAGEMENTTEST_H
#define USERPROFILEMANAGEMENTTEST_H
#include "UserProfile.h"
#include "UserProfileManagement.h"
#include <cppunit/extensions/HelperMacros.h>

class UserProfileManagementTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(UserProfileManagementTest);
    CPPUNIT_TEST(testCalculateBMI);
    CPPUNIT_TEST(testTargeted);
    CPPUNIT_TEST(testidentifyTargetedCalories);
    CPPUNIT_TEST(testidentifyTargetedCalories2);
    CPPUNIT_TEST(testidentifyTargetedCalories3);
    CPPUNIT_TEST_SUITE_END();

public:
    UserProfileManagementTest();
    virtual ~UserProfileManagementTest();

private:
    void testCalculateBMI();
    void testTargeted();
    void testidentifyTargetedCalories();
    void testidentifyTargetedCalories2();
    void testidentifyTargetedCalories3();
};

#endif /* USERPROFILEMANAGEMENTTEST_H */

