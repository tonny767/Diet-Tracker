/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UserProfileManagement.cpp
 * Author: McRoven
 * 
 * Created on May 11, 2021, 2:57 PM
 */

#include "UserProfileManagement.h"

UserProfileManagement::UserProfileManagement() {
}
//To add users, called first before anything else.
void UserProfileManagement::addUser(){
    string name, gender, inputgender;
    int age;
    float weight, height;
    cout<<"Please Register first."<< endl;
    cout<<"Insert your name: ";
    getline(cin,name);
    cout<<"Insert your gender (m/f): ";
    getline(cin,inputgender);
    while(inputgender != "m" | inputgender != "f"){
        if(inputgender == "m"){
            gender = "Male";
            break;
        }else if(inputgender== "f"){
            gender = "Female";
            break;
        }
        cout << "Wrong input";
        cout << "Enter Again: ";
        getline(cin,inputgender);
    }
    cout<<"Insert your Age: ";
    cin >> age;
    cout<<"Insert your Weight (in KG): ";
    cin >> weight;
    cout<<"Insert your Height (in cm): ";
    cin >> height;
    _userprofile = new UserProfile(name,gender,age,weight,height);
    cout<<"Hi " << name <<", This is the list of commands you can do:"<<endl;
}
//To edit User information
void UserProfileManagement::editUser(){
    string ask;
    int _selected,iask;
    float fask;
    cout<< "Which one are you changing?"<<endl;
    cout<<"1.User Name\n2.Gender\n3.Age\n4.Weight\n5.Height"<< endl;
    cout<<"Selection: ";
    cin>>_selected;
    if(_selected == 1){
        cout<<"Enter new User Name: ";
        getline(cin >> ws,ask);
        _userprofile ->setName(ask);
        cout<<"User Name changed successfully!"<<endl;
        _userprofile->displayUser();
    }
    else if(_selected == 2){
        cout<<"Enter new Gender (m/f): ";
        getline(cin >> ws,ask);
        //if ask is not m or f, will be asked to input again
        while(ask != "m" | ask != "f"){
            if(ask == "m"){
                _userprofile ->setGender("Male");
                break;
            }
            else if(ask== "f"){
                _userprofile ->setGender("Female");
                break;
            }
            cout << "Wrong input"<<endl;
            cout << "Enter Again: ";
            cin>>ws;
            getline(cin,ask);
            
        }
        cout<<"Gender changed successfully!"<<endl;
        _userprofile->displayUser();
    }
    else if(_selected == 3){
        cout<<"Enter new Age: ";
        cin>> iask;
        _userprofile ->setAge(iask);
        cout<<"Age changed successfully!"<<endl;
        _userprofile->displayUser();
    }
    else if(_selected == 4){
        cout<<"Enter new Weight: ";
        cin>> fask;
        _userprofile ->setWeight(fask);
        cout<<"Weight changed successfully!"<<endl;
        _userprofile->displayUser();
    }
    else if(_selected == 5){
        cout<<"Enter new Height: ";
        cin>> fask;
        _userprofile ->setHeight(fask);
        cout<<"Height changed successfully!"<<endl;
        _userprofile->displayUser();
    }
}
//To calculate BMI from user info inputted
void UserProfileManagement::calculateBMI(){
    float bmi;
    float weight = _userprofile -> getWeight();
    float height = _userprofile -> getHeight()/100;
    bmi = weight / (height * height);
    cout<<"Your weight is: "<<weight<<" kg"<<endl;
    cout<<"Your height is: "<<height<<" m"<<endl;
    cout<<"\nYour BMI is: "<<tolower(bmi)<<" - ";
    if(bmi <= 18.5){
        cout<<"Underweight\n"<<endl;
    }
    else if(bmi >18.5 && bmi <= 24.9){
        cout<<"Normal weight\n"<<endl;
    }
    else if(bmi > 24.9 && bmi <= 29.9){
        cout<<"Overweight\n"<<endl;
    }
    else if(bmi>29.9){
        cout<<"Obese\n"<<endl;
    }
}
//Set the targeted Calories consumed per day
int UserProfileManagement::setTargeted(){
    cout<<"Enter targeted calories consumed per day:"<<endl;
    cin>>_targetedcaloriesconsumed;
    return _targetedcaloriesconsumed;
}
//Identify if calories consumed already passed the calories target
void UserProfileManagement::identifyTargetedCalories(const int& c){
    if(_targetedcaloriesconsumed != 0 && c != 0){
        if(_targetedcaloriesconsumed <=c){
            cout << "\nCalories consumed already passed the targeted calories, you gotta stop eating!"<<endl;
            cout<<"Targeted calories consumed: "<<_targetedcaloriesconsumed<<endl;
            cout<< "Total calories consumed: " <<c<<"\n"<<endl;
            //FOR TESTING ONLY
            _testiterator++;
        }
        else if(_targetedcaloriesconsumed > c){
            cout << "\nCalories consumed haven't passed the targeted calories, enjoy eating "<< _targetedcaloriesconsumed - c <<" more!"<<endl;
            cout<<"Targeted calories consumed: "<<_targetedcaloriesconsumed<<endl;
            cout<< "Total calories consumed: " <<c<<"\n"<<endl;
            //FOR TESTING ONLY
            _testiterator++;
        }
    }
    else{
        cout<< "No target or meals yet!"<<endl;
    }
}


//FOR UNIT TESTING ONLY!!
void UserProfileManagement::CalculateBMITest(UserProfile *usp){
    float weight = usp -> getWeight();
    float height = usp -> getHeight()/100;
    _testbmi = weight / (height * height);
    cout<<"Your weight is: "<<weight<<" kg"<<endl;
    cout<<"Your height is: "<<height<<" m"<<endl;
    cout<<"\nYour BMI is: "<<tolower(_testbmi)<<" - ";
    if(_testbmi <= 18.5){
        cout<<"Underweight\n"<<endl;
    }
    else if(_testbmi >18.5 && _testbmi <= 24.9){
        cout<<"Normal weight\n"<<endl;
    }
    else if(_testbmi > 24.9 && _testbmi <= 29.9){
        cout<<"Overweight\n"<<endl;
    }
    else if(_testbmi>29.9){
        cout<<"Obese\n"<<endl;
    }
}
UserProfileManagement::UserProfileManagement(const UserProfileManagement& orig) {
}

UserProfileManagement::~UserProfileManagement() {
}

