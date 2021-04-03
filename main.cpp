#include <bits/stdc++.h>
#include <ostream>

using namespace std;
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
    Animal(string type,string name,string color,int age,bool move,bool eat)
    {
        Animal_type=type;
        Animal_name=name;
        Animal_color=color;
        Animal_age=age;
        moving=move;
        eating=eat;
    }

    const string &getAnimalType() const {
        return Animal_type;
    }

    void setAnimalType(const string &animalType) {
        Animal_type = animalType;
    }

    const string &getAnimalName() const {
        return Animal_name;
    }

    void setAnimalName(const string &animalName) {
        Animal_name = animalName;
    }

    const string &getAnimalColor() const {
        return Animal_color;
    }

    void setAnimalColor(const string &animalColor) {
        Animal_color = animalColor;
    }

    int getAnimalAge() const {
        return Animal_age;
    }

    void setAnimalAge(int animalAge) {
        Animal_age = animalAge;
    }

    bool isMoving() const {
        return moving;
    }

    void setMoving(bool moving) {
        Animal::moving = moving;
    }

    bool isEating() const {
        return eating;
    }

    void setEating(bool eating) {
        Animal::eating = eating;
    }

    void Modify_Animal(string type,string name,string color,int age,bool move,bool eat)
    {
        setAnimalType(type);
        setAnimalName(name);
        setAnimalColor(color);
        setAnimalAge(age);
        setMoving(move);
        setEating(eat);
    }

    friend ostream &operator<<(ostream &os, const Animal &animal) {
        os << "Animal_type: " << animal.Animal_type << " Animal_name: " << animal.Animal_name << " Animal_color: "
           << animal.Animal_color << " Animal_age: " << animal.Animal_age << " moving: " << animal.moving << " eating: "
           << animal.eating<<"\n";
        return os;
    }


};
int main() {
    vector<Animal> Animal_menu;
    int action;
    cout<<"HELLO, THERE\n";

    start:  cout << "Choose an action\n";
        cout
                << "1:Display Menu   2:Add Animal    3:Modify Existing Animal    4:Remove an Animal from the Menu    5:Exit\n";
        cin>>action;

        if(action==1)
        {
            if(Animal_menu.size()==0)
                cout<<"the menue is empty\n";
            else {
                for (int i = 0; i < Animal_menu.size(); ++i) {
                    cout<<i+1<<"-"<<Animal_menu[i]<<"\n";
                }
                cout<<"\n";
            }

            goto start;
        }
        if(action==2)
        {
            string new_Animal_type
            , new_Animal_name
            , new_Animal_color;
            int new_Animal_age;
            char new_Animal_eating
            , new_Animal_moving;
            cout<<"Enter New animal's type: ";
            cin>>new_Animal_type;
            cout<<"\n";
            cout<<"Enter New animal's name: ";
            cin>>new_Animal_name;
            cout<<"\n";
            cout<<"Enter New animal's color: ";
            cin>>new_Animal_color;
            cout<<"\n";
            cout<<"Enter New animal's age: ";
            cin>>new_Animal_age;
            cout<<"\n";
            cout<<"Is New animal moving?(Y/N): ";
            cin>>new_Animal_moving;
            cout<<"\n";
            cout<<"Is New animal eating?(Y/N): ";
            cin>>new_Animal_eating;
            cout<<"\n";
            Animal new_Animal=Animal(new_Animal_type,new_Animal_name,new_Animal_color,new_Animal_age,new_Animal_moving=='Y'?true:false,new_Animal_eating=='Y'?true:false);
            Animal_menu.emplace_back(new_Animal);
            cout<<"New animal added to Menu\n";
            goto start;
        }

        if(action==3)
        {
            int modify_animal_index;
            string modify_Animal_type
            , modify_Animal_name
            , modify_Animal_color;
            int modify_Animal_age;
            char modify_Animal_eating
            , modify_Animal_moving;
            cout<<"Enter the index of the animal to be modified: ";
            cin>>modify_animal_index;
            cout<<"\n";
            Animal animal_to_modify=Animal_menu[modify_animal_index-1];
            cout<<"Enter the animal's  new type: ";
            cin>>modify_Animal_type;
            cout<<"\n";
            cout<<"Enter the animal's new name: ";
            cin>>modify_Animal_name;
            cout<<"\n";
            cout<<"Enter the animal's new color: ";
            cin>>modify_Animal_color;
            cout<<"\n";
            cout<<"Enter the animal's new age: ";
            cin>>modify_Animal_age;
            cout<<"\n";
            cout<<"Is the animal moving?(Y/N): ";
            cin>>modify_Animal_moving;
            cout<<"\n";
            cout<<"Is the animal eating?(Y/N): ";
            cin>>modify_Animal_eating;
            cout<<"\n";
            animal_to_modify.Modify_Animal(modify_Animal_type,modify_Animal_name,modify_Animal_color,modify_Animal_age,modify_Animal_moving,modify_Animal_eating);
            cout<<"animal number "<<modify_animal_index<<" modified successfully\n";
            goto start;
        }
        if(action==4)
        {
            int remove_animal_index;
            char confirm;
            cout<<"Enter the index of the animal to be removed: ";
            cin>>remove_animal_index;
            cout<<"\n";
            cout<<"are you sure you want to remove animal number "<<remove_animal_index<<" ?(Y/N) : ";
            cin>>confirm;
            if(confirm=='Y'){
                Animal_menu.erase(Animal_menu.begin()+(remove_animal_index-1));
                cout<<"Animal removed successfully\n";
            }
            else {
                cout<<"operation aborted\n";
            }

            goto start;
        }
    if(action==5) goto end;



end: return 0;
}
