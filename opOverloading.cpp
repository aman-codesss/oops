#include<iostream>
// operator overloading
using namespace std;
class parent{
    public:
    int age=10;
    public:
    void operator+ (parent &p){
        cout<<"Hello, + is overloaded by aman"<<endl;
        cout<<p.age<<endl;
    }
};
int main(){
parent p, q;
p+q;

}