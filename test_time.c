#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int pid;
    int child_pid,wtime,rtime;

    pid=fork();
    if(pid<0)//faild
    {
        printf(1,"fork faild!\n");
        exit();
    }
    if(pid==0)//child
    {
printf(1,"\npid %d created child\n",getpid());
    }
    else{
for (int i=0;i<200;i++)
{printf(1,"%d",i);
}
        child_pid=waitx(&wtime,&rtime);
    
        printf(1,"\n waittime = %d, runtime = %d with childpid = %d \n",wtime,rtime,child_pid);
    }
    exit();
}
