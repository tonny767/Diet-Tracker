/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FoodNutrition.cpp
 * Author: McRoven
 * 
 * Created on May 8, 2021, 3:46 PM
 */

#include "FoodNutrition.h"
//Default Constructor
FoodNutrition::FoodNutrition(string food, int c, int p, int f, int carb) {
    _foodname = food;
    _calories = c;
    _protein = p;
    _fat = f;
    _carbohydrate = carb;
}
//Display nutrition info
void FoodNutrition::nutritionInfo(){
    cout<< "Food Name: "<< _foodname<< endl;
    cout<< "Calories: "<< _calories<< endl;
    cout<< "Proteins: "<<_protein<<endl;
    cout<< "Fats: "<< _fat <<endl;
    cout<< "Carbohydrates: "<<_carbohydrate<<endl;
}
FoodNutrition::FoodNutrition(const FoodNutrition& orig) {
}

FoodNutrition::~FoodNutrition() {
}

