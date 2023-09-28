 /*#include<iostream>   //Create an Object
using namespace std;
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Starting OOP";

  // Print attribute values
  cout << myObj.myNum<<endl;
  cout << myObj.myString<<endl;
  return 0;
}

////////////////////////////////////////////////////
#include<iostream>     //Multiple Objects
using namespace std;
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}////////////////////////////////////////////////////

#include<iostream>   //Inside Example
using namespace std;
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

#include <iostream>       //Outside Example
using namespace std;
class MyClass {           // The class
  public:                 // Access specifier
    void myMethod();      // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;           // Create an object of MyClass
  myObj.myMethod();        // Call the method
  return 0;
}*/

#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout<<"max speed is:";
  cout << myObj.speed(200); // Call the method with an argument
  return 0;
}