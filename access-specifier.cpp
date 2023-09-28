#include<iostream>
using namespace std;
class MyClass {  // The class
  public:        // Access specifier
    // class members goes here
    string gesture;
};
int main(){
MyClass myobj;
    cout<<"hey"<<endl;
    return 0;
}*/
The public keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. In the example above, the members are public - which means that they can be accessed and modified from outside the code.

However, what if we want members to be private and hidden from the outside world?

In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
In the following example, we demonstrate the differences between public and private members:


#include<iostream>
using namespace std;
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}
//error that shown in terminal for better understanding//
access-specifier.cpp: In function 'int main()':
access-specifier.cpp:37:9: error: 'int MyClass::y' is private within this context
   myObj.y = 50;  // Not allowed (private)
         ^
access-specifier.cpp:31:9: note: declared private here
     int y;   // Private attribute
         ^