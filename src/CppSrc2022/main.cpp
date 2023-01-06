#include <iostream>

using namespace std;


struct Data{
    int mx;
};

int main()
{
    int x = 10;
    int &r = x;
    decltype (r) y = x; //sentaks hatası ilk deger verilmediğinden
    //int & turudur, auto daki gibi referanslık düşmez

}



/***************************************************/
/***************************************************/




