#include<iostream>
using namespace std;
class overload{
    public:
    int a;


};
class child: public overload{
    public:
    void greet(){
        cout<<"Hello, i'm the child class which inherits the parent"<<endl;
    }
};
int main(){
    overload o1;
    child c1;
    c1.greet();
}