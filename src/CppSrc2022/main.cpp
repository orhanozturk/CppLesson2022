#include <iostream>

using namespace std;


//sonuc ürettiği zaman compile time da
//onliner bir fonksiyon
constexpr int square(int a)
{
    return a * a;
}

constexpr int ndigit(int ival)
{
    if(ival == 0)
        return 1;

    int digit_count = 0;

    while (ival) {
        ++digit_count;
        ival /= 10;
    }

    return digit_count;
}


int main()
{
    constexpr int a = 10;
    constexpr int b = 20;

    square(a); //sabir ifade

    int arr[square(a)];

    square(a * b + 3);

    int dArr[square(a * b + 3)];


    ndigit(a * b);
    ndigit(a * b + 1200);


    ndigit(square(a * b + 3));

    int ar[ndigit(square(a * b + 3))] = { 0 };


}

/***************************************************/
/***************************************************/




