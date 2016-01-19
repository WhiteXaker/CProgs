#include <stdio.h>

void bubbleSort(int * mas, int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-1; j++)
            if (mas[j]>mas[j+1]){
                int temp = mas[j];
                mas[j]  = mas[j+1];
                mas[j+1] = temp;
            }
}

int main(){
    int  mas[5] = {5,4,3,1,2};
    for (int i = 0; i < 5; i++)
        printf("%d ",mas[i]);
    bubbleSort(mas, 5);
    printf("\n");
    for (int i = 0; i < 5; i++)
        printf("%d ",mas[i]);
    return 0;
}