#include<iostream>
using namespace std;
void callByValue(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}
void callByReference(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10;
    int b=20;
    cout<<"the original value is : \n"<<" A = "<<a <<" and B = "<<b<<"\n \n";


    cout<<"Call by Value"<<"\n";
    callByValue(a,b);
    cout<<"A = "<<a<<" B = "<<b<<"\n \n";


 cout<<"Call by Reference"<<"\n";
    callByReference(a,b);
    cout<<"A = "<<a<<" B = "<<b<<"\n";



}
