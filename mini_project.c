#include <stdio.h>
int main() {
    int n ;
    char title[20][50];
    char auteur[20][50];
    float prix[50];
    int quantite[50];
    int i ,choix , temp = 0;
    
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
            printf("%d livre(s) ajouté(s) avec succes!\n", n);
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

