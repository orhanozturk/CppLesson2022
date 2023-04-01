#include <iostream>
#include <string>

using namespace std;

//const T * ---> T* donusum yok
//T* ---> const T* donuusum vardır

int main()
{
    string str = "abdulmelik"; //const char * string dousum var

    const char *p = str;  //string turunden const  char * trune donusum yok

    //boyle problemı cozebiliriz
    const char *p1 = str.c_str();

}

/***************************************************/
/***************************************************/

