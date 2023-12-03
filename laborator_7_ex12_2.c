#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stergere(char sir[], int n,char *p){

    int i,j;

    i=p-sir;

    //i=0;

    while(i<strlen(sir)-1){
        *(sir+i)=*(sir+i+n);
        i++;
    }

    //*(sir+strlen(sir))='\0';
}


void adaugare(char sir[], char s[],int q){

    int i,j;

    j=0;

    i=q;

    for (i=strlen(sir); i>=q; i--) {
        *(sir+i+strlen(s)) = *(sir+i);
    }


    while(j<strlen(s)){
        *(sir+q+j)=*(s+j);
        j++;
    }

    *(sir+strlen(sir))='\0';


}

int main(){

    char str[50];
    char a[10],b[10];
    char *sir;
    char *indice;
    int i;
    int poz=0;

    scanf("%s%s%s",str,a,b);

    sir=(char*)malloc(sizeof(char)*strlen(str));


    for(i=0;i<strlen(str);i++){
            *(sir+i)=*(str+i);
    }

    *(sir+strlen(str))='\0';

    do{

        indice=strstr(sir,a);

        stergere(sir,strlen(a),indice);

        sir=(char*)realloc(sir,strlen(sir)+strlen(b)+1);

        adaugare(sir,b,indice-sir);

        printf("%s\n\n",sir);

    }while(indice!=NULL);


    //printf("%s",sir); nu functioneaza afisarea dupa iesire din ciclul do ... while ???

    free(sir);

    return 0;

}
