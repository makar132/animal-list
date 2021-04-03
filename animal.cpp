//
// Created by mego on 03-Apr-21.
//

#include "animal.h"


Animal::Animal(string type,string name,string color,int age,bool move,bool eat)
{
    Animal_type=type;
    Animal_name=name;
    Animal_color=color;
    Animal_age=age;
    moving=move;
    eating=eat;
}

const string &Animal::getAnimalType() const {
    return Animal_type;
}

void Animal::setAnimalType(const string &animalType) {
    Animal_type = animalType;
}

const string &Animal::getAnimalName() const {
    return Animal_name;
}

void Animal::setAnimalName(const string &animalName) {
    Animal_name = animalName;
}

const string &Animal::getAnimalColor() const {
    return Animal_color;
}

void Animal::setAnimalColor(const string &animalColor) {
    Animal_color = animalColor;
}

int Animal::getAnimalAge() const {
    return Animal_age;
}

void Animal::setAnimalAge(int animalAge) {
    Animal_age = animalAge;
}

bool Animal::isMoving() const {
    return moving;
}

void Animal::setMoving(bool moving) {
    Animal::moving = moving;
}

bool Animal::isEating() const {
    return eating;
}

void Animal::setEating(bool eating) {
    Animal::eating = eating;
}

void Animal::Modify_Animal(string type,string name,string color,int age,bool move,bool eat)
{
    setAnimalType(type);
    setAnimalName(name);
    setAnimalColor(color);
    setAnimalAge(age);
    setMoving(move);
    setEating(eat);
}

 ostream &operator<<(ostream &os, const Animal &animal) {
    os << "Animal_type: " << animal.Animal_type << " Animal_name: " << animal.Animal_name << " Animal_color: "
       << animal.Animal_color << " Animal_age: " << animal.Animal_age << " moving: " << animal.moving << " eating: "
       << animal.eating;
    return os;
}


