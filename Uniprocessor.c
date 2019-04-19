#include <stdio.h>
int main() 
{
 int n;
 double wait=0,tt=0,completion;
  printf("enter the number of Processes:\n");
  scanf("%d",&n); 
 // int arrival[n],burst[n],x[n],y[n],
 int i,j,shortest,count=0,time;
  int *arrival=(int *)calloc(n,sizeof(int));
   int *burst=(int *)calloc(n,sizeof(int));
    int *x=(int *)calloc(n,sizeof(int));
     int *y=(int *)calloc(n,sizeof(int));
  printf("enter the no of processes arrival_time burst_time in respective order");

 for(i=0;i<n;i++)
 {
 	printf("\nP%d details : ", i);
 	scanf("%d%d",&arrival[i],&burst[i]);
 }
  

    return 0;
}
