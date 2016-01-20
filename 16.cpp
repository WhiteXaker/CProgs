#include <stdio.h>
#include <string.h>

int main(){
    printf("Enter the string: ");
    char str[20];
    scanf("%s", &str);
    int res = 0;
    int sign = 0;
    if (str[0] == '-') {
        sign = 1;
    }
    for (int i = sign; i < strlen(str) && sign < 2; i++){
        if (str[i] >= '0' && str[i] <= '9')
            res = res * 10 + (str[i]-'0');
        else sign = 2;
    }
    if (sign < 2) {
        if (sign == 1) {
            res = res * (-1);
        }
        printf("\nNumber = %d", res);
    } else printf("\nError!");
    return 0;
}