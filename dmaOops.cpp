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
    //dynammic memory allocation
Person *p = new Person;
 p->name = 'A';
 p->age = 20;


 cout<<p->name<<" "<<p->age<<endl;
 cout<<sizeof(*p)<<endl;
//
p->setname('B');
p->setAge(21);
cout<<p->getName()<<" "<<p->getAge()<<endl;
}