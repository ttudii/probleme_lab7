#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){


   FILE *fp;
   int i,j,k,q;
   //char cuvant[10][60];

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

   i=0;

   while(i<strlen(str)){
            if(isalpha(*(str+i)))
               *(str+i)=*(str+i)+1;

    i++;
   }

   puts(str);



   fclose(fp);



    return 0;

}
