#include <iostream>
using namespace std;

class Fruit
{
public:
   static int noff;
    Fruit()
    {
        noff++;
    }
        ~Fruit()
        {

            noff--;
        }
    };

 class Apple: public Fruit
{
public:
    static int ac;
    Apple():Fruit()
    {
        ac++;
    }
    ~Apple()
    {

        ac--;
    }
};
class Mango : public Fruit
{
public:
   static int mc;
    Mango():Fruit()
    {
        mc++;
    }
    ~Mango()
    {
        mc--;
    }
};
int Fruit::noff=0;
int Apple::ac=0;
int Mango::mc=0;

int main()
{
Apple firstApple,secondApple,thirdApple;
Mango firstMango,secondMango,thirdMango,fourthMango;
cout<<"tnooff:"<<Fruit::noff<<endl;
cout<<"tnoofa:"<<Apple::ac<<endl;
cout<<"tnoofm:"<<Mango::mc<<endl;
    return 0;
}