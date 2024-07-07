//Template in C++..

 //Function Templete 

 #include<iostream>
 using namespace std;

template<class T>

 void sum(T a, T b)
 {
    cout<<"Total Add : "<<a+b;

 };

 int main(){
    sum(2, 5);
    return 0;
 }