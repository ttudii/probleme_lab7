#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isvowel(char c){

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    else
        return 0;

}


int main(){

    FILE *fp;

    int i=0;
    int j;
    int nou=0;

    int p,q;


    char str[60]="acesta este un test";
    //char str1[60];

    fp=fopen("ex_9.txt","r+");

    if(fp==NULL){
        printf("error opening file\n");
        exit(1);
    }

    fgets(str,60,fp);

    puts(str);

    while(i<strlen(str)){
        if(isvowel(*(str+i))){
                nou++;
            for(j=i;j<strlen(str)-1;j++){
                *(str+j)=*(str+j+1);
            }
        }
    i++;
    }

    *(str+strlen(str)-nou)='\0';

    puts(str);

    printf("\n\nLimite: ");
    scanf("%d%d",&p,&q);

    printf("\n");

    for(i=p;i<q-1;i++){
        printf("%c",*(str+i));
    }




    fclose(fp);



    return 0;

}
