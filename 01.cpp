#include <stdio.h>

#define EPS 0.0000000001

double abs(double x){
    double res = x;
    if (res < 0)
        res = -res;
    return res;
}

double exp(double x){
    double res = 1;
    double next = x;
    int i = 2;
    while (next > EPS){
        res += next;
        next = next * x / i++;
    }
    return res;
}

double sin(double x){
    double res = x;
    double next = -x * x * x/6;
    int i = 3;
    while (abs(next) > EPS){
        res += next;
        next = -1.0 * next * x * x/ (++i)/(++i);
    }
    return res;
}

double ln(double x){
    double res = 0.0;
    while(x > exp(1)){
        res++;
        x = x / exp(1);
    }
    res++;
    x = (x - exp(1))/exp(1);
    double next = x;
    int i = 1;
    while(abs(next) > EPS){
        res += next;
        next = -1.0*next*x*i/(++i);
    }
    return res;
}

double pow(double base, double power){
    double res = exp(abs(power)*ln(base));
    if (power<0)
        res = 1/res;
    return res;
}

int main(){
    printf("%f", exp(3.4));
    printf("\n");
    printf("%f",sin(4));
    printf("\n");
    printf("%f", ln(146));
    printf("\n");
    printf("%f", pow(8.1, 17.1));
    return 0;
}

