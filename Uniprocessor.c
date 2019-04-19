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
 for(i=0;i<n;i++)
 x[i]=burst[i];

 //burst[9]=4546545;
 int t=74343434;
  
 for(time=0;count!=n;time++)
 {
  //	shortest=9;
  for(i=0;i<n;i++)
  {
   if(arrival[i]<=time && burst[i]<t && burst[i]>0 )
   shortest=i;
  }
  burst[shortest]--;
  if(burst[shortest]==0)
  {
   count++;
   completion=time+1;
   y[shortest]=completion;
   wait=wait+completion-arrival[shortest]-x[shortest];
   tt= tt+completion-arrival[shortest];
  }
 }
 printf("processno\tarrivaltime\tbursttime\tcompletiontime\n ");
 for(i=0;i<n;i++)
 {
 	printf("%d\t\t%d\t\t%d\t\t%d\n",i,arrival[i],x[i],y[i]);
 }
 printf("\n\n\n");
 printf("\n\nAverage waiting time = %lf\n",wait/n);
    printf("Average Turnaround time = %lf",tt/n);
    return 0;
}
