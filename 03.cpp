#include <stdio.h>

int main(){
    char * strings[3] = {"ololo", "ololo2", "ololo3"};
    for (int i = 0; i < 3; i++){
        printf("\n%s",strings[i]);
    }
    return 0;
}
