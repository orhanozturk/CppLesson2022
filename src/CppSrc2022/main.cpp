#include <iostream>
#include <cstdlib>

using namespace std;

void func(int, double, long);   // m  m  m
void func(double, int, int);    // m  h  m
void func(float, float, float); // m  m  m

int main()
{
    func(12u, 14, 5.5); //2.cisi
}


/***************************************************/
/***************************************************/




