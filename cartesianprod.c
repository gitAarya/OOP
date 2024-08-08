#include <stdio.h>
int main (){
    int a[10],b[10],m,n,i,j;
    printf(" how many elements do you want in the a?\n");
    scanf(" %d",&m);
    printf(" enter %d elements in the set a: ",m);
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);

    }

      printf(" how many elements do you want in the b?\n");
    scanf(" %d",&n);
    printf(" enter %d elements in the set b: ",n);
    for(j=0;j<n;j++){
        scanf("%d",&b[j]);

    }
    printf(" the  cartesian product  is:\n");
    printf(" {");
    for( i = 0; i< m ; i++){
        for(j =0 ; j < n ; j++){
            printf("( %d ,%d)",a[i],b[j]);
            printf(",");
        }

    }
    printf("}");
    return 0;


}



