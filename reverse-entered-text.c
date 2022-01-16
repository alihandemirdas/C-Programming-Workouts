#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char text[20];
    printf("Enter the text you want to reverse: ");
    gets(text);
    int size = strlen(text);

    for(i=size-1; i>=0; i--)
    {
        if(text[i] == "\0")
            continue;
        printf("%c",text[i]);
    }

    return 0;
}
