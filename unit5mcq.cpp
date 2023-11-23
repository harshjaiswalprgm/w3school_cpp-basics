// #include <iostream>

// class MyClass {
// public:
//     int value;

//     MyClass(int num) {
//         value = num;
//     }

//     ~MyClass() {
//         std::cout << "Destructor called for value: " << value << std::endl;
//     }
// };

// int main() {
//     MyClass* obj1 = new MyClass(5);
//     MyClass* obj2 = new MyClass(10);
//     delete obj1;
//     std::cout << "obj2->value: " << obj2->value << std::endl;
//     MyClass* obj3 = new MyClass(15);

//     delete obj2;
//     delete obj3;

//     return 0;
// }

// #include <iostream>

// int main() {
//     int* ptr = new int[3];
//     ptr[0] = 1;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     delete[] ptr;
//     std::cout << ptr[1];
//     return 0;
// }

// #include <iostream>

// int main() {
//     int* ptr = new int[5]();
//     std::cout << ptr[3];
//     delete[] ptr;
//     return 0;
// }

// #include <iostream>

// int main() {
//     int* ptr = new int(5);
//     std::cout << *ptr << std::endl;
//     delete ptr;
//     std::cout << *ptr << std::endl;
//     return 0;
// }

// #include <iostream>

// int main() {
//     int* ptr = new int[5];
//     for (int i = 0; i < 5; i++) {
//         ptr[i] = i + 1;
//     }
//     int sum = 0;
//     for (int i = 0; i < 6; i++) {
//         sum += ptr[i];
//     }
//     std::cout << sum;
//     delete[] ptr;
//     return 0;
// }
 //#include <iostream>

// int main() {
//     int* ptr = new int;
//     ptr = new int;
//     delete ptr;
//     return 0;
// }

// #include <iostream>

// class student {
// public:
//     int marks;
//     virtual int calc_grade() = 0;  // Pure virtual function
// };

// class topper : public student {
// public:
//     int calc_grade() override {
//         return 10;
//     }
// };

// class average : public student {
// public:
//     int calc_grade() override {
//         return 20;
//     }
// };

// int main() {
//     topper t;
//     average a;

//     std::cout << "Topper's grade: " << t.calc_grade() << std::endl;
//     std::cout << "Average student's grade: " << a.calc_grade() << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// class A{
// 	int a;
//     public:
// 	virtual void func() = 0;
// };
 
// class B: public A{
//    public:
// 	void func(){
// 		cout<<"Class B"<<endl;
// 	}	
// };
// int main(){
// 	B b;
// 	b.func();
// 	return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// class A{
// 	int a;
//    public:
// 	virtual void func() = 0;
// };
 
// class B: public A{
//    public:
// 	void func(){
// 		cout << "Awesome" << endl;
// 	}	
// };
 
// int main(){
// 	A a;
// 	a.func();
// 	return 0;
// }

// #include <iostream>

// class A {
// public:
//     int value;
//     A* self;

//     A(int val) : value(val), self(this) {}
// };

// int main() {
//     A obj1(13);
//     A obj2(10);

//     std::cout << obj1.self->value << std::endl;
//     std::cout << obj2.self->value << std::endl;

//     return 0;
// }

// #include <iostream>

// class A {
// public:
//     A* self;
//     A() : self(nullptr) {}
//     void setSelf(A* ptr) {
//         self = ptr;
//     }
// };

// int main() {
//     A obj1;
//     A obj2;
//     obj1.setSelf(&obj1);
//     obj2.setSelf(&obj1);
//     std::cout << (obj2.self == &obj1) << std::endl;
//     return 0;
// }

// #include <iostream>

// class one {
// public:
//     virtual void display() {
//         std::cout << "Good morning!" << std::endl;
//     }
// };

// class two : public one {
// public:
//     void display() {
//         std::cout << "Have a good day!" << std::endl;
//     }
// };

// int main() {
//     two obj;
//     one& ref = obj;
//     ref.display();

//     return 0;
// }

// #include <iostream>

// class func {
// public:
//     void display() {
//         std::cout << "Cruel Summer" << std::endl;
//     }
// };

// class func1 : public func {
// public:
//     void display() {
//         std::cout << "Midnight Rain" << std::endl;
//     }
// };

// int main() {
//     func1 obj;
//     func* ptr = &obj;
//     ptr->display();
//     return 0;
// }

// #include <iostream>

// class A {
// public:
//     virtual void display() {
//         std::cout << "iamneo" << std::endl;
//     }
// };

// class B : public A {
// public:
//     void display() {
//         std::cout << "Coimbatore" << std::endl;
//     }
// };

// int main() {
//     A* ptr = new B;
//     B* derivedPtr = static_cast<B*>(ptr);
//     derivedPtr->display();
//     return 0;
// }

// #include <iostream>

// class Base {
// public:
//     Base() {
//         std::cout << "Base Constructor" << std::endl;
//     }

//     virtual ~Base() {
//         std::cout << "Base Destructor" << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
//         std::cout << "Derived Constructor" << std::endl;
//     }

//     ~Derived() override {
//         std::cout << "Derived Destructor" << std::endl;
//     }
// };

// int main() {
//     Base* ptr = new Derived;
//     delete ptr;

//     return 0;
// }

#include <iostream>

class A {
public:
    A() {
        std::cout << "A Constructor" << std::endl;
    }

    virtual void display() {
        std::cout << "Spotify" << std::endl;
    }
};

class B : public A {
public:
    B() {
        std::cout << "B Constructor" << std::endl;
    }

    void display() {
        std::cout << "YouTube" << std::endl;
    }
};

int main() {
    A* ptr = new B;
    B* derivedPtr = static_cast<B*>(ptr);
    derivedPtr->display();
    delete ptr; 
    return 0;
}