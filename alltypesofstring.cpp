                                  C++ String Concatenation
#include<iostream>
#include<string>
using namespace std;
int main(){

string firstName= "Harsh";
string lastName= "Jaiswal";
//string fullName= firstName+lastName;
//string fullName= firstName+ " "+ lastName;
string fullName= firstName.append(lastName);
cout<<fullName<<endl;



    return 0;
}

                                   C++ Numbers and Strings
#include<iostream>
#include<string>
using namespace std;
int main(){
   // int x= 10;        // intger=30
   string x= "10";
   // int y= 20;
string y= "50";
    //int z= x+y;
    string z= x+y;         // string=1050
    cout << z<<endl;
    return 0;
}

                                    C++ String Length

#include<iostream>
#include<string>
using namespace std;
int main(){

string txt= "HARSHJAISWAL";
cout << "The length of txt string is :"<< txt.length();   //we can also use txt.size();

    return 0;
}

                                     C++ Access Strings
#include<iostream>
#include<string>
using namespace std;
int main(){

string myString= "harsh";
myString[0]='j';

cout <<myString;
 return 0;
}

                                      C++ Special Characters
#include<iostream>
using namespace std;
int main(){

string txt = "My town name is \"RavidasNagar\".";
string txt1 = "It\'s Ravidas Nagar.";
string txt2 = "Harsh\nJaiswal";
string txt3 = "Harsh\tJaiswal";

cout << txt <<endl;
cout << txt1 <<endl;
cout << txt2 <<endl;
cout << txt3 <<endl;



    return 0;
}


                                                         C++ User Input Strings
#include <iostream>
#include<string>
using namespace std;
int main()
{
    
string firstName;
cout << "Type your first name:";
cin >> firstName;
cout << "Your name is :" << firstName <<endl;

        //  For fullName..

    cout << "Type your fullName:";
    getline (cin, fullName);
    cout << "Your name is :" << fullName;

    return 0;
}


                                           C++ String Namespace

#include<iostream>
#include<string>
int main(){

std :: string txt = "Harsh";
std :: cout << txt;



    return 0;
}