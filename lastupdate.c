#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include"style.h"
#define max 30
//Azzouzi mohammed et Assou Amine

int scan() {
   int nombre;
   while(scanf("%d", &nombre) != 1) {
   	printf("\n");
      printf("Erreur : veuillez entrer un nombre entier valide.\n");
      while(getchar() != '\n'); // Vider le tampon d'entrée
      printf("Entrez un nombre entier : ");
   }
   return (nombre);
}
// Fonction qui compte le nombre d'occurrences d'un entier donné dans un tableau
int compte_occurrences(int tableau[], int taille, int entier) {
    int compteur = 0, i;
    for (i = 0; i < taille; i++) {
        if (tableau[i] == entier) {
            compteur++;
        }
    }
    return compteur;
}

// Fonction qui trouve l'élément majorant dans un tableau, s'il existe
int trouve_majorant(int tableau[], int taille) {
    int majorant = -1, i;  // valeur par défaut si aucun élément majorant n'est trouvé
    for (i = 0; i < taille; i++) {
        int compteur = compte_occurrences(tableau, taille, tableau[i]);
        if (compteur > taille/2) {
            majorant = tableau[i];
            break;
        }
    }
    return majorant;
}

// Procedure qui trouve le rang de chaque element du tableau
void trouve_rang(int tableau[], int n, int rang[]) {
    int i, j, compteur;

    for (i = 0; i < n; i++) {
        compteur = 0;
        for (j = 0; j < n; j++) {
            if (i != j && tableau[j] < tableau[i]) {
                compteur++;
            }
        }
        if (compteur >= n || compteur < 0) {
            rang[i] = -1; // indefini
        } else {
            rang[i] = compteur;
        }
    }
}

// Trouver le triplet
bool trouver_triplet(int tableau[], int taille, int somme) {
    int i, j, k,o=1;
    bool triplet_trouve = false;

    for (i = 0; i < taille - 2; i++) {
        for (j = i + 1; j < taille - 1; j++) {
            for (k = j + 1; k < taille; k++) {
                if (tableau[i] + tableau[j] + tableau[k] == somme) {
                	printf("\n");
                    printf("Le triplet numero %d : %d %d %d\n",o, tableau[i], tableau[j], tableau[k]);
                    triplet_trouve = true;
                    o++;
                }
            }
        }
    }

    if (!triplet_trouve) {
        Aucun_triplet();
    }

    return triplet_trouve;
}
// l'indice des deux nnombre
void indicesSomme(int tableau[], int taille, int somme) {
    int i, j;
    int found = 0; // Flag to track if any solutions were found
    for (i = 0; i < taille; i++) {
        for (j = i + 1; j < taille; j++) {
            if (tableau[i] + tableau[j] == somme) {
            	printf("\n");
                printf("Les indices des deux nombres sont : %d et %d\n", i, j);
                found = 1;
            }
        }
    }
    if (!found) {
      aucun_nombre();
    }
}



void afficher_matrice(int tableau[], int taille)
{	int i,j;
		printf("\nVoici votre tableau:\n");;
    style1();
    for (j = 0; j < taille; j++) {
        style2();
    }
    printf("\n");

    Cellules();
    for (j = 0; j < taille; j++) {
        printf("%7d |", j);
    }
    printf("\n");

    style1();
    for (j = 0; j < taille; j++) {
        style2();
    }
    printf("\n");

    Valeurs();
    for (j = 0; j < taille; j++) {
        printf("%7d |", tableau[j]);
    }
    printf("\n");

    style1();
    for (j = 0; j < taille; j++) {
        style2();
    }
    printf("\n");
}



