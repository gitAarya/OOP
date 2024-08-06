#include <iostream>
using namespace std;
class time 
{
private:
    int hr ;
    int min ;

public:
void getdata (){
    cout<<" <----enter the hour and minutes--->"<<endl;
    cin>>hr >>min ;
}
int opearator< (const time & t ){
    int ft,st;
    ft=hr*60+min;
    st=t.hr* 60+min ;
    if(ft<st){
        return 1;

    }
    else {
        return 0;
    }
}
};
int main (){
    time t1,t2;
    t1.getdata();
    t2.getdata();
    if (t1< t2)
    {
        cout<<"t1 is less than t2"<< endl;

    }else{
        cout<< " t2 is less than t1"<< endl;

    }
    return 0;

}