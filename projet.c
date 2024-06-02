#include <stdio.h>
#include <string.h>
    
    
  typedef struct {
  	char titre[50];
  	char auteur[50];
  	int nbrPages;
  	float prix;
  }Livre;
  
  
  int main () {
  	 
  	 Livre l[50];
  	 int choix ,i,n;
  	 char a[50];
  	 	
    
  	 do{
  	 	printf("---------------------------------------\n");
  	 	printf("appuyer sur 1 pour ajouter les details des livres .\n");
  	 	printf("appuyer sur 2 pour afficher les details des livres.\n");
  	 	printf("appuyer sur 3 pour afficher le livre de l'auteur donne.\n");
  	 	printf("appuyer sur 4 pour compter le nombre de livres .\n");
  	 	printf("appuyer sur 5 pour sortir.\n");
  	 	printf("----------------------------------------\n");
  	 	printf("saisissez votre choix \n:");
  	 	scanf("%d",&choix);
  	 		switch(choix){
    		case 1 :
    			printf("combien de livre vous souaiter ajouter :");
    			scanf("%d",&n);
    			for(i=0;i<n;i++){
    				printf("-----------------------------------\n");
    				printf("entrer les details du livre num %d: \n",i+1);
    				printf("-----------------------------------\n"); 
    				printf("titre: ");
    				scanf(" %[^ \n]s",&l[i].titre);
    				printf("Auteur :");
    				scanf(" %[^ \n]s",&l[i].auteur);
    				printf("nombre de pages : ");
    				scanf(" %[^ \n]s",&l[i].nbrPages);
    				printf("prix:");
    				scanf(" %[^ \n]s",&l[i].prix);
				}
					printf("-----------------------------------\n"); 
    				break;
    	   	case 2 :
    	   		printf("-----------------------------------\n"); 
    	   		printf("les details du livre : \n");
    			printf("-----------------------------------\n"); 
    		for(i=0;i<n;i++){
    			printf("livre num %d: \n",i+1);
    			printf("titre : %s - Auteur : %s - Nombre de page : %d - Prix: %.2fEuro \n", l[i].titre ,l[i].auteur , l[i].nbrPages ,l[i].prix);
    		}
    	    	break;	
   			case 3 :
   				printf("saisiser le nom de l'auteur:\n");
   				scanf(" %[^ \n]s", &a);
   				printf("-----------------------------------\n"); 
   				for(i=0;i<n;i++){
   					if(strcmp (l[i].auteur,a)==0)
   					  printf(" %s \t %.2f \n",l[i].titre ,l[i].prix);
				   }
				   break;
	    	case 4 :
	    		printf("Nombre totale de livre dans la bibliothèque est :%d \n",n);
	    	    printf("-----------------------------------\n"); 
		 	case 5 : 
		        break;
  }
	   }while(choix!=5);
    
  	return 0;
  }  
  
