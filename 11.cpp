#include <cstdio>
#include <string.h>

int main(){
    FILE * file = fopen("/Users/vladimirignatov/Documents/CProgs/11.txt", "w");
    char string[1000];
    gets(string);
    while(strcmp(string, "") != 0){
        for (int j = 0; j < strlen(string); j++){
            if (!(string[j] >='0' && string[j] <='9'))
                fprintf(file, "%c", string[j]);
        }
        gets(string);
    }
    fclose(file);
    return 0;
}