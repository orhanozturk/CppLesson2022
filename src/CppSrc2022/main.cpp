#include <iostream>
#include "mint.hpp"

using namespace std;


int main()
{
    for(;;){
        auto m1{Mint::Random()};
        auto m2{Mint::Random()};
        cout << m1 << " +  " << m2 << " = " << (m1 + m2) << "\n";
        cout << m1 << " -  " << m2 << " = " << (m1 - m2) << "\n";
        cout << m1 << " *  " << m2 << " = " << (m1 * m2) << "\n";
        cout << m1 << " /  " << m2 << " = " << (m1 / m2) << "\n";

        cin >> m1;
    }
}

/***************************************************/
/***************************************************/

