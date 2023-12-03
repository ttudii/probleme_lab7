#include <stdio.h>
#include <string.h>

int main(){

    char sir1[30];
    char sir2[30];

    scanf("%s%s",sir1,sir2);


    char *poz;

    poz=strstr(sir2,sir1);

    if(strstr(sir2,sir1) && poz!=sir2)
        printf("\n\ncuvantul %s este sufix al cuvantului %s.\n", sir1, sir2);
    else
        printf("\n\ncuvantul %s nu este sufix al cuvantului %s.\n",sir1,sir2);

    return 0;

}
