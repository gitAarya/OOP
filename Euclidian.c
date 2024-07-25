#include <stdio.h>
int gcd( int a , int b);
int main (){
    int a, b , g;
printf(" enter the first number \n");
scanf(" %d ",&a);
printf("enter the  second number \n");
scanf(" %d",&b);
g= gcd(a,b);
printf(" the gcd of %d and %d =%d \n",a,b,g);
return 0;
}
int gcd(int a , int b){
    if (a==0){
        return b;
    }
    else {
        return gcd (b%a ,a);

    }

}