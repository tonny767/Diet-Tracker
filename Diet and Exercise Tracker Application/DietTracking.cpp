/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DietTracking.cpp
 * Author: McRoven
 * 
 * Created on May 10, 2021, 1:24 AM
 */

#include "DietTracking.h"

DietTracking::DietTracking() {
    
}
//Add meals
void DietTracking::addMeal(){
    string category,ask,foodname;
    int iask;
    Categories d;
    cout<<"Enter Food Category (b/l/d/s): ";
    cin>> category;
    while(category != "b" | category != "l" | category !="d"|category!="s"){
        if(category == "b"){
            d = Breakfast;
            break;
        }
        else if(category == "l"){
            d = Lunch;
            break;
        }
        else if(category == "d"){
            d = Dinner;
            break;
        }
        else if(category == "s"){
            d = Supper;
            break;
        }
        else{ 
            cout<< "Wrong input"<<endl;
            cout<<"Enter Food Category (b/l/d/s): ";
            cin>> category;
        }
    }
    cout<<"Enter Food Consumption Date (dd/MM/yyyy): ";
    cin>>ask;
    
    
    struct tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%d/%m/%Y");
    time_t time = mktime(&tm);
    cout<<"Enter Food Name: ";
    cin>>ws;
    getline(cin,foodname);
    
    cout<<"Enter Calories of the food: ";
    cin>>iask;
    Meal *m = new Meal(d, time,foodname, iask);
    _meal.push_back(m);
    viewMeal();
    
}
//To view meals
int DietTracking::viewMeal(){
    int i = 0;
    while(i < _meal.size()){
        cout<<"Meal " << i+1 <<endl;
        _meal.at(i) -> mealInfo();
        i++;
    }
    return i;
}
//To view Monthly Calories consumption
void DietTracking::viewMonthlyCaloriesConsumption(){
    int total= 0,i = 0;
    string ask;
    cout<<"Enter Date to search (mm/yyyy): ";
    cin>>ask;
    struct tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%m/%Y");
    time_t time = mktime(&tm);
    for(Meal *m:_meal){
        if(m->getDate()>= time && m->getDate()<= time +2592000){
            i++;
            cout<<"Meal "<<i<<"\n"<<endl;
            m ->mealInfo();
            total = total + m->getCalories();
        }
    }
    if(total!=0){
        cout<< "\nTotal monthly: "<<total<<endl;
    }
    else{
        cout<<"No Exercises recorded this month!"<<endl;
    }
}
//To view Daily calories consumption
void DietTracking::viewDailyCaloriesConsumption(){
    string ask;
    int i = 0,total = 0;
    cout<<"Enter Date to search (dd/mm/yyyy): ";
    cin>>ask;
    tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%d/%m/%Y");
    time_t time = mktime(&tm);
    for(Meal *m:_meal){
        if(m->getDate()>= time && m->getDate() < time +86400){
            i++;
            cout<<"Meal "<<i<<"\n"<<endl;
            m ->mealInfo();
            total = total + m->getCalories();
        }
    }
    _consumption = total;
}
//to remove meal
void DietTracking::removeMeal(){
    if(viewMeal()!=0){
        cout<<"Which one are you deleting: ";
        cin>>_selected;
        if(_selected > 0){
            _meal.erase(_meal.begin()+_selected-1);
            cout<<"Meal Deleted Successfully"<<endl;
        }else{
            cout<<"Not deleted."<<endl;
        }
        cout<<"New Meal List"<<endl;
        viewMeal();
    }
}


//UNIT TESTING ONLY
void DietTracking::addMeal2(Meal *m){
    _meal.push_back(m);
}
DietTracking::~DietTracking() {
}

