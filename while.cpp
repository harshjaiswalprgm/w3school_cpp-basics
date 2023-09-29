                                             // C++ While Loop....
                                            
 #include <iostream>
using namespace std;
int main()
{

    int i = 0;
    while (i < 5)
    {

        cout << i << endl;
        i++;
    }
    return 0;
}

                                    //C++ Do while loop......
#include <iostream>
using namespace std;
int main()
{

    int i = 0;
    do                              //first run the program and then cheak the condition....
    {

        cout << i << endl;
        i++;
    } while (i < 5);

    return 0;
}