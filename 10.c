#include <stdio.h>
int main () {
    int nl, nc, l, c, i=0, L, C=0, k=0, t;
    
    scanf("%d%d", &nl, &nc);
    if (nl>10 || nl<1 || nc>10 || nc<1) {
        printf("Dimensao invalida\n");
        return 0;
    }   
    int A[nl][nc];
    t=nl*nc;
    for (l=0; l<nl; l++) {
        for (c=0; c<nc; c++) {
            scanf("%d", &A[l][c]);
        }
    }
    for (l=0; l<nl; l++) {
        for (c=i; c<nc; c++) {
            printf("%d ", A[l][c]);
            k++;
            if (k==t) break;
        }
        if (k==t) break;
        c--;
        nc--;
        for (L=l+1; L<nl; L++) {
            printf("%d ", A[L][c]);
            k++;
            if (k==t) break;
        }
        if (k==t) break;
        L--;
        nl--;
        c--;
        while (c>=C) {
            printf("%d ", A[L][c]);
            c--;
            k++;
            if (k==t) break;
        }
        if (k==t) break;
        C++;
        i++;
        c++;
        L--;
        while (L>=i) {
            printf("%d ", A[L][c]);
            k++;
            L--;
            if (k==t) break;
        }
        if (k==t) break;
    }
    
 
    return 0;
}