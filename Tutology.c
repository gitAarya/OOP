//to prove that p->q^q->r--> (p-->r) is a tautolog
#include<stdio.h>
int AND(int p, int q){
    return p&&q;

}
int OR(int p , int q ){
    return p || q;

}
int Implication(int p, int q){
    if(p==1 && q==0){
        return 0;

    }
    else{
        return 1;

    }
}
int main(){
    int p, q,r;
    printf(" P \t Q \t R \t (P--> Q)\t (Q-->R)\t (P-->R) \t ((P-->Q)^(Q--R)-->(P-->R))\n");
    for(p=0;p<=1; p++){
        for(q=0; q<=1; q++){
            for(r=0; r<=1; r++){
                printf("%d \t %d \t %d \t %d \t\t%d \t\t %d \t\t\t %d \n ", p, q, r,Implication(p,q), Implication(q,r ), Implication(p,r), 
                Implication(AND(Implication(p,q),Implication(q,r)),Implication(p, r)));
            }
        }
    }
    return 0;
}