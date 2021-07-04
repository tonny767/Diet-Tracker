/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FoodNutritionManagement.h
 * Author: McRoven
 *
 * Created on May 8, 2021, 4:18 PM
 */
//Documentation in .cpp file
#ifndef FOODNUTRITIONMANAGEMENT_H
#define FOODNUTRITIONMANAGEMENT_H
#include <string>
#include <vector>
#include "FoodNutrition.h"
#include <iostream>
using namespace std;
class FoodNutritionManagement {
public:
    FoodNutritionManagement();
    FoodNutritionManagement(const FoodNutritionManagement& orig);
    void AddFoodNutrition();
    void EditFoodNutrition();
    void DeleteFoodNutrition();
    void SearchFoodNutrition();
    int ViewFoodNutrition();
    virtual ~FoodNutritionManagement();
    //Unit testing voids
    int testIterator(){return _testiterator;}
    void addFoodNutrition2(FoodNutrition* fn);
    void deleteFoodNutrition2(const int& i);
    void searchFoodNutrition2(const string& s);
private:
    int _selected;
    //testing private number
    int _testiterator=0;
protected:
    vector<FoodNutrition *> _foodnutrition;
};

#endif /* FOODNUTRITIONMANAGEMENT_H */

