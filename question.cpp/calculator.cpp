#include<iostream>
using namespace std;
int main(){

    float num1, num2;
    char op;
   
   
     // It allows user to enter operator
    // i.e. +, -, *, /
cin>>op; 
cin>> num1 >> num2;
switch (op){
case '+':
cout<<num1+num2;
break;

case '-':
cout<<num1-num2;
break;

case '*':
cout<<num1*num2;
break;

case '/':
cout<<num1/num2;
break;

default: cout<<"Error! operator is not correct"<<endl;
}
    return 0;
}
/*
#include <iostream>                                         //Explanation//
using namespace std;
 
// Driver code
int main()
{
    char op;
    float num1, num2;
 
    // It allows user to enter operator
    // i.e. +, -, *, /
    cin >> op;

    // It allow user to enter the operands
    cin >> num1 >> num2;
 
    // Switch statement begins
    switch (op) {
    // If user enter +
    case '+':
        cout << num1 + num2;
        break;
 
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
 
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
 
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
 
    // If the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    }
    // switch statement ends
 
    return 0;
}*/