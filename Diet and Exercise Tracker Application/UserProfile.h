/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UserProfile.h
 * Author: McRoven
 *
 * Created on May 8, 2021, 1:07 AM
 */
//Documentation in .cpp file
#include <iostream>
#ifndef USERPROFILE_H
#define USERPROFILE_H
#include <string>
using namespace std;

class UserProfile {
public:
    UserProfile(string n, string g, int a, float w, float h);
    UserProfile(const UserProfile& orig);
    void displayUser();
    virtual ~UserProfile();
    float getWeight(){ return _weight; }
    float getHeight(){ return _height; }
    void setName(const string& n){ _name = n; }
    void setGender(const string& g){_gender = g;}
    void setAge(const int& a){_age = a; }
    void setWeight(const float& w){ _weight = w; }
    void setHeight(const float& h){ _height = h; }
private:
    string _name;
    string _gender;
    int _age;
    float _weight;
    float _height;
};

#endif /* USERPROFILE_H */

