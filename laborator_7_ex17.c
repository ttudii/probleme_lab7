#include <stdio.h>
#include <string.h>

int main(){

    char a[20],b[20];

    int i;
    char *p,*q,*t;

    scanf("%s",a);
    getchar();
    scanf("%s",b);

    p=strstr(a,b);

    if(p!=NULL){
        t=p+strlen(b);
        //printf("\n%s",t);
        q=strstr(t,b);
        if(q!=NULL) printf("\nNegativ\n\n");
        else
        printf("\nAfirmativ\n\n");
    }
    else
    printf("Negativ\n\n");


}
