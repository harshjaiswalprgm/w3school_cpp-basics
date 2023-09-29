#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct
    {
        int Num;
        string my;                                                                 // C++ Structures (struct)
    } myStructure;

    myStructure.Num = 1;
    myStructure.my = "Namestay Dost..";

    cout << myStructure.Num << endl;
    cout << myStructure.my << endl;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;
int main()
{

    struct
    {

        string brand;
        string model;
        int year;

    } car1, car2;

    car1.brand = "Lamborghini";
    car1.model = "Urus";
    car1.year = 2023;
                                        //C++ Structures (struct)
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 2024;

    cout << car1.brand << "" << car1.model << "" << car1.year << endl;
    cout << car2.brand << "" << car2.model << "" << car2.year << endl;
    return 0;
}

