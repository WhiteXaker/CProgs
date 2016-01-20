#include <cstdio>
#include <string.h>
#include <stdlib.h>

int main(){
    char ** str;
    char string[100];
    int n = 0;
    printf("\nEnter the string: ");
    gets(string);
    while(strcmp(string, "")){
        str[n] = (char *) malloc(strlen(string)+1);
        strcpy(str[n], string);
        n++;
        printf("Enter the string: ");
        gets(string);
    }

    for (int i = 0; i < n; i++) {
        char * s;
        s = (char *) malloc(sizeof(str[i]));
        strcpy(s, str[i]);
        puts(s);
    }
    return 0;
}
