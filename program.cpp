#include<iostream>
using namespace std;

class BASE{
    public:
    virtual void disp();
};

class D: public BASE{
   public:
    void disp()
    {
    cout<<" Dervived Class: ";
    }
    };

int main(){
D obj;
obj.disp();


// int main(){

// BASE *ptr
// D obj;
// ptr=&obj;
// ptr->disp();


    return 0;
}