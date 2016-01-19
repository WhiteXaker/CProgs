#include <stdio.h>
#include <time.h>

long long fib1(int n){
    long long f0 = 1;
    long long f1 = 1;

    for (int i = 2; i <= n; i++){
        long long x = f0 + f1;
        f0 = f1;
        f1 = x;
    }

    return f1;
}

long long fib2(int n){
    if (n < 2){
        return 1;
    } else {
        return fib2(n-1) + fib2(n-2);
    }
}

int main(){
    long long t1 = clock();
    printf("%d\n", fib1(42));
    long long t2 = clock();
    printf("%d\n", t2 - t1);

    t1 = clock();
    printf("%d\n", fib2(42));
    t2 = clock();
    printf("%d\n", t2 - t1);
    return 0;
}