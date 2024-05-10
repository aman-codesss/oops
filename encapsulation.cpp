#include<iostream>
using namespace std;

class Student {
//encapsulation is just keeping data members and functions private in a class
    private:
        string name;
        int age;
        int height;

    public:
    int getAge() {
        return this->age;
    }
};

int main() {

    Student first;

    cout << "Sab sahi chalra hai" << endl;
    cout<<first.getAge()<<endl;

    return 0;
}