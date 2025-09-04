#include <stdio.h>
#include <string.h>
int main() {
    int n ;
    char title[20][50];
    char auteur[20][50];
    float prix[50];
    int quantite[50];
    int i ,choix , temp = 0;
    int index_del;
    char arr[50];
    do {
        printf("\n===== MENU =====\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("0. Quitter\n");
        printf("=================\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch (choix)
        {
            // . . .
            case 1:
            printf("Combien de livres voulez-vous ajouter ? ");
            scanf(" %d", &n);
            for (i = 0; i < n; i++){   
                printf("Titre du livre %d : ",i+1);
                scanf("%s",title[i]); // %[^\n]
                printf("L'auteur du livre %d : ",i+1);
                scanf("%s",auteur[i]); // %[^\n]
                printf("Prix du livre %d : ",i+1);
                scanf("%f",&prix[i]); // %[^\n]
                printf("Quantite en stock %d : ",i+1);
                scanf("%d",&quantite[i]); // %[^\n]
                //getchar(); // Clear buffer after scanf
            }
            temp += n ;
            printf("%d livre(s) ajoutÃ©(s) avec succes!\n", n);
            break;

            case 2:
            if(temp == 0)
                printf("there is no book in stock");
            else {
                for(i=0 ; i<temp ; i++){
                    printf("Titre %d : %s\n",i+1,title[i]);
                    printf("Auteur %d : %s\n",i+1,auteur[i]);
                    printf("Prix %d : %f\n",i+1,prix[i]);
                    printf("Quantite %d : %d\n",i+1,quantite[i]);
                }
            }
            break;
            case 3:
            if(temp == 0)
            printf("already 0 book in stock");
            else {
                printf("enter number of the element you want to delete : \n");
                scanf("%d",&index_del);
                for(int p = index_del - 1 ; p < temp - 1 ; p++){
                    strcpy(title[p], title[p + 1]);
                    strcpy(auteur[p], auteur[p + 1]);
                    prix[p] = prix[p+1] ;
                    quantite[p] = quantite[p+1];
                }
                temp--;
                }
            break;
            case 4:
            if(temp == 0)
            printf("there is no book");
            else {
            printf("enter Title of book that you wanted to change ");
            scanf(" %s", &arr);
            for (i = 0; i < temp; i++){   
                if(strcmp(title[i] , arr)==0){
                printf("nouveau title %d : ",i+1);
                scanf("%s",title[i]); // %[^\n]
                printf("nouveau auteur %d : ",i+1);
                scanf("%s",auteur[i]); // %[^\n]
                printf("nouveau prix %d : ",i+1);
                scanf("%f",&prix[i]); // %[^\n]
                printf("nouveau quantite %d : ",i+1);
                scanf("%d",&quantite[i]); // %[^\n]
                //getchar(); // Clear buffer after scanf
                }
            }
            }
            break;
            case 5:
                printf("affichage.\n");
            break;
            case 0:
                printf("Fin du programme.\n");
            break;
            
            default:
            printf("Choix invalide.\n");
        // statements executed if expression does not equal
        // any case constant_expression
    }
    
}while(choix!=0);

return 0;
}

