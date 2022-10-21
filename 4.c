#include <stdio.h>
int main () {
    int A[10][10], m=0, n=0, c=0, i=1, N=0, C=0, l=0;
 
    while (1) {
        scanf("%d", &m);
        if (m>0 && m<=10) break;
    }    
    while (1) {
        scanf("%d", &n);
        if (n>0 && n<=10) break;
    }  
 
    for (l=0; l<m; l++) {
        for (C=0; C<n; C++) {
            scanf("%d", &A[l][C]);
        }
    }
    C=0;
    l=0;
    while (l<m) {
        printf("linha %d: ", l+1);
        while (C<n) {
            printf("%d", A[l][C]);
            if(C<(n-1)) printf(",");
            C++;
        }
        printf("\n");
        l++;
        C=0;
    }
    
    return 0;
}