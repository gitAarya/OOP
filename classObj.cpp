#include <iostream>
using namespace std;
class Car{
    public:
    string Brand;
    string color;
    int year;

    void start(){
        cout<<"car Started"<< endl;

    }

};
int main(){
Car car;
car.color="red";
car.Brand="mustang";
car.year=1994;
car.start();

 cout<<car.Brand<<endl;
 cout<<car.color<<endl;
 cout<<car.year<<endl;

}