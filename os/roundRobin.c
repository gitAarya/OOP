#include<stdio.h>
void main(){
    int n,i,qt,count=0,temp,sq=0,bt[10],wt[10],tat[10],rem_bt[10];
    float awt,avgTat=0;
    printf("enter the no of process");
    scanf("%d",&n);

    printf("enter the brustTime of process");
    for (i = 0; i < n; i++)
    {
         scanf("%d",&bt[i]);
         rem_bt[i]=bt[i];
    }
    printf("enter the quantum time");
    scanf("%d",&qt);
    
    while (1)
    {
      for ( i = 0,count=0; i < n; i++)
      {
        temp=qt;
        if(rem_bt[i]==0){
            count ++;
            continue;
        }
        if (rem_bt[i]>qt)
        {
           rem_bt[i]=rem_bt[i]-qt;
        }
        else
            if (rem_bt[i]>=0)
            {
                temp=rem_bt[i];
                rem_bt[i]=0;
            }
            sq=sq+temp;
            tat[i]=sq;
        
      }
      if(n==count)
        break;
      
    }
    printf("\n  process \t brust time  \t trunaround time\n waiting time ");
    for ( i = 0; i < n; i++)
    {
      wt[i]=tat[i]-bt[i];
      awt=awt+wt[i];
      avgTat=avgTat+tat[i];
      printf("\n %d \t %d \t \t %d \t %d",i+1)

    }
    
}