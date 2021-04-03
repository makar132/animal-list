//
// Created by mego on 03-Apr-21.
//
#include<bits/stdc++.h>
using namespace std;
#ifndef ANIMAL_MENU_OOP_PROJECT_V_1_0_ANIMAL_H
#define ANIMAL_MENU_OOP_PROJECT_V_1_0_ANIMAL_H


class Animal
{
private:
    string Animal_type
    ,Animal_name
    ,Animal_color;
    int Animal_age;
    bool moving
    ,eating;


public:
    Animal(string type,string name,string color,int age,bool move,bool eat);


    const string &getAnimalType() const;

    void setAnimalType(const string &animalType);

    const string &getAnimalName() const;

    void setAnimalName(const string &animalName);

    const string &getAnimalColor() const;

    void setAnimalColor(const string &animalColor);
    int getAnimalAge() const;

    void setAnimalAge(int animalAge) ;
    bool isMoving() const;
    void setMoving(bool moving);

    bool isEating() const ;

    void setEating(bool eating) ;

    void Modify_Animal(string type,string name,string color,int age,bool move,bool eat);


    friend ostream &operator<<(ostream &os, const Animal &animal);


};

#endif //ANIMAL_MENU_OOP_PROJECT_V_1_0_ANIMAL_H
