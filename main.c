#include <stdio.h>
#include <stdlib.h>
//definition de a taille maximale des matrices 
#define MAX_SIZE 10

int main() {
    //---etape1 : declaration des variables---
    //declaratin des trois matrices (taille MAX_SIZE * MAX_SIZE)
    int matriceA[MAX_SIZE][MAX_SIZE];
    int matriceB[MAX_SIZE][MAX_SIZE];
    int matriceC[MAX_SIZE][MAX_SIZE];
    //variables pour stocker les dimensions reelles saisies par l'utilisateur
    int lignes,colonnes; 
    //variables pour les indices de boucle
    int  i,j;
    //---etape2 : saisie des dimensions---
    printf("---Programme d'addition de deux matrices---\n");
    //saisie du nbre de lignes et de colonnes
    printf("Entrez le nobre de lignes (max %d):"MAX_SIZE);
    scanf("%d", &lignes);
    printf("Entrez le nbre de colonnes(max %d):"MAX_SIZE);
    scanf("%d", &colonnes);
    //verification simple des dimension pour assurer la validite 
    if(lignes > MAX_SIZE || colonnes > MAX_SIZE || lignes <=0 || colonnes <=0){
        printf("Erreur,les dimensions doivent etre comprise entre 1 et %d.\n",MAX_SIZE);
        return 1;//termine le programme avec une erreur 
    }
    //---etape 3 : remplissage des matrices---
    printf("\n---Remplissage de la matrice A---\n");
    for (i=0; i<lignes; i++){
        for(j=0; j<colonnes; j++){
            printf("Entrer l'element A[%d][%d] : ", i, j);
            scanf("%d", &matriceA[i][j]);
        
        }
    }
    printf("\n---Remplissage de la matrice B---\n")
    for(i=0; i<lignes; i++){
        for(j=0; j<colonnes; i++){
            printf("Entrer l'element B[%d][%d] : ", i, j);
            scanf("%d", &matriceB[i][j]);
            }
    }
    //---etape 4 : calcul du resultat---
    //La boucle parcourt tous les l'element de la matrice
    for(i=0; i<lignes; i++){
        for(j=0; j<colonnes; j++){
            matriceC[i][j] = matriceA[i][j] + matriceB[i][j]
        }
    } 
    //---etape 5 : Affichage du resultat ---
    printf("\n---Resultat de laddition (A + B)---\n");
    for(i=0; i<lignes; i++){
        for(j=0; j<colonnes; j++){
            //affichage de l'element suivi d'un espace pour une mise en forme
            printf("%4d", matriceC[i][j]);
        }
        //saut de ligne apres chaque ligne de la matrice pour la mise en page
        printf("\n");
    }
    //RECHERCHE SEQUENTIELLE DANS UN TABLEAU
    //---etape 1 :initialisation et declaration des variables---
    // 1. declarattion et initialsation du tableau 
    int tableau[] = {22, 10, 5, 8, 17, 30};
    // 2. calcul ou definition de la taille du tableau (nbre d'elements)
    //sizeof(tableau) donne la taille en octets du tableau
    //sizeof(tableau[0]) donne la taille en octets d'un element du tableau
    //la division des deux donne le nbre d'elements dans le tableau
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    // 3. declaration des variables de controle 
    int Recherche; //l'element a rechercher saiasi par l'utilisateur
    int trouve = 0; //flag pour indiquer si l'element a ete trouve (0=non, 1=oui)
    int index = -1; //l'indice ou l'element a ete trouve (-1 est la valur initiale par convention)
    int i; //variable pour les boucles
    printf("---Programme de recherche sequentielle dans un tableau---\n");
    //Affichage du tableau pour reference
    printf("Tableau : {");
    for(i=0; i<taille; i++){
        printf("%d", tableau[i]);
        if(i < taille -1){
            printf(", "); //ajoute une virgule entre les elements sauf apres le dernier
        }
    }
    printf("}\n");
    //---etape 2 : saisie de l'element a rechercher---
    printf("\nEntrez l valeur que vous souhaiter rechercher dans le tableau :\n");
    scanf("%d", &Recherche);
    //---etape 3 : execution de la recherche sequentielle---
    printf("\n---Debut de la recherche ---\n");
    for(i=0; i<taille; i++){
        if(tableau[i] == Recherche){
            trouve = 1; //met a jour le flag pour indiquer que l'element a ete trouve
            index = i; //enregistre l'indice ou l'element a ete trouve
            break; //sort de la boucle car l'element a ete trouve
        }
    }
    //---etape 4 : affichage du resultat de la recherche---
    printf("Fin de la recherche .\n");
    if(trouve==1){
        //la condition est vrai lelement a ete trouve 
        printf("\nREesultat : lelement %d a ete trouve a l'indice %d du tableau.\n", Recherche, index);
    } else {
        //la condition est fausse l'element n'a pas ete trouve
        printf("\nResultat : lelement %d n'a pas ete trouve dans le tableau.\n", Recherche);
    }
    return 0;
}