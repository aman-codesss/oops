#include<iostream>
using namespace std;
class Hero{
    public:
    int rank;
    Hero(){//user defined contructor
    cout<<"contructor called"<<endl;
    
    }
    Hero(int rank){//paramterised contructor
        cout<<"I am paramterised contructor"<<endl;
        this->rank = rank;
    }
};
int main(){
    //statically created object
    // Hero ramesh;
    cout<<"Hello"<<endl;
    //dynamically created object
    // Hero *h = new Hero;

    Hero prag(10); 
    cout<<"Hello again"<<endl;
    cout<<prag.rank<<endl;
    //dynamically created object
    Hero *p = new Hero(34);
    cout<<p->rank;
}