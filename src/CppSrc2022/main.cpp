#include <iostream>


using namespace std;

//meyers singleton
//hpp
class Singleton{
private:
    Singleton();

public:
    static Singleton &getInstance()
    {
        static Singleton s; //fonksiyon ilk cagrıldgında jayata gelir tekrar gelmez
        //aynı nesne surekli olarak geri donecek

        return s;
    }
};


int main()
{

    auto &s = Singleton::getInstance();
}

/***************************************************/
/***************************************************/

