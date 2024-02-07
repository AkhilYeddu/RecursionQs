#include <stdio.h>
int SizeString(char *str)
{
    if(*str=='\0')
    {
        return 0;
    }
    else
    {
        return 1 + SizeString(str+1);
    }
    
    
}
int main()
{
    printf("enter the word : ");
    char word[100];
    scanf("%s",&word);
    int size=SizeString(word);
    printf("size of string is %d",size);
}
