/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExerciseTracking.cpp
 * Author: McRoven
 * 
 * Created on May 10, 2021, 3:02 PM
 */

#include "ExerciseTracking.h"
ExerciseTracking::ExerciseTracking() {
    
}
//To view Exercises
int ExerciseTracking::viewExercise(){
    int i = 0;
    while(i < exercise.size()){
        cout<<"Exercise " << i+1 <<endl;
        exercise.at(i) -> PrintExerciseInfo();
        i++;
    }
    return i;
}
//To add Walking type of Exercise
void ExerciseTracking::AddWalking(){
    int tt;
    string ask;
    cout<<"Enter time taken in the walk (in minutes): ";
    cin>> tt;
    cout<<"Insert Date(dd/MM/yyyy): ";
    cin>> ask;
    //formula for date
    struct tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%d/%m/%Y");
    time_t time = mktime(&tm);
    //end formula for date
    Exercise *ex = new Walking(tt, time);
    exercise.push_back(ex);
    ex->PrintExerciseInfo();
}
//To add Running type of Exercise
void ExerciseTracking::AddRunning(){
    int tt;
    string ask;
    cout<<"Enter time taken in the walk (in minutes): ";
    cin>> tt;
    cout<<"Insert Date(dd/MM/yyyy): ";
    cin>> ask;
    //formula for date
    struct tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%d/%m/%Y");
    time_t time = mktime(&tm);
    //end formula for date
    Exercise *ex = new Running(tt, time);
    exercise.push_back(ex);
    ex->PrintExerciseInfo();
}
//To add Freestyle type of Exercise
void ExerciseTracking::AddFreestyle(){
    int tt;
    string ask;
    cout<<"Enter time taken in the walk (in minutes): ";
    cin>> tt;
    cout<<"Insert Date(dd/MM/yyyy): ";
    cin>> ask;
    //formula for date
    struct tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%d/%m/%Y");
    time_t time = mktime(&tm);
    //end formula for date
    Exercise *ex = new Freestyle(tt, time);
    exercise.push_back(ex);
    ex->PrintExerciseInfo();
}
//To view Monthly calories burned
void ExerciseTracking::viewMonthlyCaloriesBurned(){
    string ask;
    int total = 0;
    cout<<"Enter Date to search (mm/yyyy): ";
    cin>>ask;
    //formula for date
    struct tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%m/%Y");
    time_t time = mktime(&tm);
    //end formula for date
    for(Exercise *ex:exercise){
        if(ex->getDate()>= time && ex->getDate()<= time +2592000){
            ex ->PrintExerciseInfo();
            total = total + ex ->CalculateCaloriesBurnt();
            
        }
    }
    if(total!=0){
        cout<<"\nTotal monthly: " << total<<endl;
    }
    else{
        cout<<"No Exercises recorded in this date!";
    }
    
}
//To view daily calories burned
void ExerciseTracking::viewDailyCaloriesBurned(){
    int total = 0;
    string ask;
    cout<<"Enter Date to search (dd/MM/yyyy): ";
    cin>>ask;
    //formula for date
    struct tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%d/%m/%Y");
    time_t time = mktime(&tm);
    //end formula for date
    for(Exercise *ex:exercise){
        if(ex->getDate()>= time && ex->getDate()<= time +86400){
            ex ->PrintExerciseInfo();
            total = total + ex ->CalculateCaloriesBurnt();
        }
    }
    if (total != 0){
        cout<<"\nTotal daily: " << total<<endl;
    }
    else{
        cout<<"No exercises available in this date!"<<endl;
    }
}
//1617033600 - 30/03/2021 getDate() more than this
//1619712000 - 30/04/2021 getDate() less than this


//UNIT TESTING ONLY
void ExerciseTracking::AddWalking2(Exercise* ex){
    exercise.push_back(ex);
}
void ExerciseTracking::viewMonthlyCaloriesBurned2(const string& ask){
    struct tm tm = {0};
    istringstream iss(ask);
    iss >> get_time(&tm,"%m/%Y");
    time_t time = mktime(&tm);
    for(Exercise *ex:exercise){
        if(ex->getDate()>= time && ex->getDate()<= time +2592000){
            ex ->PrintExerciseInfo();
            _testiterator++;
        }
    }
}
ExerciseTracking::ExerciseTracking(const ExerciseTracking& orig) {
}

ExerciseTracking::~ExerciseTracking() {
}

