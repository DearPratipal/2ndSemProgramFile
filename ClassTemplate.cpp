//Class Tempalate in C++.

#include<iostream>
using namespace std;

// template<class X>

class Demo {
    private:

    int num1, num2;

    public:
Demo(int n1, int n2)
    {
        num1= n1;
        num2= n2;
    }
void check(){
    if(num1>num2){
        cout<<"num1 is largest ";
        }
    else{
        cout<<"num2 is largest"<<endl;
    }
    }
};

int main(){

 Demo objf(5,7);
 objf.check();


    return 0;
}