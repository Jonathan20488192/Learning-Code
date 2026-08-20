#ifndef POINT_H
#define POINT_H
#include <string>

class Point{
    private:
        int x;
        int y;
    public:
        Point();
        Point(int a, int b);
        std::string toString();
        int getX();
        int getY();
        void setX(int a);
        void setY(int a);

};

#endif