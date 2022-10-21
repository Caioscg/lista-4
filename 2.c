#include <stdio.h>
int main () {
    int c, l, n;
 
    scanf("%d", &n);
    int M[n][n];
 
    for (l=0; l<n; l++) {
        for (c=0; c<n; c++) {
            scanf("%d", &M[l][c]);
        }
    }
    l=0;
    c--;
    while (l<n && c>=0) {
        printf("%d\n", M[l][c]);
        l++;
        c--;
    }
 
    return 0;
}