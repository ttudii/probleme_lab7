#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SPATIU " "

//struct separare{char *cuvant;};

int main(){

    char sir[100], *str;
    int i,j,k;
    int n;

    //struct separare *cuv;

    char cuv[20][100],*p;
    int v[20];

    gets(sir);

    str=(char*)malloc(sizeof(char)*strlen(sir));

    strcpy(str,sir);

    *(str+strlen(sir))='\0';

    printf("\n\nSepararea sirului in cuvinte:\n\n");

    p=strtok(str,SPATIU);

    n=0;

    while (p != NULL)
    {
        strcpy(cuv[n],p);
        n++;
        p=strtok(NULL,SPATIU);
    }

    for(i=0;i<n;i++){
        printf("%s\n",cuv[i]);
    }

    printf("%d\n\n",n);

    for(i=0;i<n;i++) v[i]=1;

    for(i=0;i<n;i++){
        if(strcmp(cuv[i],"gasit")!=0){
            for(j=0;j<n;j++){
                if(strcmp(cuv[i],cuv[j])==0 && i!=j)
                {
                strcpy(cuv[j],"gasit");
                v[i]++;
                }
            }

        printf("Cuvantul %s apare in sir de %d ori.",cuv[i],v[i]);
        printf("\n");
        }

    }

    free(str);

    return 0;

}
