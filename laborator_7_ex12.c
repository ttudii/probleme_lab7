//rezolvarea problemei 13

#include <stdio.h>
#include <string.h>

//functie pentru stergerea de caractere dintr-un sir

void stergere(char sir[], int n,int *p){

    int i,j;

    i=*p;

    //i=0;

    while(i<strlen(sir)-1){
        *(sir+i)=*(sir+i+n);
        i++;
    }

    *(sir+strlen(sir)-n)='\0';

    puts(sir);
}

void adaugare(char sir[], char s[],int *q){

    int i,j;

    //i=q;
    j=0;

    while(j<strlen(s)){
        *(sir+*q+j-1)=*(s+j);
        j++;
    }

    *(sir+strlen(sir)+strlen(s))='\0';

    puts(sir);


}

int gasit(char sir1[],char sir2[], int *indice, int *poz){

    //int i=0;
    int j;
    int length;
    int found=0;


    while(!found){
        if(*(sir1+*poz)==*(sir2)){
           j=1;
           length=1;
           while(*(sir1+*poz+j)==*(sir2+j) && (j<=strlen(sir2))){
                length++;
                j++;
           }
           if(length==strlen(sir2))
            {
                indice=sir1+*poz;
                printf("%d\n",*poz);
                *poz=*poz+length;
                found=1;
            }
        }
        else
        *poz=*poz+1;
    }

    if(found==1)
        return 1;
    else
        return 0;

}


int main(){

    char str[50];
    char a[50],b[50];
    //int n,poz;
    int *indice;
    int i;
    int poz=0;

    scanf("%s%s%s",str,a,b);

    while(poz<strlen(str)){
        //printf("%d ",poz);
        if(gasit(str,a,indice,&poz)){
            stergere(str,strlen(a),&poz);
            adaugare(str,b,&poz);
            //poz=poz+strlen(a);
        }
        //printf("%d\n",poz);
    }

    puts(str);

    return 0;

}


//problema cu pozitia. Se insereaza/ se sterge de pe pozitii gresite. Mai multe variabile pentru pozitie?

