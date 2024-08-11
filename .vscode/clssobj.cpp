//Create a class Employee with private data members Eid, Ename, and Salary.
// Include public member functions read and display value of data members.
// Derive a class names typist from above class. The class should contain a private data members.
// Finally create two objects of typist class and read and display their values.
#include<iostream>
class Employee {
     private :
     int Eid;
     std:: string Ename;
     int salary;
     // constructor
     Employee(int id,std::string name, int income){
        Eid=id;
        Ename=name;
        salary=income;
     }
     void display(){
        std:: cout<< "Employee details are as below:"<< std::endl;

        std::cout<<Eid<<"\t"<<Ename<<"\t"<<salary<<std::endl;
        
     }
}

int main(){


}