#include<stdio.h>
#include <math.h>

void main() {
    int U, R;
    float I;
    printf("Insert value of U and R: ");
    scanf("%d%d", &U,&R);
    I = U/R;
    printf("I = %d", U/R);
}
