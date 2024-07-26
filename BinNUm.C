#include <stdio.h>
int main (){
    long a , b ;
    int i =0,c=0,sum[20];
    printf("<---enter the first number--->\n");
    scanf(" %ld",&a);
   printf("<---enter the second number--->\n");
    scanf(" %ld",&b);
    while( a != 0 ||  b != 0){
        sum[i++]=(a % 10 + b % 10 + c) % 2;
        c=(a % 10 + b % 10 + c) / 2;
         a=a/10;
         b= b/10;
    } 
    if ( c!=0){
        sum [i++] = c;

    }
    --i;
    printf(" teh sum of the two binary number is :");
    while(i>= 0){
        printf("%d ",sum [i--]);
        
    }
return 0;
}