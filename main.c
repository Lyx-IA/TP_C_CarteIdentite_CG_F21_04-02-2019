#include <stdio.h>
#include <stdlib.h>

/**
    i : int             :nVar
    f : float           :flVar
    d : double          :dblVar
    c : char            :cVar
    l : long int        :lnVar
    ll: long long int   :llnVar
    L : double long     :ldblVar
    h : short int       :srVar
    ui: unsigned int    :unVar
    uf: unsigned float  :unfVar
    s : *STRING*
*/




int main()
{

  FILE *P_FICHIER;
  char cNOM_FICHIER[30], cNOM_PERS[30], cPRENOM_PERS[30], cADRESSE_PERS[50];

  int  nCpt,NB_ENREG;

  /* Première partie*/
  printf("Entrez le nom du fichier à créer : ");
  scanf("%s", cNOM_FICHIER);
  P_FICHIER = fopen(cNOM_FICHIER, "w");
  printf("Nombre d'enregistrements à créer : ");
  scanf("%d", &NB_ENREG);
  nCpt = 0;
  while (nCpt<NB_ENREG)
     {
      printf("Entrez le nom de la personne : ");
      scanf("%s", cNOM_PERS);
      fprintf(P_FICHIER, "%s\n", cNOM_PERS);
      printf("Entrez le prénom de la personne : ");
      scanf("%s", cPRENOM_PERS);
      fprintf(P_FICHIER, "%s\n", cPRENOM_PERS);
      nCpt++;
     }

  fclose(P_FICHIER);

  void lireFichier(){

    FILE *pFile;
    char sTemp[255];
    char sTemp2[255];

    if ((pFile = fopen(cNOM_FICHIER,"r"))== NULL){
        perror("ERREUR OUVERTURE/CREATION FICHIER");
    }
    else {
        while(fgets(sTemp,255,pFile)!=NULL){
            strcat(sTemp2,sTemp);
        }
    }

    fclose(pFile);
    printf("%s\n",sTemp2);
}
     {
      fscanf(P_FICHIER, "%s\n", cNOM_PERS);
      printf("NOM : %s\n", cNOM_PERS);
      fscanf(P_FICHIER, "%s\n", cPRENOM_PERS);
      printf("PRENOM : %s\n", cPRENOM_PERS);
      fscanf(P_FICHIER, "%s\n", cADRESSE_PERS);
      printf("NOM : %s\n", cADRESSE_PERS);
      nCpt++;
     }
  fclose(P_FICHIER);
  return 0;
}
