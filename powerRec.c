#include <stdio.h>
int power( int b , int n );
int main (){
    int b , n , result;
    printf(" enter the base number : \n");
    scanf("%d",&b);

     printf(" enter the power of the base : \n");
     scanf(" %d", &n);
     result= power(b,n);

     printf(" %d ^%d = %d",b, n, result);
     return 0 ;


}
int power ( int b , int n ){
    if(n==0){
        return 1;

    }
    else{
        return (b * power(b , n -1));
    }
}