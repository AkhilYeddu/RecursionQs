#include <stdio.h>
int facto(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * facto(n - 1);
    }
}
int main()
{
    printf("enter the number : ");
    int x;
    scanf("%d",&x);
    facto(x);
    int res=facto(x);
    printf("%d",res);
}