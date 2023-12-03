#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SPATIU ' '

int main(){


   FILE *fp;
   int i,j,k,q;
   char cuvant[10][60];

   char str[60];

   /* opening file for reading */

   fp = fopen("ex_6.txt" , "r");
   if(fp == NULL) {
      perror("Error opening file");
      //return(-1);
      exit(1);
   }

   if( fgets (str, 60, fp)!=NULL ) {
      /* writing content to stdout */
      puts(str);
   }

   j=0;
   k=0;
   i=0;

   //printf("%d\n",strlen(str));

   while(i<strlen(str)){

    //printf("i=%d\n",i);
    //printf("%d ",j);

    q=0;


    while((*(str+j)!=SPATIU) && (*(str+j)!='\0')){
            *(cuvant[k]+q)=*(str+j);
            j++;
            q++;
    }

    cuvant[k][q]='\0';
    //printf("%d\n",j);
    printf("%s\n",cuvant[k]);

    k++;
    j++;
    i=i+q+1; //+1 este pentru spatiu
   }

   i=0;
   int contor=0;
    while(i<k){
        //printf("%c\n",*(cuvant[i]));
        q=0;
        if(tolower(*cuvant[i])=='a' || tolower(*cuvant[i])=='e' || tolower(*cuvant[i])=='i' || tolower(*cuvant[i])=='o' || tolower(*cuvant[i])=='u' || tolower(*(cuvant[i]+strlen(cuvant[i])))=='a' || tolower(*(cuvant[i]+strlen(cuvant[i])))=='e' || tolower(*(cuvant[i]+strlen(cuvant[i])))=='i' || tolower(*(cuvant[i]+strlen(cuvant[i])))=='o' || tolower(*(cuvant[i]+strlen(cuvant[i])))=='u')
          {
              contor++;
          }
    i++;
    }

    printf("\n\nNumarul de cuvinte care rescpecta conditia: %d\n",contor);

   fclose(fp);



    return 0;

}
