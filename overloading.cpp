#include<iostream>
// compile time polymorphism
using namespace std;
class parent{
    public:
    int age;
    public:
    void setAge(int age){
        this->age = age;
    }
    //function overloading: using same name with different input paramters
    void greet(){
        cout<<"Just hello"<<endl;
        cout<<"Your age is: "<<this->age<<endl;
        cout<<endl;
    }
    void greet(char name[]){
        cout<<"Hello "<<name<<endl;
    }
    void greet(char name[],int age){
        cout<<"Hello "<<age<<" years old."<<endl;
    }
};
int main(){
parent p, q;
char name[10]="Aakash";
p.setAge(19);
p.greet();
p.greet(name);

q.greet(name,30);

}