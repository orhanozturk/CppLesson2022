
#include <iostream>
#include <vector>
#include <string>
#include "point.hpp"


using namespace std;

//dinamik ömürlü ve hayatı biten nesneyi gösteren pointer dangling hale gelmiştir

int main()
{
    int n;
    cout << "kac nesne : ";
    cin >> n;

    Point *p = new Point[n];

    //delete p;

    delete[]p;
}

/***************************************************/
/***************************************************/

