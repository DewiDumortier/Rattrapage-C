#include <stdio.h>
#include <stdlib.h>

void appel (int* etg)
{
    int nmb;
    printf("A quel etage etes vous ? De -5 a 15. Tapez 100 pour quitter le programme");
    *etg = scanf("%d", &nmb); //retourne la valeur de l'étage dans etg
    if ( *etg < -5 && *etg > 15 && *etg != 100 )
    {
        appel(etg);             //repose la question si les chiffres ne corresspondent pas
    }

}

void deplacements (int *tabAscenseurs, int etgAppel)
{


}

void selection (int *etg)
{
    int nmb;
    printf("Selection etage de destination ? De -5 a 15");
    *etg = scanf("%d", &nmb);   //reçois la valeur de l'étage dans etg
    if (*etg >= -5 && *etg <= 15)
    {
        selection (etg);        //repose la question si les chiffres ne correspondent pas
    }

}

int choixAscenseur (int *tabAscenseurs, int etgAppel)
{


}

void deplacementAscenseur (int *tabAscenseurs, int etgDest, int numAsc)
{
    if (tabAscenseurs[numAsc] > tabAscenseurs[etgDest])
    {
        while (tabAscenseurs[numAsc] != tabAscenseurs[etgDest])
        {
            tabAscenseurs[numAsc] = tabAscenseurs[numAsc]-1;
            printf("Ascenseur n°"%d"- Etage "%d", numAsc, tabAscenseurs[numAsc])
            Sleep(2000);
        }
    }
    else if (tabAscenseurs[numAsc] < tabAscenseurs[etgDest])
    {
        while (tabAscenseurs[numAsc] != tabAscenseurs[etgDest])
        {
            tabAscenseurs[numAsc] = tabAscenseurs[numAsc]+1;
            printf("Ascenseur n°"%d"- Etage "%d", numAsc, tabAscenseurs[numAsc])
            Sleep(2000)
        }
    }





}
