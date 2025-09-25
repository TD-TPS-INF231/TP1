#include <stdio.h>
#include <stdlib.h>

/*void Vecteur_Matrice(int, int, int);*/

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
    int choix, b, c, d;
    int vecteur[d], matrice[b][c];
    do
    {
        printf("--Menu--\n");
        printf("9.projet 9\n");
        printf("0.quitter\n");
        printf("entrer votre choix\n");
        scanf("%d", &choix);
        switch (choix)
        {
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
