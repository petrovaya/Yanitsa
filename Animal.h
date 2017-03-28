#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
    private:
    string name;
    int age;
    string residence; //Myasto na obitavane
    string food_type; // Predpochitana grana

public:
    void set_name(string animal_name){
    name = animal_name;
    }

    string get_name(){
    return name;
    }

    void set_age(int animal_ages){
    age = animal_ages;
    }

    int get_age(){
    return age;
    }

    void set_residence (string animal_residence){
    residence = animal_residence;
    }

    string get_residence (){
    return residence;
    }

    void set_food_type(string animal_food_type){
    food_type = animal_food_type;
    }

    string get_food_type(){
    return food_type;
    }

    Animal();
    virtual ~Animal();
};

#endif // ANIMAL_H
