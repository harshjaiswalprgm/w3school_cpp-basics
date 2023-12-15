#include <iostream>
using namespace std;
class Myclass
{
public:
    Myclass()
    {
        cout << "default constructor called : " << endl;
    };

    Myclass(int x)
    {
        cout << "constructor called for single parameter : " << x << endl;
    }

    Myclass(int x, float y)
    {
        cout << "constructor called for two parameter : " << x << " " << y << endl;
    }
};
int main()
{
    Myclass obj1;
    Myclass obj2(5);
    Myclass obj3(5, 5.52);

    return 0;
}

// in function over loading we just create a constructor with same name as class name and create the oject of all class.