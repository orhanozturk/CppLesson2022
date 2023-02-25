#include "myclass.hpp"

#define PUBLIC
#define PRIVATE

//class tanımları burada olacak

//sııfnın fonksiyonunu tanımlayabilmem için çözünürlük operatorunu kullanmamız gerekli

void Myclass::func(int a, int b)
{

}

//bu sınıfın üye fonksiyonu değildir
void func(int a, int b)
{

}


//bit fonksiyonun kullanıcıya bilgi vermek amazlı public mi private mın oldugunu bu şekilde yapabilirsinz
PUBLIC void Myclass::foo(int x)
{

}
