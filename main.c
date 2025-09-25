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

void Produit_vectoriel(int u, int pvecteur[u]){
    int i = 0;
    int m;
    printf("entrer le nombre de vecteur : ");
    scanf("%d", &m);
    for (i = 0; i <= m; i++){
        printf("entrer la taille du vecteur : ");
        scanf("%d", &u);
        printf("entrer le vecteur : ");
        scanf("%d", &pvecteur[u]);
        pvecteur[u] =   pvecteur[u]*pvecteur[u] ;
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
    int choix, b, c, d, t, u;
    int vecteur[d], matrice[b][c], tab[t], pvecteur[u];
    do
    {
        printf("--Menu--\n");
        printf("6.projet 6\n");
        printf("8.projet 8\n");
        printf("9.projet 9\n");
        printf("0.quitter\n");
        printf("entrer votre choix\n");
        scanf("%d", &choix);
        switch (choix)
        {
        case 6:
        Median(t, tab[t]);
        case 8 :
        Produit_vectoriel(u, pvecteur[u]);
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
