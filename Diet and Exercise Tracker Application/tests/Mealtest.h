/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Mealtest.h
 * Author: McRoven
 *
 * Created on May 12, 2021, 4:40:22 PM
 */

#ifndef MEALTEST_H
#define MEALTEST_H

#include <cppunit/extensions/HelperMacros.h>

class Mealtest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(Mealtest);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    Mealtest();
    virtual ~Mealtest();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif /* MEALTEST_H */

