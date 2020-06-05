#include "types.h"
#include "stat.h"
#include "user.h"


int main (void)
{
    int f=fork();
    if(f!=0)
    {  //parent
        f=fork();
if(fork!=0)
{
malloc(8*sizeof(int));//sizeof(int)=4//8*4=32bytes
}
else{
malloc(10*sizeof(int));//sizeof(int)=4//10*4=40bytes
}
wait();
    }

    else
    {
        //child
      fork();
      if(fork!=0){
          malloc(15*sizeof(int));//sizeof(int)=4//15*4=60bytes

     wait(); }
      else{
          malloc(5*sizeof(int));//sizeof(int)=4//5*4=20bytes
     int max=64;//max byte = 64
     struct proc_info *pi=malloc(max*sizeof(struct proc_info));

     int n=getprocess(max,pi);
     for(int i=0;i<n;i++)
     {
         printf(pi[i].pid,pi[i].memsize);
     }
      }
    }
    wait();
    exit();
}
