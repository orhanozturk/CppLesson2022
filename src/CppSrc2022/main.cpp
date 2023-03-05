#include <iostream>

using namespace std;

//.hpp
class MyString{
public:
    MyString(const char *pstr) : mlen{strlen(pstr)}
    {
        mp = static_cast<char *>(malloc(mlen + 1));

        if(!mp){
            cerr << "bellek yetersiz\n";
            exit(EXIT_FAILURE);
        }

        cout << "consructor this : " << this << "\n";
        cout << "the address of allocated block : " << (void *)mp << "\n";
        strcpy(mp, pstr);
    }

    ~MyString(){
        cout << "dtor this : " << this << "\n";

        if(mp){
            free(mp);
        }

        cout << "the address of allocated block : " << (void *)mp << "\n";
    }

    //user tarafından copy ctor
    //deep copy
    MyString(const MyString &other) : mlen{other.mlen}
    {
        cout << "Mystring copy ctor this : " << this << "\n";

        mp = static_cast<char *>(malloc(mlen + 1));
        if(!mp){
            cerr << "bellek yetersiz\n";
            exit(EXIT_FAILURE);
        }
        cout << "consructor this : " << this << "\n";
        cout << "the address of allocated block : " << (void *)mp << "\n";
        strcpy(mp, other.mp);

    }

    size_t length()const{
        return mlen;
    }

    void print()const{
        cout << "[" << mp << "]\n";
    }

    //user tarafından copy assigment func
    //deep copy
    MyString &operator=(const MyString &other)
    {
        if(this == &other)
            return *this;

        free(mp);
        mlen = other.mlen;

        mp = static_cast<char *>(malloc(mlen + 1));
        if(!mp){
            cerr << "bellek yetersiz\n";
            exit(EXIT_FAILURE);
        }

        cout << "consructor this : " << this << "\n";
        cout << "the address of allocated block : " << (void *)mp << "\n";
        strcpy(mp, other.mp);

        return *this;
    }

private:
    size_t mlen;
    char *mp;
};

void func(MyString str)
{
    cout << "func cagrildi\n";
    str.print();
    cout << "func sona eriyor\n";
}

int main()
{ 
    MyString s1{"Orhan OZTURK"};
    s1.print();

    s1 = s1; //self-assigment

    s1.print();

}

/***************************************************/
/***************************************************/

