#include <stdio.h>
int countof(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n%10+countof(n/10);
    }
}
int main()
{
    printf("enter the digit : ");
    int x;
    scanf("%d",&x);
    countof(x);
    printf("sum of digits is %d",countof(x));
}
    
  

    
