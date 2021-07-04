/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UserProfile.cpp
 * Author: McRoven
 * 
 * Created on May 8, 2021, 1:07 AM
 */

#include "UserProfile.h"
//Constructor
UserProfile::UserProfile(string n, string g, int a, float w, float h){
    _name = n;
    _gender = g;
    _age = a;
    _weight = w;
    _height = h;
}
//Display Info about user
void UserProfile::displayUser(){
    cout << "Name: " << _name<< endl;
    cout << "Gender: " << _gender<< endl;
    cout << "Age: " << _age<< " years old"<< endl;
    cout << "Weight: " << _weight<< " kg" << endl;
    cout << "Height: " << _height<< " cm"<< endl;
}

UserProfile::UserProfile(const UserProfile& orig) {
}

UserProfile::~UserProfile() {
}

