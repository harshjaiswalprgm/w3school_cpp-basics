#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    string address;

    Student(){
        cout<<"name is unknown: "<<endl;
        cout<<"age is 0: "<<endl;
        cout<<"address is not available: "<<endl;
    }
    
    void SetInfo(string name, int age)
    {
        this->name = name;
        cout << name;
        this->age = age;
        cout << age;
    }

    void SetInfo(string name, int age, string address)
    {
        this->name = name;
        cout << name<<endl;
        this->age = age;
        cout << age<<endl;
        this->address=address;
        cout<<address<<endl;
      
    }
};

int main()
{
    string name;
    int age;
    string address;
    Student obj;
    cout << "enter the name, age, address" << endl;
     cin >> name >> age >> address;
    obj.SetInfo(name, age, address);

    return 0;
}