void main() {
	
	int mode;
	chose_mode();
	typing();
    mode=scan();
	while (mode != 1 && mode != 2) {
       invalid_mode();
        mode=scan();
    }
    
    ////////////////////////////////////////////////dark mode////////////////////////////////////////////////////
        if (mode == 1) {
        	system("cls");
	printHeader();
    int taille, somme, choix;
    printf("\n");
	line(); 
   entrez_la_taille();
	line(); 
	typing();
	taille=scan();
	line();
	printf("\n");
    printf("Vous avez entrez la valeur %d \n",taille);
	line();
  char repeter='O';
    int tableau[taille], i,j;
    for (i = 0; i < taille; i++) {
    	printf("\n");
        printf("Entrez la valeur de la cellule %d\n", i);
        typing();
        tableau[i]=scan();
    }
    // une boucle jusqu'a l'utilisateur veut quitter
    
    do {
    	system("cls");
    	afficher_matrice(tableau, taille);
    	menu();
    	Choisissez_un_numero_operation();
    	typing();
        choix=scan();
		int entier, majorant = trouve_majorant(tableau, taille), rang[taille];
        switch (choix) {
            case 1:
            
                Entrez_un_entier_doccurrences();
                typing();
               	entier=scan();
                int occurrences = compte_occurrences(tableau, taille, entier);
                printf("\n");
                printf("Le nombre d'occurrences de %d dans le tableau est : %d\n", entier, occurrences);
                break;
            case 2:
                
                if (majorant == -1) {
                    aucun_delement_majorant();
                } else {
                	printf("\n");
                    printf("L'element majorant dans le tableau est : %d\n", majorant);
                }
                break;
            case 3:
                
                trouve_rang(tableau, taille, rang);
                les_rangs_des_element();
                for (i = 0; i < taille; i++) {
                    if (rang[i] == -1) {
                    	printf("\n");
                        printf("%d est indefins\n", tableau[i]);
                    } else {
                    	printf("\n");
                        printf("le rang de %d est %d\n", tableau[i], rang[i]);
                    }
                }
                break;
            case 4:
                Entrez_la_somme();
                typing();
                somme=scan();
                trouver_triplet(tableau, taille, somme);
                break;
            case 5:
				Entrez_la_somme();
                typing();
                somme=scan();
                indicesSomme(tableau, taille, somme);
                printf("\n");
                break;
            case 6:
				line();
				printf("\n");
				au_revoir();
                exit(0);
            default:
                entrer_un_nombre_entre_1_et_6();
        }
        
        getchar();
        printf("\n");
       	quittez_repetez();
       	typing();
        repeter=getchar();
    } while (toupper(repeter)!='N');
    line();
    printf("\n");
    au_revoir();
}

    ////////////////////////////////////////////////light mode////////////////////////////////////////////////////
else if (mode == 2) {
	system("cls");
	system("color f0");
        printHeader();
    int taille, somme, choix;
    printf("\n");
	line(); 
   entrez_la_taille();
	line(); 
	typing();
	scanf("%d", &taille);
	line();
	printf("\n");
    printf("Vous avez entrez la valeur %d \n",taille);
	line();
  char repeter;
    int tableau[taille], i,j;
    for (i = 0; i < taille; i++) {
    	printf("\n");
        printf("Entrez la valeur de la cellule %d\n", i);
        typing();
        scanf("%d", &tableau[i]);
    }
    // une boucle jusqu'a l'utilisateur veut quitter
    
    do {
    	system("cls");
    	afficher_matrice(tableau, taille);
    	menu();
    	Choisissez_un_numero_operation();
    	typing();
        choix=scan();
		int entier, majorant = trouve_majorant(tableau, taille), rang[taille];
        switch (choix) {
            case 1:
            
                Entrez_un_entier_doccurrences();
                typing();
                entier=scan();
                int occurrences = compte_occurrences(tableau, taille, entier);
                printf("\n");
                printf("Le nombre d'occurrences de %d dans le tableau est : %d\n", entier, occurrences);
                break;
            case 2:
                
                if (majorant == -1) {
                    aucun_delement_majorant();
                } else {
                	printf("\n");
                    printf("L'element majorant dans le tableau est : %d\n", majorant);
                }
                break;
            case 3:
                
                trouve_rang(tableau, taille, rang);
                les_rangs_des_element();
                for (i = 0; i < taille; i++) {
                    if (rang[i] == -1) {
                    	printf("\n");
                        printf("%d est indefins\n", tableau[i]);
                    } else {
                    	printf("\n");
                        printf("le rang de %d est %d\n", tableau[i], rang[i]);
                    }
                }
                break;
            case 4:
                Entrez_la_somme();
                typing();
                somme=scan();
                trouver_triplet(tableau, taille, somme);
                break;
            case 5:
				Entrez_la_somme();
                typing();
                somme=scan();
                indicesSomme(tableau, taille, somme);
                printf("\n");
                break;
            case 6:
				line();
				printf("\n");
				au_revoir();
                exit(0);
            default:
                entrer_un_nombre_entre_1_et_6();
        }
        
        getchar();
        printf("\n");
       	quittez_repetez();
       	typing();
        repeter=getchar();
    } while (toupper(repeter)!='N');
    line();
    printf("\n");
    au_revoir();
}
}
//////////////////////////////////////////////////////////////////////////////////////////////
