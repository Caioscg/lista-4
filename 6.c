#include <stdio.h>
int main () {
    int M[6][6], l, c, k=0, t=-100;
 
    for (l=0; l<6; l++) {
        for (c=0; c<6; c++) {
            scanf("%d", &M[l][c]);
        }
    }
    c=0; l=0;
    while (l<4) {
        while (c<4) {
            k=M[l][c]+M[l][c+1]+M[l][c+2]+M[l+1][c+1]+M[l+2][c]+M[l+2][c+1]+M[l+2][c+2];
            if (t<k) t=k;
            c++;
        }
        c=0;
        l++;    
    }
    printf("%d\n", t);
 
    return 0;
}