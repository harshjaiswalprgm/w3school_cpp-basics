//Question 1 virtual function

#include<iostream>
using namespace std;
class Animal{
public :
    string name;
    int age;
    string species;
    string sound;

     PrintAnimalInfo(){
        cout<<"Hello my name is harsh"<<endl;
    }
};
class sample2 : public sample{
public :
    void show(){
        cout<<"Hello my name is ayush Luthra"<<endl;
    }
};
int main(){
    sample *s;
    sample2 s2;

    s=&s2;
    s->show();

return 0;
}