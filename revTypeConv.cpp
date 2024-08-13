#include <iostream>
using namespace std;
class Time
{
    int hrs;
    int min;

public:
    Time(int h, int m)
    {
        hrs = h;
        min = m;
    }
    operator int (){
        return hrs * 60+ min;
    }
    void display(){
        cout<< hrs<<" hour"<<" ";
        cout<<min<<" minutes"<<" \n";
    }

};
int main(){
    int duration;
    Time t(3,20);
    t.display();
    duration=t;
    cout<<"duration:"<<duration<<" minutes"<<endl;
    return 0;

}