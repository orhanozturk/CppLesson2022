#include <iostream>

using namespace std;

int main()
{
    //bir pointer referans olabilirmi

    int x = 10;
    int y = 30;

    int *p{ &x };
    int * &rp = p; //int * tur belirtir ve pointe p turu saklanır rp de


    rp = &y; // p ye y'ni adresi atandı

    *rp = 99; //  y = 99

    cout << "y : " << y << "\n";

    return 0;
}


/***************************************************/
/***************************************************/
