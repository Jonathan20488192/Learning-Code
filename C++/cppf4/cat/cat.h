#ifndef CAT_H
#define CAT_H
#include <string>

class Cat {
    private:
        std::string name;
        std::string breed;
        int age;
        std::string color;
    public:
        Cat();
        Cat(std::string n, std::string b, int a, std::string c);
        void setAge(int a);
        void setBreed(std::string b);
        std::string toString();

};  

#endif