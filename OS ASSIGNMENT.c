#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int sum=0;
    int id1=fork();
    fork();
    if(id1==0)
    {
        for(int i=1;i<=50;i++)
        {
            sum=sum+i;
        }
        //printf("Child1:%d \n",sum);
    }
    {
        for(int i=51;i<=100;i++)
        {
            sum=sum+i;
        }
        //printf("Parent:%d \n",sum);
    }
    printf("%d ",sum);
}
