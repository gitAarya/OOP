#include <iostream>
using namespace std;
class complex{
private:
float x;
float y;
public:
complex() : x(0), y(0) {}
complex( float real , float imag ){
    x= real;
    y= imag;

}
complex operator + (const complex  & c){
    complex temp;
    temp.x= x+c.x;
    temp.y= y+c.y;
    return temp ;

}
void display( ) {
    cout<< x<< "+"<<y<<"i"<< " \n";

}
};
int main(  ){
    complex c1,c2,c3;
    c1=complex(2.3,3.5);
    c2=complex(3.4 , 4.6);
    c3=c1+c2;

    cout<< "c1 =";c1.display();
    cout<< "c2  =";c2.display();
    cout<< "c3 =";c3.display();
    return 0;
}