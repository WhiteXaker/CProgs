#include <stdio.h>
#include <stdlib.h>

int main(){
    double ** matr;
    printf("n = ");
    int n;
    scanf("%d", &n);

    matr = (double **) malloc(n*sizeof(double *));
    for (int i = 0; i < n; i++)
        matr[i] = (double *) malloc(n* sizeof(double));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            double x;
            scanf("%lf", &x);
            matr[i][j] = x;
        }

    if (n < 3)
        printf("\nError! n < 3");
    else {
        double res = matr[0][0]*matr[1][1]*matr[2][2] - matr[0][0]*matr[1][2]*matr[2][1] - matr[0][1]*matr[1][0]*matr[2][2];
        res = res + matr[0][1]*matr[1][2]*matr[2][0] + matr[0][2]*matr[1][0]*matr[2][1] - matr[0][2]*matr[1][1]*matr[2][0];
        printf("%f", res);
    }
    return 0;
}