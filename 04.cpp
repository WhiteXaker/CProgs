#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char ** strings;
    char string[100];
    int n = 0;
    printf("\nEnter the string: ");
    gets(string);
    while(strcmp(string, "")){
        strings[n] = string;
        n++;
        printf("Enter the string: ");
        gets(string);
    }

    for (int i = 0; i < n; i++) {
        char * string = strings[i];
        printf("%d", strlen(string));
    }
    return 0;
}
