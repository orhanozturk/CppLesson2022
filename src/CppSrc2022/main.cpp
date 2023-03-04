#include <iostream>

using namespace std;


//.hpp

class Member{
public:
    Member(int);
};

class Myclass{
private:
    Member mx;

public:

};

//.cpp

int main()
{ 
    Myclass m; //imlicity deleted
}

/***************************************************/
/***************************************************/

