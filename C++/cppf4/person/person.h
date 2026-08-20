#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person{
    private:
        std::string name;
        int age;
        int height;
    public:
        Person(std::string n, int a, int h);
        std::string toString();
        std::string getName();
        int getAge();
        int getHeight();
        void setName(std::string n);
        void setAge(int a);
        void setHeight(int h);
};

#endif