#include <stdio.h>
#include <stdlib.h>
typedef struct  {
    int numero;
    float taille,poids;
    char sexe;
    }personne;


int main()
{

 personne pers1,pers2;

  printf("donner  numero de la personne 1 : ");
    scanf("%d",&pers1.numero);
    printf("donner  la taille de la personne 1 : ");
    scanf("%f",&pers1.taille);
    printf("donner le poid de la personne 1 : ");
    scanf("%f",&pers1.poids);
    printf("donner le sexe de la personne 1 : ");
    scanf("%c",&pers1.sexe);


printf("=================================================");
    printf("information de la personne 1 : \n");
    printf("==============================================\n");
    printf("numero : %d \n",pers1.numero);
    printf("------------------------------\n");
    printf("taille : %f \n",pers1.taille);
    printf("------------------------------\n");
     printf(" poids : %f \n",pers1.poids);
    printf("------------------------------\n");
    printf(" sexe : %c \n",pers1.sexe);
    printf("------------------------------\n");


    return 0;
}
