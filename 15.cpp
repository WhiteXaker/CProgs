#include <stdio.h>

int main(){
    FILE * file;
    file = fopen("/Users/vladimirignatov/Documents/CProgs/15.txt", "w");
    for (int i = 0; i < 256; i++){
        printf("%d %c\n", i, i);
        fprintf(file, "%d %c\n", i, i);
    }
    fclose(file);
    return 0;
}