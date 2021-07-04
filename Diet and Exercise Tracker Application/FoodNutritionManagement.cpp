/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FoodNutritionManagement.cpp
 * Author: McRoven
 * 
 * Created on May 8, 2021, 4:18 PM
 */

#include "FoodNutritionManagement.h"

FoodNutritionManagement::FoodNutritionManagement() {
}
//Add food nutrition details
void FoodNutritionManagement::AddFoodNutrition(){
    string name;
    int calories, protein, fats, carb;
    cout<<"Enter Food Name: ";
    getline(cin>>ws,name);
    cout<<"Enter calories in the food: ";
    cin>> calories;
    cout<<"Enter protein in the food in gram: ";
    cin >> protein;
    cout<<"Enter fats in the food in gram: ";
    cin >> fats;
    cout<<"Enter carbohydrates in the food in gram: ";
    cin>> carb;
    FoodNutrition *fn = new FoodNutrition(name, calories, protein, fats, carb);
    _foodnutrition.push_back(fn);
    fn->nutritionInfo();
}
//View Food Nutrition Details
int FoodNutritionManagement::ViewFoodNutrition(){
    int i = 0;
    while(i < _foodnutrition.size()){
        cout<<"Nutrition Info " << i+1 <<endl;
        _foodnutrition.at(i) -> nutritionInfo();
        i++;
    }
    return i;
}
//Edit food Nutrition Details
void FoodNutritionManagement::EditFoodNutrition(){
    string ask;
    int i = 0, iask;
    if(ViewFoodNutrition()!=0){
        cout<<"Which one are you editing: ";
        cin>>_selected;
        for(FoodNutrition *fn:_foodnutrition){
            i++;
            if(i == _selected){
                cout<< "Which one are you changing?"<<endl;
                cout<<"1.Food Name\n2.Calories\n3.Protein\n4.Fats\n5.Carbohydrate"<< endl;
                cout<<"Selection: ";
                cin>>_selected;
                if(_selected == 1){
                    cout<<"Enter new Food Name: ";
                    getline(cin>>ws, ask);
                    fn ->setFoodName(ask);
                    cout<<"Food Name changed successfully!"<<endl;
                    fn->nutritionInfo();
                    break;
                }
                else if(_selected == 2){
                    cout<<"Enter new Calories: ";
                    cin>> iask;
                    fn ->setCalories(iask);
                    cout<<"Calories changed successfully!"<<endl;
                    fn->nutritionInfo();
                    break;
                }
                else if(_selected == 3){
                    cout<<"Enter new Protein: ";
                    cin>> iask;
                    fn ->setProtein(iask);
                    cout<<"Protein changed successfully!"<<endl;
                    fn->nutritionInfo();
                    break;
                }
                else if(_selected == 4){
                    cout<<"Enter new Fats: ";
                    cin>> iask;
                    fn ->setFats(iask);
                    cout<<"Fats changed successfully!"<<endl;
                    fn->nutritionInfo();
                    break;
                }
                else if(_selected == 5){
                    cout<<"Enter new Carbohydrate: ";
                    cin>> iask;
                    fn ->setCarb(iask);
                    cout<<"Carbohydrate changed successfully!"<<endl;
                    fn->nutritionInfo();
                    break;
                }
            }
        }
    }else{
        cout<<"No Info available";
    }
}
//Delete food nutrition details
void FoodNutritionManagement::DeleteFoodNutrition(){
    if(ViewFoodNutrition()!=0){
        cout<<"Which one are you deleting: ";
        cin>>_selected;
        if(_selected > 0){
            _foodnutrition.erase(_foodnutrition.begin()+_selected-1);
            cout<<_selected<<" Deleted Successfully"<<endl;
        }else{
            cout<<"Not deleted."<<endl;
        }
        ViewFoodNutrition();
    }
}
//Search for specific food nutrition details
void FoodNutritionManagement::SearchFoodNutrition(){
    string ask;
    int intask;
    cout<<"What are you searching?"<<endl;
    cout<<"1. Food Name\n2. Calories\n3. Protein\n4. Fats\n5. Carbohydrates"<<endl;
    cout<<"Selection: ";
    cin >> _selected;
    if(_selected == 1){
        cout<<"Enter food name to search: ";
        getline(cin>>ws, ask);
        for(FoodNutrition *fn:_foodnutrition){
            if(fn->getFoodName() == ask){
                fn ->nutritionInfo();
            }
        }
    }
    else if(_selected == 2){
        cout<<"Enter amount of calories to search: ";
        cin>>intask;
        for(FoodNutrition *fn:_foodnutrition){
            if(fn->getCalories() == intask){
                fn ->nutritionInfo();
            }
        }
    }
    else if(_selected == 3){
        cout<<"Enter amount of protein to search: ";
        cin>>intask;
        for(FoodNutrition *fn:_foodnutrition){
            if(fn->getProtein() == intask){
                fn ->nutritionInfo();
            }
        }
    }
    else if(_selected == 4){
        cout<<"Enter Amount of Fats to search: ";
        cin>>intask;
        for(FoodNutrition *fn:_foodnutrition){
            if(fn->getFats() == intask){
                fn ->nutritionInfo();
            }
        }
    }
    else if(_selected == 5){
        cout<<"Enter Amount of carbohydrates to search: ";
        cin>>intask;
        for(FoodNutrition *fn:_foodnutrition){
            if(fn->getCarb() == intask){
                fn ->nutritionInfo();
            }
        }
    }
    
    
}
//This area is for testing only. STRICTLY FOR UNIT TESTING
void FoodNutritionManagement::addFoodNutrition2(FoodNutrition* fn){
    _foodnutrition.push_back(fn);
}
void FoodNutritionManagement::deleteFoodNutrition2(const int& i){
    _foodnutrition.erase(_foodnutrition.begin()+i-1);
}
void FoodNutritionManagement::searchFoodNutrition2(const string& s){
    for(FoodNutrition *fn:_foodnutrition){
        if(fn->getFoodName() == s){
            fn ->nutritionInfo();
            _testiterator++;
        }
    }
}
FoodNutritionManagement::FoodNutritionManagement(const FoodNutritionManagement& orig) {
}

FoodNutritionManagement::~FoodNutritionManagement() {
}

