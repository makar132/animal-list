//
// Created by mego on 03-Apr-21.
//

#include "animal.h"


Animal::Animal(string type,string name,string color,int age,string move,string eat)
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

string Animal::isMoving() const {
    return moving;
}

void Animal::setMoving(string moving) {
    Animal::moving = moving;
}

string Animal::isEating() const {
    return eating;
}

void Animal::setEating(string eating) {
    Animal::eating = eating;
}

 ostream &operator<<(ostream &os, const Animal &animal) {
    os << "Animal_type: " << animal.Animal_type << ", Animal_name: " << animal.Animal_name << ", Animal_color: "
       << animal.Animal_color << ", Animal_age: " << animal.Animal_age << ", is animal moving: " << animal.moving << ", is animal eating: "
       << animal.eating;
    return os;
}


