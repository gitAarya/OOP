#include <stdio.h>
#include <math.h>
#include<stdlib.h>

float fun(float x){
    float y;
    y=pow(x,2) +3*x-2;
    return y;
}
void main(){
    float x1,x2,x0,error=0.0001;
    int i=0;
    printf("\n enter two initial guess:\n");
    scanf("%f %f",&x1,&x2);
    if (fun(x1)*fun(x2)>0)
    {
        printf("wrong input");
        exit(0);
    }
    else{
        do{
            x0=(x1+x2)/2;
            if(fun(x0)*fun(x1)>error){
                x1=x0;
            }else{
                x2=x0;
                i++;
            }
        }while (fabs(fun(x0))>error);
    }
    printf("\n root = %f ",x0);
    printf("\n number of iteration =%d " ,i);

}