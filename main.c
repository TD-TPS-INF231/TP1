#include <stdio.h>
#include <stdlib.h>

void Median(int t, int tab[t]){
    int median, median1, median2;
    printf("entrer la taille du tableau : ");
    scanf("%d", &t);
    printf("entrer le tableau\n");
    scanf("%d", &tab[t]);
    if(t % 2 == 0){
        printf("le median est : ");
        median1 = tab[t/2]-1;
        median2 = tab[t/2];
    }
    else{
        printf("le median est : ");
        median = tab[t/2];
    }
}

void Vecteur_Matrice(int n, int vecteur[n], int j, int i, int matrice[i][j])
{
   printf("entrer la taille du vecteur\n");
   scanf("%d", &n);
   printf("entrer les tailles de la matrice");
   scanf("%d %d", &i, &j);
    if (j != n)
    {
        printf("impossible de faire ce produits\n.");
    }
    else
    {
         printf("entrer le vecteur : ");
    scanf("%d", &vecteur[n]);
    printf("entrer la matrice : ");
    scanf("%d", &matrice[i][j]);
       vecteur[n]*matrice[i][j];
    }
}

int main()
{
    int choix, b, c, d, t;
    int vecteur[d], matrice[b][c], tab[t];
    do
    {
        printf("--Menu--\n");
        printf("6.projet 6\n");
        printf("9.projet 9\n");
        printf("0.quitter\n");
        printf("entrer votre choix\n");
        scanf("%d", &choix);
        switch (choix)
        {
        case 6:
        Median(t, tab[t]);
        case 9:
            Vecteur_Matrice(d, vecteur[d], b, c, matrice[b][c] );
             break;

        default:
            printf("choix non disponible\n");
             break;
        }
         }
        while (choix !=0);
   
    return 0;
}
