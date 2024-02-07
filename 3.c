#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end) {
  
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

int main() {
    char word[100];

    printf("Enter a string: ");
    scanf("%s", word);
    
    int length = strlen(word);

    reverseString(word, 0, length - 1);

    printf("Reversed string: %s\n", word);

    return 0;
}