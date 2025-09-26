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
    return 0;






}