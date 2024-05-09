#include<iostream>
using namespace std;
class Person{
    public:
    char name;
    int age;

    char getName(){
        return name;
    }
    void setname(char ch){
        name = ch;
    }
    int getAge(){
        return age;
    }
    int setAge(int a){
        age =a ;
    }
};

int main(){
 Person h1 ;
 h1.name = 'A';
 h1.age = 20;


 cout<<h1.name<<" "<<h1.age<<endl;
//  cout<<sizeof(h1)<<endl;
//
h1.setname('B');
h1.setAge(21);
cout<<h1.getName()<<" "<<h1.getAge()<<endl;
}