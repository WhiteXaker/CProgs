#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int mas[8];
    for (int i = 0; i < 8; i++){
        mas[i] = abs(3 * rand()%1000);
        printf("%d ", mas[i]);
    }
    return 0;
}