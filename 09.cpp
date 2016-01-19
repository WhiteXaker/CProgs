#include <stdio.h>

void insertSort(int * mas, int n){
    for (int i = 1; i < n; i++){
        int temp = mas[i];
        int pos = i;
        while(mas[pos-1] > temp && pos>0) {
            mas[pos] = mas[pos-1];
            pos--;
        }
        mas[pos] = temp;
    }
}

int main(){
    int  mas[5] = {5,4,3,1,2};
    for (int i = 0; i < 5; i++)
        printf("%d ",mas[i]);
    insertSort(mas, 5);
    printf("\n");
    for (int i = 0; i < 5; i++)
        printf("%d ",mas[i]);
    return 0;
}