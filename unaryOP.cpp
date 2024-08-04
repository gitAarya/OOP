#include<iostream>
using namespace std;
class space
{
private:
    /* data */
    int x;
    int y;
    int z;
    
public:
void getData(int a , int b,int c){
    x=a;
    y=b;
    z=c;

}
void display(){
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

}
void operator -(){
    x=-x;
    y=-y;
    z=-z;

}
};

int main(){
    space s;
    s.getData(10,-20,40);
    cout<<"<--Original Value--->"<<endl;

    s.display();
    -s;

     cout<<"<---After operator overlaoding--->:"<<endl;
     s.display();
      return 0;



}