#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SPATIU " "

int main(){

    char *sir, str[100];
    char *p;
    char cuv[20][100];
    int n;
    int i,j,k;

    gets(str);

    sir=(char*)malloc(sizeof(char)*strlen(str));

    //nu uita sa copiezi in noul sir alocat dinamic continutul sirului vechi!

    strcpy(sir,str);

    *(sir+strlen(str))='\0';

    p=strtok(sir,SPATIU);

    n=0;

    while(p!=NULL){
            strcpy(cuv[n],p);
            n++;
            p=strtok(NULL,SPATIU);
    }

    for(i=0;i<n;i++){
        printf("%s ",cuv[i]);
    }

    free(sir);

    return 0;

}
