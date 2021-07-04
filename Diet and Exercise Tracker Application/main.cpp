/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: McRoven
 *
 * Created on May 8, 2021, 12:57 AM
 */
#include <iomanip>
#include <sstream>
#include <ctime>
#include <time.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include "UserProfile.h"
#include "UserProfileManagement.h"
#include "FoodNutritionManagement.h"
#include "FoodNutrition.h"
#include "DietTracking.h"
#include "Exercise.h"
#include "Walking.h"
#include "Meal.h"
#include "ExerciseTracking.h"
using namespace std;
/*
 * 
 */
void MainMenu(UserProfileManagement *uspm, FoodNutritionManagement *fnm, DietTracking *dt, ExerciseTracking *et){
    int _selected;
    uspm->addUser();
    while(true){
        cout<<"1.UserProfile Management"<< endl;
        cout<<"2.FoodNutrition Management"<<endl;
        cout<<"3.Diet Tracking "<<endl;
        cout<<"4.Exercise Tracking"<<endl;
        cout<<"0.Quit the Program"<<endl;
        cout<<"Selection: ";
        cin>>_selected;
        if(_selected == 1){
            cout<<"User Profile Management\n"<<endl;
            cout<<"1.Edit Personal Information"<<endl;
            cout<<"2.Calculate BMI"<<endl;
            cout<<"3.Set Targeted Calories"<<endl;
            cout<<"4.View Daily Calories Consumed & Check Exceeded"<<endl;
            cout<<"5.View Daily Calories Burnt"<<endl;
            cout<<"Selection: ";
            cin>>_selected;
            switch(_selected){
                case 1:
                    uspm ->editUser();
                    break;
                case 2:
                    uspm->calculateBMI();
                    break;
                case 3:
                    uspm->setTargeted();
                    break;
                case 4:
                    dt->viewDailyCaloriesConsumption();
                    uspm->identifyTargetedCalories(dt->getCaloriesConsumed());
                    break;
                case 5:
                    et ->viewDailyCaloriesBurned();
                    break;
            }
        }
        else if(_selected == 2){
            cout<<"Food Nutrition Management\n"<<endl;
            cout<<"1.Add Food Nutrition"<<endl;
            cout<<"2.Edit Food Nutrition"<<endl;
            cout<<"3.Delete Food Nutrition"<<endl;
            cout<<"4.Search Food Nutrition"<<endl;    
            cout<<"Selection: ";
            cin>>_selected;
            switch(_selected){
                case 1:
                    fnm ->AddFoodNutrition();
                    break;
                case 2:
                    fnm->EditFoodNutrition();
                    break;
                case 3:
                    fnm->DeleteFoodNutrition();
                    break;
                case 4:
                    fnm->SearchFoodNutrition();
                    break;
            }
        }
        else if(_selected == 3){
            cout<<"Diet Tracking\n"<<endl;
            cout<<"1.Add Meal"<<endl;
            cout<<"2.Remove Meal"<<endl;
            cout<<"3.View Monthly Calories Consumption"<<endl;
            cout<<"Selection: ";
            cin>>_selected;
            switch(_selected){
                case 1:
                    dt ->addMeal();
                    break;
                case 2:
                    dt->removeMeal();
                    break;
                case 3:
                    dt->viewMonthlyCaloriesConsumption();
                    break;
            }
        }
        else if(_selected == 4){
            cout<<"Exercise Tracking\n"<<endl;
            cout<<"1.Add Exercise"<<endl;
            cout<<"2.View Monthly Calories Burned"<<endl;
            cout<<"Selection: ";
            cin>>_selected;
            switch(_selected){
                case 1:
                    cout<<"1.Walking"<<endl;
                    cout<<"2.Running"<<endl;
                    cout<<"3.Freestyle"<<endl;
                    cout<<"Selection: ";
                    cin>>_selected;
                    if(_selected == 1){
                        et->AddWalking();
                    }
                    else if(_selected == 2){
                        et->AddRunning();
                    }
                    else if(_selected == 3){
                        et->AddFreestyle();
                    }
                    break;
                case 2:
                    et->viewMonthlyCaloriesBurned();
                    break;
            }
        }
        else if(_selected == 0){
            cout<<"Thanks for using the program."<<endl;
            break;
        }
    }
}
int main(int argc, char** argv) {   
    UserProfileManagement *uspm = new UserProfileManagement();
    FoodNutritionManagement *fnm = new FoodNutritionManagement();
    DietTracking *dt = new DietTracking();
    ExerciseTracking *et = new ExerciseTracking();
    MainMenu(uspm,fnm,dt,et);
    system("pause");
    return 0;   
}
//1617033600 - 30/03/2021
//1619712000 - 30/04/2021

