#include<stdio.h>
int Implication();
int main(){
    int a, b;
    printf("A \t B \t A-->B\n");
    for(a=0;a<=1;a++){
        for(b=0;b<=1;b++){
            printf("%d \t %d \t %d \n",a,b,Implication(a,b));
        }

    }
    return 0;
 
}
   int Implication(int p, int q){
    return !p||q;

    }