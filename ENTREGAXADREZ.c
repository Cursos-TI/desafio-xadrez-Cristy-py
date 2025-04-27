#include <stdio.h>




//CRIANDO VOID PARA TORRE 





   void moverTorre (int casas) {
    if (casas > 0) {
     printf(" #TORRE# DIREITA :%d CASAS\n", casas);
    moverTorre (casas -1);
    }
    }  // FINAL VOID TORRE

int main (){


 

// INSERIR VARIAVEIS

int BISPO, TORRE, RAINHA, CAVALO;
int menu;

printf("   MENU   \n");
printf("Escolha Uma Peca :\n");
printf("1. BISPO\n");
printf("2. TORRE\n");
printf("3. RAINHA\n");
printf("4. CAVALO\n");
scanf("%d", &menu);


// MENU SWITCH PARA ESCOLHA DE PECAS



BISPO = 1;
CAVALO = 1;

switch (menu)
{

    case 1: // INICIO BISPO

    printf("Voce Escolheu #BISPO#\n");
    printf("\n");
    
    while ( BISPO <= 5)
    {
        printf("#BISPO# FRENTE |DIAGONAL| :%d CASAS.\n", BISPO);
        
        BISPO ++;
        
        
    } 

    break; // FIM DO WHILE BISPO 


    
    case 2 : // INICIO BISPO COM VOID 
    

    printf("MOVIMENTO TORRE\n");
    moverTorre (5);
   
    break; // FIM VOOID TORRE




    case 3: // INICIO RAINHA COM FOR
    printf("Voce Escolheu #RAINHA#\n");

    for ( int RAINHA = 1; RAINHA <= 8; RAINHA++ )
    {
        printf("#RAINHA# |ESQUERDA|: %d CASAS.\n", RAINHA);
    }

    break; // FIM RAINHA 
   


    case 4: // INICIO CAVALO  WHILE E FOR 

    printf("Voce Escolheu #CAVALO#\n");

    while (CAVALO --)
    {
       for (int c = 0; c <2; c++){
           printf("#CAVALO# |CIMA|\n"); 
       }
           printf("#CAVALO# |ESQUERDA|\n");
    }

    break; // FIM CAVALO 
   


default: printf("OPCAO INVALIDA\n");
        
    break;
}














    return 0;
}