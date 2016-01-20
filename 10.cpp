#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char * filename = argv[1];
    FILE * file = fopen(filename, "r");
    if (!file == NULL) {
        char str = fgetc(file);
        while (str != EOF) {
            printf("%c", str);
            str = fgetc(file);
        }
        fclose(file);
        if (strcmp(argv[2], "0") == 0) {
            file = fopen(filename, "w");
            fclose(file);
        }
        else
            remove(filename);
    }
    return 0;
}