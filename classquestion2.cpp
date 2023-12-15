// #include <iostream>
// using namespace std;
// template<typename j> void printn(j h)
// {
//     cout << "j is :" << h << endl;
// }
// class PrintNumber
// {
// public:
//     void input()
//     {
//         int a;
//         float b;
//         cout << "input" << endl;
//         cin >> a >> b;
//         printn(a);
//         printn(b);
//     }

// }; int main()
// {
//     PrintNumber k;
//     k.input();
//     return 0;
// }




#include <iostream>   // by function overloading
using namespace std;

void printn(int a){
    cout<<a<<endl;
}
void printn(float f){
    cout<<f<<endl;
}
 int main()
{
   printn(10);
   printn(2.1f);
    return 0;
}
















// #include<iostream>
// using namespace std;
// template<typename t>
// void printn(t a){
//     cout<<"a is ="<<a<<endl;
// }
// class PrintNumber{
//     public :
//     void input(){
//         int a;
//         float b;
//         char ch;

//         cout<<"Enter "<<endl;
//         cin>>a>>b>>ch;
//         printn(a);
//         printn(b);
//         printn(ch);

//     }
// };
// int main(){
//     PrintNumber p ;
//     p.input();

//     return 0;
// }