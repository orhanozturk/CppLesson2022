#ifndef MYCLASS_HPP
#define MYCLASS_HPP

//class bildirimleri header dosyasında olacak

class Myclass
{
    int mx, my;

public:
    //void func(int x, int y);
    void func(int, int);

    //sınıfn scopu içinde tanım yapabilirz ama yapılıp yapılmamsıı arasındaki farkı ileride değineceğiz
    void foo(int x);

};

//sınıfnların bildiirmler ve tanımları  içinde global bildirimler ve tanımlar olaiblir
void fuu(Myclass &r, int x);

#endif // MYCLASS_HPP
