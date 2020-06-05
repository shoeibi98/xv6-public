#include "types.h"
#include "stat.h"
#include "user.h"


int main (void)
{
    int f=fork();
if(f<0)//fork==-1;
{
printf(1,"fork failed");
}   
 else if(f==0)
    {  //child
      
int *i=malloc(51400*sizeof(char*));//sizeof(char*)=4
for(int j=0;j<500000000;j++)
{
*i=2;
}
}
else{
int innerf=fork();
if(innerf<0)//fork==-1;
{
printf(1,"inner fork failed");
}   
 else if(f==0)
    {  //inner child
      
int *i=malloc(726*sizeof(double*));//sizeof(double*)=8
for(int j=0;j<7000000000;j++)
{
*i=2;
}
}
else{
struct proc_info *pi=malloc(100*sizeof(struct proc_info));
//getprocess();
for (int i=0;i<10;i++)
{
if(pi[i].pid!=0){
printf(1,"id=");
printf(1,"%d \n",pi[i].pid);
printf(1,"memsize=");
printf(1,"%d \n",pi[i].memsize);
}
}
wait();
    }

    
   // wait();
}
//exit();
}
