#include <iostream>
#include <cstdlib>

using namespace std;

/*
extern "C" {
  int func1(int, int);
  int func2(int, int);
  int func3(int, int);
}
*/


#ifdef __cplusplus
    extern "C" {
#endif
    int func1(int, int);
    int func2(int, int);
    int func3(int, int);
#ifdef __cplusplus
    }
#endif


int main()
{

}


/***************************************************/
/***************************************************/




