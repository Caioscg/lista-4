#include <stdio.h>
int main () {
    int nl, nc, l, c, i, k, t=0, p=0, maior, menor;
    double qnt;
    
    scanf("%d%d", &nl, &nc);
    int M[nl][nc];
 
    for (l=0; l<nl; l++) {
        for (c=0; c<nc; c++) {
            scanf("%d", &M[l][c]);
        }
    }
    for (i=0; i<nl; i++) {
        for (k=0; k<nc; k++) {
            for (l=nl-1; l>=0; l--) {
                for (c=nc-1; c>=0; c--) {
                    if (M[i][k]<=M[l][c]) t++;
                    if (M[i][k]==M[l][c]) p++;
                }
            }
            if (t==(nl*nc)) {
                    menor = M[i][k];
                    qnt=p;
            }        
                t=0;
                p=0;
        }
    }
    qnt=(qnt/(nl*nc))*100;
    printf("%d %.2lf", menor, qnt);
    printf("%\n");
    for (i=0; i<nl; i++) {
        for (k=0; k<nc; k++) {
            for (l=nl-1; l>=0; l--) {
                for (c=nc-1; c>=0; c--) {
                    if (M[i][k]>=M[l][c]) t++;
                    if (M[i][k]==M[l][c]) p++;
                }
            }
            if (t==(nl*nc)) {
                    maior = M[i][k];
                    qnt=p;
            }        
                t=0;
                p=0;
        }
    }
    qnt=(qnt/(nl*nc))*100;
    printf("%d %.2lf", maior, qnt);
    printf("%\n");
 
    return 0;
}