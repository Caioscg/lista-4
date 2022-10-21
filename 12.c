#include <stdio.h>
#include <string.h>
#define MAX_WORDS 200
#define MAX_WORD_LEN 64+1
 
int str_split(char * str, char m[][MAX_WORD_LEN], char * sep);
 
int main() {
 
    char sep[128];
    char texto[MAX_WORDS*(MAX_WORD_LEN)+1];
    char Strings[MAX_WORDS][MAX_WORD_LEN];
    //  = {
    //     "Ola",
    //     "Mundo",
    //     "Eu",
    //     "gosto",
    //     "de",
    //     "Programar",
    //     "e",
    //     "Calcular"
    // };
    int size, i, cmax, len, count;
    
    scanf("%[^\n]%*c", texto);
    scanf("%[^\n]%*c", sep);
 
    size = str_split(texto, Strings, sep);
 
    for(i=0;i<size;i++) {
        len = strlen( Strings[i] );
        if(i==0) cmax = len;
        else if(len>cmax) cmax = len;
        printf("(%d)%s\n", len, Strings[i]);
    }
    count = 0;
    for(i=0;i<size;i++) {
        len = strlen(Strings[i]);
        if(len == cmax) count++;
    }
    printf("%d\n", count);
    return 0;
}
 
char * mystrchr( char * str, int c ) {
    while( *str != '\0') {
        if(*str==c) return str;
        str++;
    }
    return NULL;
}
 
int str_split(char * str, char m[][MAX_WORD_LEN], char * sep) {
 
    int ss = 0;
    int n = 0;
    int c = 0;
    int i = 0;
    while(str[i]!='\0') {
        // if(str[i] estiver listado em sep)
        if( mystrchr(sep, str[i]) == NULL ) {
            m[n][c] = str[i];
            c++;
        } else {
            if(c>0) {
                m[n][c] = '\0';
                n++;
                c = 0;
            }
        }
        i++;
    }
    // Verifica se existe uma string no final do texto original
    if(c>0) {
        m[n][c] = '\0';
        n++;
    }
    return n;
}