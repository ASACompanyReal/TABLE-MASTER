// bibliothèque.h

#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

void printHeader(){
	printf("										 ########    #######   ##    ##        ##   #######   ##     ##  ########  \n");
	printf("										 ##     ##  ##     ##  ###   ##        ##  ##     ##  ##     ##  ##     ## \n");
	printf(" 										 ##     ##  ##     ##  ####  ##        ##  ##     ##  ##     ##  ##     ## \n");
	printf("										 ########   ##     ##  ## ## ##        ##  ##     ##  ##     ##  ########  \n");
	printf(" 										 ##     ##  ##     ##  ##  ####  ##    ##  ##     ##  ##     ##  ##   ##   \n");
	printf("										 ##     ##  ##     ##  ##   ###  ##    ##  ##     ##  ##     ##  ##    ##  \n");
	printf("										 ########    #######   ##    ##   ######    #######    #######   ##     ## \n");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\tP R O J E T   D E   T A B L E \n");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t------------------------------------------- \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t| Cree par Azzouzi Mohamed et Assou Amine | \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t------------------------------------------- \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t------------------------------------------- \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t|       Oriente par Mme Faquir Sanae      | \n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t------------------------------------------- \n");
	

}
void menu()
{
	printf("______________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n \n \n \n");
    printf("\t\t\t\t\t\t\t                      ____________________________________________________________________________  \n ");
	printf("\t\t\t\t\t\t\t                     |                          Que voulez-vous faire ?                           |  \n");
	printf("\t\t\t\t\t\t\t                     |----------------------------------------------------------------------------| \n \n");
    printf("\t\t\t\t\t\t\t                     |       1 . Compter le nombre d'occurrences d'un entier.                     | \n \n");
	printf("\t\t\t\t\t\t\t                     |       2 . Trouver l'element majorant.                                      | \n \n");
	printf("\t\t\t\t\t\t\t                     |       3 . Trouver les rangs des elements.                                  | \n \n");
	printf("\t\t\t\t\t\t\t                     |       4 . Trouver les triplets qui donnent une somme donnee.               | \n \n");
	printf("\t\t\t\t\t\t\t                     |       5 . Trouver les indices des deux nombre qui donnent une somme donnee.| \n \n");
	printf("\t\t\t\t\t\t\t                     |       6 . Quitter le programme.                                            | \n \n");
	printf("\t\t\t\t\t\t\t                     |____________________________________________________________________________| \n \n \n \n ");
	printf("_____________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n \n");
}
void line(){
	
	printf("______________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n ");
	
}

void au_revoir()
{
printf("\n");
printf("				   		######## #### ##    ##    ########  ########    ########  ########   #######   ######   ########     ###    ##     ## ##     ## ######## \n");
printf("				   		##        ##  ###   ##    ##     ## ##          ##     ## ##     ## ##     ## ##    ##  ##     ##   ## ##   ###   ### ###   ### ##       \n");
printf("			   			##        ##  ####  ##    ##     ## ##          ##     ## ##     ## ##     ## ##        ##     ##  ##   ##  #### #### #### #### ##       \n");
printf("			   			######    ##  ## ## ##    ##     ## ######      ########  ########  ##     ## ##   #### ########  ##     ## ## ### ## ## ### ## ######   \n");
printf("			   			##        ##  ##  ####    ##     ## ##          ##        ##   ##   ##     ## ##    ##  ##   ##   ######### ##     ## ##     ## ##       \n");
printf("						##        ##  ##   ###    ##     ## ##          ##        ##    ##  ##     ## ##    ##  ##    ##  ##     ## ##     ## ##     ## ##      \n");
printf("						##       #### ##    ##    ########  ########    ##        ##     ##  #######   ######   ##     ## ##     ## ##     ## ##     ## ######## \n");
}
aucun_nombre()
{
	printf("\n");
	  printf("Il n'y a pas de nombres\n");
}
Aucun_triplet()
{
	printf("\n");
	printf("Aucun triplet ne donne la somme recherchee.\n");
}
entrez_la_taille()
{
	
	printf("\n");
	printf("Veuillez entrez la taille du tableau\n");
}

typing()
{
	printf("\n");
	printf(">>>   ");
}
Choisissez_un_numero_operation()
{
	printf("\n");
	printf("Choisissez un numero pour effectuer une operation\n");
}
Entrez_un_entier_doccurrences()
{
	printf("\n");
	printf("Entrez un entier pour compter son nombre d'occurrences\n");
}
aucun_delement_majorant()
{
	printf("\n");
	    printf("Il n'y a pas d'element majorant dans le tableau.\n");
}
les_rangs_des_element()
{
	printf("\n");
	printf("les rangs des element sont:\n");
}
Entrez_la_somme()
{
	printf("\n");
	printf("Entrez la somme\n");
}
entrer_un_nombre_entre_1_et_6()
{
	printf("\n");
	printf("Choix invalide. Veuillez entrer un nombre entre 1 et 6.\n");
}
quittez_repetez()
{
	printf("\n");
	printf("tapez N si vous voulez quitter et autre pour repeter\n");
}

style1()
{
	printf("+--------+");
}
style2()
{
	printf("--------+");
}
Cellules()
{
	printf("|Cellules|");
}
Valeurs()
{
	printf("|Valeurs |");
}
chose_mode()
{
	printf("\t\t\t\t\t\t\t                                      +----------------------------------+\n ");
	printf("\t\t\t\t\t\t\t                                      |          Choisir un mode         | \n");
	printf("\t\t\t\t\t\t\t                                      +----------------------------------+\n \n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t1. Mode sombre\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t2. Mode clair\n");
}
invalid_mode()
{
	printf("\t\t\t\t\t\t\t\t\t\t\t    Invalid choice. Please choose again.\n");
	printf("\t\t\t\t\t\t\t                                      +----------------------------------+\n ");
	printf("\t\t\t\t\t\t\t                                      |          Choisir un mode         | \n");
	printf("\t\t\t\t\t\t\t                                      +----------------------------------+\n \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t1. Dark mode\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t2. light mode\n");
}
int myFunction(int a, int b);
#endif
