#include<iostream>
using namespace std;
class Hero{
    public:
    static int timeToComplete;//static datamember, no object creation needed

    static int greet(){
        return timeToComplete;//can access only static members
    }
};
// :: is a scope resolution operator
    int Hero::timeToComplete =5;

    int main(){
        cout<<Hero::timeToComplete<<endl;
        cout<<Hero::greet()<<endl;//static function
    }