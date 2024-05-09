#include<iostream>
using namespace std;
class Hero{
    public:
    int rank, health;
    Hero(int rank){
        this->rank  = rank;
    }
    //copy contructor overrided
    Hero(Hero& temp){
        this->rank = temp.rank +1;
    }
    
};
int main(){
Hero ram(10);
cout<<ram.rank<<endl;

Hero shyam(ram);
cout<<shyam.rank<<endl;

}
