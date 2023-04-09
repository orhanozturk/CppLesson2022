#include <iostream>
#include <string>

using namespace std;

void display_string(const string &s)
{
    cout << "[ " << s.length() << " ] : (" << s << ")\n";
}

int main()
{
    //fill ctor
    string s1(80, 'A');
    display_string(s1);

    string s2{80, 'A'};
    display_string(s2);
}

/***************************************************/
/***************************************************/

