#include <stdio.h>
//#define MAX 2
int main() {
    int n = 0 ;
    char title[20][50];
    char auteur[20][50];
    float prix[50];
    int quantite[50];
    int i ,choix;
    printf("\n===== MENU =====\n");
    printf("2. Afficher tous les livres disponibles\n");
    printf("3. Rechercher un livre par son titre\n");
    printf("4. Mettre a jour la quantite d'un livre\n");
    printf("5. Supprimer un livre du stock\n");
    printf("6. Afficher le nombre total de livres en stock\n");
    printf("0. Quitter\n");
    printf("=================\n");
    printf("Votre choix : ");
    scanf("%d",&choix);
    switch ( choix )
    {
    // . . .
    case 1:
    printf("Saisir le nombre des livres : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++){   
        printf("Titre du livre %d : ",i+1);
        scanf("%s",&title[i]); // %[^\n]
        printf("L'auteur du livre %d : ",i+1);
        scanf("%s",&auteur[i]); // %[^\n]
        printf("Prix du livre %d : ",i+1);
        scanf("%f",&prix[i]); // %[^\n]
        printf("Quantite en stock %d : ",i+1);
        scanf("%d",&quantite[i]); // %[^\n]
        
    }
        break;
    case 2:
    if(n == 0)
    printf("there is no book in stock");
    else
    for(i=0 ; i<n ; i++){
        printf("Titre %d : %d\n",i+1,title[i]);
        printf("Auteur %d : %d\n",i+1,auteur[i]);
        printf("Prix %d : %d\n",i+1,prix[i]);
        printf("Quantite %d : %d\n",i+1,quantite[i]);
    }
        break;
    default:
        // statements executed if expression does not equal
        // any case constant_expression
    }
    
    
    for (i = 0; i < n; i++)
    {
        

    }
    
    
    /*printf("Veauillez saisir les infos de votre Livre.\n");
    printf("Titre du livre : ");
    scanf("%s",&title);
    printf("Auteur du livre : ");
    scanf("%s",&auteur);
    printf("Prix du livre : ");
    scanf("%f",&prix);
    printf("Quantite en stock : ");
    scanf("%d",&quantite);
    //printf("\nl'auteur est %s",auteur);*/

    return 0;
}

