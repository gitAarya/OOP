#include<iostream>
inline int max (int x,int y){
    return (x>y)?x:y;
}

int main(){
    std ::  cout<< "max(20,10):"<<max(20,10)<<"\n";
    std ::  cout<< "max(0,100):"<<max(0,100)<<"\n";
    std ::  cout<< "max(100,1000):"<<max(100,1000)<<"\n";
    return 0;
}