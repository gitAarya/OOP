#include<iostream>
using namespace std ;
class base{
    int a,b;
    public:
    base(int a, int b){
        this->a = a;
        this->b=b;
    }
    void display(){
        cout<<" \n The value of a is "<<a<< " and B is :"<< b<<"\n";
    }


};


int main(){
    base b(2,4);
    b.display();
    return 0;

}