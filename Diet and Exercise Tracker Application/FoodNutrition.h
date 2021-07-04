/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FoodNutrition.h
 * Author: McRoven
 *
 * Created on May 8, 2021, 3:46 PM
 */
//Documentation in .cpp file
#ifndef FOODNUTRITION_H
#define FOODNUTRITION_H
#include <iostream>
using namespace std;
class FoodNutrition {
public:
    FoodNutrition(string food, int c, int p, int f, int carb);
    FoodNutrition(const FoodNutrition& orig);
    virtual ~FoodNutrition();
    void nutritionInfo();
    void setFoodName(const string& food) { _foodname = food; }
    void setCalories(const int& c) { _calories = c; }
    void setProtein(const int& p) { _protein = p; }
    void setFats(const int& f) { _fat = f; }
    void setCarb(const int& carb) { _carbohydrate = carb; }
    string getFoodName(){ return _foodname; }
    int getCalories(){ return _calories; }
    int getProtein(){ return _protein; }
    int getFats(){ return _fat; }
    int getCarb(){ return _carbohydrate;}
private:
    string _foodname;
    string _ask;
    int _iask;
    int _calories;
    int _protein;
    int _fat;
    int _carbohydrate;
};

#endif /* FOODNUTRITION_H */

