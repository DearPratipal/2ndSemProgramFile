#include<iostream>
using namespace std;
void add(int, int);
void add(int, int,int);
void add(int , float);

int main(){
    
    add(4,5);
    add(2,7,3);
    add(4,5.4f);
return 0;
}
void add(int a,int b)
{
    cout<<"\n addition is : "<<a+b;
}
void add(int a,int b,int c){
    cout<<"\n addition is : "<<a+b+c;
}
void add(int a, float b){
    cout<<"\n addition is:"<<a+b;
}