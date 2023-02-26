#include <iostream>

using namespace std;

//bir sınfın defaulr ctor olmak zorunda değil
//Ama dtor olmak zorunda

//.hpp
class Myclass{
public:
    Myclass(); //default ctor
    ~Myclass(); //dtor
};

//gloval nesneler
//main baslamadan önce hayata gelir


//.cpp
Myclass::Myclass(){
    cout << "Myclass default ctor ...  this : " << this << "\n";
}

Myclass::~Myclass(){
    cout << "Myclass  dtor ...  this : " << this << "\n";
}

int main()
{ 
    cout << "main basladi\n";

    Myclass m;

    cout << "&m : " << &m << "\n";

    cout << "main sonlaniyor\n";

}

/***************************************************/
/***************************************************/

