#include <iostream>
class Car{
    public:
    std::string Brand;
    std::string color;
    int year;

    void start(){
        std::cout<<"car Started"<<std:: endl;

    }

};
int main(){
Car car;
car.color="red";
car.Brand="mustang";
car.year=1994;
car.start();

 std::cout<<car.Brand<<std::endl;
 std::cout<<car.color<<std::endl;
 std::cout<<car.year<<std::endl;

}