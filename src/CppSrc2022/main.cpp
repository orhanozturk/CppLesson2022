#include <iostream>

using namespace std;

//.hpp
class Myclass{
    int mx, my;
public:
    void func();
    void foo(int);
};

void foo()
{

}


//.cpp
void Myclass::func()
{
    //gecerlimi? gecerli ise hangisi cagrılır
    //class scope da isim arandı bulundu
    foo(); //sentask hatası parametre eşleçmediğiiçin


    //global foo cagırmak için çözünürlük operatorunu kullanmamız gerekli
    ::foo();
}




int main()
{

}

/***************************************************/
/***************************************************/

