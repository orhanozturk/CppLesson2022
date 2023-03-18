#include <iostream>

using namespace std;

//soru hangi ctor cagrılır

//hpp
class Myclass{
public:
    explicit Myclass(int)
    {
        cout << "Myclass int \n";
    }

    Myclass(double)
    {
        cout << "Myclass double\n";
    }
};

int main()
{
    int ival = 10;
    //Myclass m(ival); //gecerli

    Myclass m1 = ival; //double parametreli ctor cagrılır
}

/***************************************************/
/***************************************************/

