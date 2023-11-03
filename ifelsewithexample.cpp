// C++ If else Condition***

#include <iostream>
using namespace std;
int main()
{

    if (50 > 48)
    {
        cout << "50 is greater than 48" << endl;
    }

    int a = 10;
    int b = 11;
    cout << (a < b) << endl;
    return 0;
}

// Less than: a < b
// Less than or equal to: a <= b
// Greater than: a > b
// Greater than or equal to: a >= b
// Equal to a == b
// Not Equal to: a != b

#include <iostream>
using namespace std;
int main()
{

    int time = 13;
    if (time > 15)
    {
        cout << "Good Morning" << endl;
    }
    else
    {
        cout << "Good Noon" << endl;
    }

    return 0;
}

//    C++ short hand if else..
#include <iostream>
using namespace std;
int main()
{
    int time = 20;
    string result = (time < 18) ? "Good Morning" : "Good Noon";
    cout << result << endl;
}