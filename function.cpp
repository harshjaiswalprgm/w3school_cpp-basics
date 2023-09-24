/*#include <iostream>
using namespace std;

void myfunction();  // Function declaration
void myfunction()
{
    cout << "It's time to break man.." << endl; //function body//(defination)
}
int main()
{

    myfunction();  //call the function
    myfunction();
    myfunction();
    myfunction();        //A function can be called multiple times:
    return 0;
}
//Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:

int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}                                       // Error


#include<iostream>              //   C++ Default Parameters
using namespace std;
void myFunction(string fname){
    cout<<fname<<"Refsnes"<<endl;

}
int main(){
    myFunction("Harsh");
    myFunction("Abhi");
    myFunction("Ayush");
    return 0;

}

#include <iostream>                 //C++ Multiple Parameters//
using namespace std;
void myfunction(string country = "Africa")
{
    cout << country << endl;
}

int main()
{
myfunction("sweden");
myfunction("India");
myfunction();
myfunction("USA");
    return 0;
}

#include <iostream>
using namespace std;
void myfunction(string fname, int age)
{
    cout << fname<< "Refsnes." << age << "years old." << endl;
}

int main()
{
    myfunction("Harsh", 21);
    myfunction("Abhi", 23);
    myfunction("Rishav", 18);

    return 0;
}

#include<iostream>
using namespace std;
int myfunction(int x){
    return 5+x;

}
int main(){

    cout<<myfunction(3);
    return 0;
}

// This example returns the sum of a function with two parameters:

#include <iostream>
using namespace std;
int myFunction(int x, int y)
{
    return x + y;
}

int main()
{
    cout<< myFunction(5, 3);
    return 0;
}


#include<iostream>
using namespace std;
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}*/

#include<iostream>
using namespace std;                //C++ Functions - Pass By Reference

void swapNums(int &x, int &y){
    int z=x;
    x=y;
    y=z;
} 
int main(){
int firstNum =10;
int secondNum =20;

cout<<"before swap:"<<endl;
cout<<firstNum<<secondNum<<endl;
swapNums(firstNum, secondNum);
cout<<"After swap:"<<endl;
cout<<firstNum<<secondNum<<endl;
    return 0;
}