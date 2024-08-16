#include<stdio.h>
int NOT();
int main(){
    int a,b ;
printf(" A \t ~A \n");
for(a=0;a<=1;a++){
    printf("%d \t %d \n",a,NOT(a));

}
return 0;
}
int NOT(int a){
    return !a;
}