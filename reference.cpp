#include<iostream>
using namespace std;
                                  //c++ refernece
int main(){
string food ="Chapati";
string &meal = food;
cout << food<<endl;
cout << meal<<endl;

    return 0;
}
/////////////////////////////////
#include<iostream>
using namespace std;
                                  //c++ refernece
int main(){
string food = "Pizza";

cout << &food;
    return 0;
}

