#include <stdio.h>
#include <string.h>

void ex_5(char *s){

    char *temp;

    int i,j,k;


    for(i=0;i<strlen(s);i++){

        for(k=0;k<strlen(s);k++){
            *(temp+k)=*(s+k);
        }

        j=0;
        while(j<strlen(s)-i){
            *(temp+i+j)=*(temp+i+j+1);
            j++;
        }

        *(temp+strlen(s)-1)='\0';

        printf("\n%s",temp);
    }

    printf("\n");

}

int main(){

    char s[100];
    int i,j;

    scanf("%s",s);

    // de ce nu mai merge? printf("\n");

    ex_5(s);


    return 0;

}
