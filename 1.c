#include <stdio.h>
int main () {
    int A[2][2], l, c;
    double det;
 
    for (l=0; l<2; l++) {
        for (c=0; c<2; c++) {
            scanf("%d", &A[l][c]);
        }
    }
    det=A[0][0]*A[1][1] - A[0][1]*A[1][0];
    printf("%.2lf\n", det);
 
 
    return 0;
}