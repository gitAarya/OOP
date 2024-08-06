#include <iostream>
int main (){
    std:: string name;
    int age;
    std :: cout<<"whasts you age?";
    std:: cin >> age;
    std:: cout<<"whats your  full name ?"<<"\n";
     std :: getline(std:: cin >> std::ws,name);// std :: ws used to eliminate any white space after getting int input above

   // std:: cin >> name;
     std:: cout<< "you are "<< age << "years old \n ";
     std:: cout<< "hello "<< name;
     return 0;
}