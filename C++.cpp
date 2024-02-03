/*



                                            C++ Constants***
#include<iostream>
using namespace std;

int num(){

const myNum= 15;

myNum= 10;
cout<< myNum<<endl;
}


#include<iostream>
using namespace std;

int main(){

const int MPH = 15;
const float PI = 3.14;

cout << MPH <<endl;
cout << PI <<endl;
return 0;
}

                                       C++ *User Input**
#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "Type a number: ";
     cin >>  x;
     cout << "Your number is: " << x;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: ";
  cin >>x; // Get user input from the keyboard
  cout << "Your number is: "<< x;
  return 0;
}

 



                                    Numeric Types***

#include<iostream>
using namespace std;
int main(){

int harsh= 22;
cout << harsh<<endl;

float harshh= 07.2002;
cout << harshh <<endl;

double jais= 22.072002;
cout << jais <<endl;

    return 0;
}

                                      Scientific Numbers***

#include<iostream>
using namespace std;
int main(){

float f1 = 35e3;
double d1 = 12E4;
cout << f1 <<endl;
cout << d1<<endl;

    return 0;
}




                                        C++ Operators***

   #include<iostream>
   using namespace std;
   int main(){

int sum = 10+20;
cout<<sum<<endl;



    return 0;
   }

#include <iostream>
using namespace std;
int main()
{

    int x = 10;
    int y = 3;
   // cout << x / y << endl;//
  // cout << x*y<<endl;//
cout<< x%y<<endl;
    return 0;
}

                                    C++ Addition operators***

#include<iostream>
using namespace std;
int main(){

int x = 10;
x*=5;
cout<<x<<endl;
    return 0;

}





                                             C++ math
#include<iostream>
#include<cmath>
using namespace std;
int main(){


cout << max (5,10) <<endl; // find the max value..
cout << min (16,12) <<endl;        // find the min value...


cout << sqrt(64) <<endl;
cout << round(2.6) <<endl;
cout << log(2) <<endl;

    return 0;
}


Other Math Functions
A list of other popular Math functions (from the <cmath> library) can be found in the table below:

Function	Description
abs(x)	Returns the absolute value of x
acos(x)	Returns the arccosine of x
asin(x)	Returns the arcsine of x
atan(x)	Returns the arctangent of x
cbrt(x)	Returns the cube root of x
ceil(x)	Returns the value of x rounded up to its nearest integer
cos(x)	Returns the cosine of x
cosh(x)	Returns the hyperbolic cosine of x
exp(x)	Returns the value of Ex
expm1(x)	Returns ex -1
fabs(x)	Returns the absolute value of a floating x
fdim(x, y)	Returns the positive difference between x and y
floor(x)	Returns the value of x rounded down to its nearest integer
hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	Returns x*y+z without losing precision
fmax(x, y)	Returns the highest value of a floating x and y
fmin(x, y)	Returns the lowest value of a floating x and y
fmod(x, y)	Returns the floating point remainder of x/y
pow(x, y)	Returns the value of x to the power of y
sin(x)	Returns the sine of x (x is in radians)
sinh(x)	Returns the hyperbolic sine of a double value
tan(x)	Returns the tangent of an angle
tanh(x)	Returns the hyperbolic tangent of a double value


                                                 C++ Booleans

#include <iostream>
#include <string>
using namespace std;
int main()


    /*X bool iscodingfun = true;         // for bool values...
     bool isdinnertasty = false;

     cout << iscodingfun;
     cout << isdinnertasty;

     int a = 60;                          // for bool expressions...
     int b = 50;
     cout << (a>b) << endl;

 int a = 50;
 cout << (a==50) <<endl;


 int myAge = 20;
 int votingAge = 18;                        // real life example....
 if (myAge>=votingAge){
 cout <<"old enough to vote." <<endl;
 } else{
     cout <<"Not enough to vote." <<endl;
 }


     return 0;
 }




//The default keyword specifies some code to run if there is no case match:


}


                                             //For Loop....
#include<iostream>
using namespace std;
int main(){

for(int i =0; i < 5; i++){
    cout << i <<endl;
}

for(int i =0; i <= 10; i = i+2){
    cout << i <<endl;
}


    return 0;
}


                                      // Unable to understand Nested Loop

                                           // The For each Loop...


#include<iostream>
using namespace std;
int main(){

int myNumber[5] ={10,20,30,40,50};
for (int i : myNumber){
    cout << i << endl;
}

    return 0;
}


// C++ Break.............

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }
}
                                       // C++ Continue

#include<iostream>
using namespace std;
int main(){
for (int i = 0; i < 10; i++){
    if (i == 4){
        continue;
    }
    cout << i <<endl;
}

    return 0;
}


// Break and continue in while loop...........

#include <iostream>
using namespace std;
int main()
{

    int i = 0;
    while (i < 10)
    {
        cout << i << endl;
        i++;
        if (i == 4)
        {
            break;
        }
    }

    return 0;
}
/////////////////////////////

#include <iostream>
using namespace std;
int main()
{
    int i = 0;
while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
}
    return 0;
}

//////////////////////////////////// Break and continue in while loop..........
#include <iostream>
using namespace std;
int main()
{

    /*  int i=0;
      while(i<10){
          cout <<i<<endl;
          i++;
          if (i==4){
              break;
          }
      }

    int i = 0;
    while (i < 10)
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }
    return 0;
}


                                          //////////////////////////////////////////C++ Arrayyy...
#include <iostream>
#include<string>
using namespace std;
int main(){

string cars[4]={"Volvo", "BMW", "Ford", "Lamborgini"};
//cout <<cars[1];

cars[3] ="Thar";     //int myNum[3]={10,20,30};
    cout<<cars[3];
    return 0;
}


/////////////////////////////////////////////////////////C++ array nd loops.........
#include <iostream>
using namespace std;
int main()
{
    string cars[5] = {"Volvo", "BMW", "Ford", "Splender", "Lamborgini"};
    for (int i = 0; i < 3; i++)
    {
        cout << cars[i] << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    /*string cars[5]={"Volvo", "BMW", "Ford", "Splender", "Lamborgini"};   //Loop through an Array...
    for (int i=0; i<5; i++){
        cout <<i << "=" <<cars[i]<<endl;
    }

    int myNumber[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 4; i++)
    {
        cout << myNumber[i] << endl;
    }

    int myNumbers[5]={10, 20, 30, 40, 50};                      //For each loop....
    for(int i : myNumbers){
        cout <<i<<endl;
    }

    return 0;
}


#include <iostream>
using namespace std;
int main()
{                               ////////  Omit Elements on Declaration...  /////////

    string cars[6];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Lamborgini";
    cars[4] = "Mustang";
    cars[5] = "Jaguar";

    for (int i = 0; i <6; i++)
    {
        cout << cars[i] << endl;
    }

    return 0;
}

                                                     //   C++ Array size........
#include<iostream>
using namespace std;
int main(){

int myNumber[5] = {10,20,30,40,50};
cout<< sizeof(myNumber);

    return 0;
}


#include <iostream>
using namespace std;
int main()
{

    int myNumber[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumber) / sizeof(int);
    cout << getArrayLength;

    return 0;
}
                                               // Loop through an Array with sizeof()

#include <iostream>
using namespace std;
int main(){
    int myNumber[5] =  {10, 20, 30, 40, 50};
    for(int i = 0; i < sizeof(myNumber)/ sizeof(int);i++){
        cout<<myNumber[i]<<endl;
    }
    return 0;
}

//Note that, in C++ version 11 (2011), you can also use the "for-each" loop:


#include <iostream>
using namespace std;
int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
    return 0;
}

// C++ Multi-Dimensional Arrays...............

#include <iostream>
using namespace std;
int main()
{
    //{cout<<"Tomarrow is my exam so let's prepare it"<<endl;

    string letters [2][4] ={
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    cout <<letters[1][3]<<endl;
    string letters[2][2][2] = {
        {
        {"a", "b"},
        {"c", "d"}
        },
        {
            {"e", "f"},
            {"g", "h"}
        }
    };

cout<< letters [1][1][0]<<endl;
    return 0;
}

                                   // CHANGE ELEMENT IN MULTI-DIMENSIONAL ARRAY....

#include <iostream>
using namespace std;
int main()
{
   string letters [2][4] ={
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    //letters[0][0] ="z";                      //to change the value............
    cout<<letters[0][0];

return 0;                                     Ans- Z
}



#include <iostream>
#include <string>
using namespace std;
int main()
{

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};                    //Confused...
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << endl;
        }
    }

    return 0;
}



#include <iostream>
#include <string>
using namespace std;
int main()
{

    string letters[2][2][2] = {{{"A", "B"},
                                {"C", "D"}},

                               {{"E", "F"}, {"G", "H"}}

    };
    // Confused...
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters[i][j][k] << "\n";
            }
        }
    }
    return 0;
}

                            // Why Multi-Dimensional Arrays?
                    // skiped topic..


