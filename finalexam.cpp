#include <iostream>
using namespace std;
class MyClass{
public:
    MyClass(){
        cout << "default const called" << endl;
    }

    MyClass(int x){
        cout << "constructor with one parameterr " << x << endl;
    }

    MyClass(int x, double y){
        cout << "constructor with two parameterr " << x << ", " << y << endl;
    }

    MyClass(double z){
        cout << "different data type const " << z << endl;
    }
};
int main()
{
    MyClass obj1;
    MyClass obj2(50);
    MyClass obj3(5, 5.24);
    MyClass obj4(8.81);
    return 0;
}