//deep and shallow copy by default copy contructor
#include<iostream>
#include<cstring>
using namespace std;
class Hero{
    public:
    int rank;
    char *name; 
    Hero(){
        cout<<"hello there"<<endl;
        name = new char[100];
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
    void print(){
        cout<<this->name;
        cout<<endl;
    }
    
};
int main(){
Hero ram;
char name[5]="Aman";
ram.setName(name);
ram.print();

//default copy constructor
Hero shyam = ram;
shyam.print();

ram.name[2]='e';
ram.print();
shyam.print();//shallow copy by default copy constructor

}
