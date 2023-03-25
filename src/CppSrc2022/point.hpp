#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>

class Point{
public:
    Point() : mx{}, my{}, mz{}
    {
        std::cout << "Point ctor this : " << this << "\n";
    }

    Point(int x, int y, int z) : mx{x}, my{y}, mz{z}
    {
        std::cout << "Point parametreli ctor this : " << this << "\n";
    }

    ~Point()
    {
       std::cout << "Point dtor this : " << this << "\n";
    }

    void print()const
    {
        std::cout << "[" << mx << ", " << my << ", " << mz << "]\n";
    }

    void set(int a, int b, int c)
    {
        mx = a, my = b, mz = c;
    }

private:
    int mx;
    int my;
    int mz;
};

#endif // POINT_HPP
