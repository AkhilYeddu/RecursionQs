#include <stdio.h>
int i=1;
int count(int n)
{
    if(n!=0)
    {
        printf("%d\n",i);
        i++;
        return count(n-1);
         
    }
    else{
        return 0;
    }
}
int main()
{
    printf("till where? :");
    int x;
    scanf("%d",&x);
    count(x);
   return 0;
}