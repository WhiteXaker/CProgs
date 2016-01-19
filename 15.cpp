#include <stdio.h>

int main(){
    FILE * file;
    file = fopen("2.txt", "r");
    for (int i = 0; i < 256; i++){
        printf("%d %c\n", i, i);
        fprintf(file, "%d %c\n", i, i);
    }
    fprintf(file, "12345");
    fclose(file);
    return 0;
}