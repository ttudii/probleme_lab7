#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


void interschimbare(char *str){

    int i;
    char temp;

    i=0;

    while(i<strlen(str)){

        temp=*(str+i);
        *(str+i)=*(str+i+1);
        *(str+i+1)=temp;

        i+=2;
    }

}

int main(){

    char sir[100],*str;
    int i,n;

    instructiune:
    do{
        printf("Introduceti siruul de caractere (nr.par de caractere): ");
        scanf("%s",sir);
        getchar();
    }while(strlen(sir)%2!=0);


    str=(char*)malloc(sizeof(char)*strlen(sir));

    strcpy(str,sir);

    *(str+strlen(sir))='\0';

    interschimbare(str);

    printf("%s\n\n",str);

    char car;

    do{
        printf("Mai introduceti un cuvant (y sau n)? ");
        scanf("%c",&car);
        getchar();
    }while(tolower(car)!='y' && tolower(car)!='n');

    printf("\n\n");

    if(tolower(car)=='y'){
        goto instructiune;
    }

    free(str);


    return 0;

}
