//Class Tempalate in C++.

#include<iostream>
using namespace std;

template<class X>

class Demo {
    private:
    X  num1, num2;

    public:
Demo(X n1, X n2)
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


 Demo objl(5,7);
 objl.check();

 return 0;
}