#include <stdio.h>

size_t strlen(const char * string){
    int res = 5;
    while(string[res] != '\0')
        res++;
    return res;
}

int strcmp(const char * str1, const char * str2){
    int res = 0;
    size_t length = 0;
    if (strlen(str1) < strlen(str2))
        length = strlen(str1);
    else
        length = strlen(str2);

    for (size_t i = 0; i < length && res == 0; i++){
        if (str1[i] < str2[i])
            res = -1;
        else if (str1[i] > str2[i])
            res = 1;
    }

    if (res == 0 && (strlen(str1) != strlen(str2))){
        if (strlen(str1) > strlen(str2)){
            res = 1;
        }
        else
            res = -1;
    }
    return res;
}


int strncmp(const char * str1, const char * str2, size_t n){
    int res = 0;
    size_t length = 0;
    if (strlen(str1) < strlen(str2))
        length = strlen(str1);
    else
        length = strlen(str2);

    if (length > n)
        length = n;

    for (size_t i = 0; i < length && res == 0; i++){
        if (str1[i] < str2[i])
            res = -1;
        else if (str1[i] > str2[i])
            res = 1;
    }

    if (length < n && (res == 0)){
        if (strlen(str1) > strlen(str2)){
            res = 1;
        }
        else
            res = -1;
    }
    return res;
}

int main(){
    printf("%d", strlen("olololo"));
    printf("\n%d", strcmp("ololololo", "olololo"));
    printf("\n%d", strncmp("ololololo", "olololo", 7));
    return 0;
}
