#include <iostream>
#include "mint.hpp"
#include <vector>

using namespace std;

//içsel türe sahip olan sınıf -- Enclosing type


class Encloser{
private:
    static void sfunc();

    class Nested
    {
        void foo()
        {
            sfunc();
            //modern c++ gecerli
            //eski c++ da gecerli degil
        }
    };
};

int main()
{


}

/***************************************************/
/***************************************************/

