
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>


 

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Consuma il buffer di input
}

char nuova_partita(char scelta){
    char nomeu[10]={'\0'};
    int risposta, punti = 0;
    
    
    printf("Come ti chiami?\n");
    clear_input_buffer();
    fgets(nomeu, sizeof(nomeu), stdin);
    
    printf("Ciao %s!Per rispondere ad ogni domanda seleziona il numero corrispondente a quella che pensi sia la risposta esatta!\n", nomeu);
    clear_input_buffer();
    do{
    printf("Capitale d'Italia? \n1)Roma\n2)Catanzaro\n3)Prato\n4)Calvizzano\n");
    scanf("%d", &risposta);
    }while(risposta < 0 && risposta < 5);
    
    
    if(risposta==1){
        punti = punti + 1;
        printf("\n\nCorretto\n\n");
    }else{ 
        printf("\n\nSbagliato!\n\n");
    }
    clear_input_buffer();
    clear_input_buffer();
    
    do{
    printf("Dove si trova Bologna? \n1)Campania\n2)Lazio\n3)Emilia Romagna\n4)Lombardia\n");
    scanf("%d", &risposta);
    }while(risposta < 0 && risposta < 5);
    
    
    if(risposta==3){
        punti = punti + 1;
        printf("\n\nCorretto\n\n");
    }else{ 
        printf("\n\nSbagliato!\n\n");
    }
    clear_input_buffer();
    clear_input_buffer();
    
    
    do{
    printf("Quale di queste regioni attraversa il Po'? \n1)Sicilia\n2)Marche\n3)Piemonte\n4)Puglia\n");
    scanf("%d", &risposta);
    }while(risposta < 0 && risposta < 5);
    
    
    if(risposta==3){
        punti = punti + 1;
        printf("\n\nCorretto!\n\n");
    }else{ 
        printf("\n\nSbagliato!\n\n");
    }
    clear_input_buffer();
    clear_input_buffer();
    
    printf("Ok %s , hai totalizzato %d punti!\n", nomeu,punti);
    
    if(punti==3){
        printf("Perfetto!\n");
    }else if (punti==2){
        printf("Molto bene! Ne hai sbagliata solo una!\n");
    }else if (punti==1){
        printf("Peccato, ne hai beccata solo una!\n");
    }else{
        printf("Tutte le risposte sono sbagliate!\n");
    }
    
    punti = 0;
    
    clear_input_buffer();
    printf("Giochi ancora?\na)Si, voglio continuare!\nb)Termina partita!\n");
    scanf("%c",&scelta);
    
    if(scelta =='a'){
            
        nuova_partita(scelta);
        
            
            
    }else if(scelta =='b'){
        printf("Gioco Terminato!\n");
        exit(1);
    }
}

char menu(char scelta){
        
        printf("Benvenuto al quiz di Epicode! Dovrai rispondere a 3 domande, per ogni risposta corretta avrai un punto altrimenti 0!Buona fortuna!");
        printf("Scegli tra: \n A)INIZIA UNA NUOVA PARTITA \n B)TERMINA PARTITA\n");
        scanf("%c", &scelta);
        scelta = tolower(scelta);
        clear_input_buffer();
        if(scelta =='a'){
            
            nuova_partita(scelta);
            
            
        }else if(scelta =='b'){
            printf("Gioco Terminato!\n");
            exit(1);
        }
        
} 

int main(){

    char scelta;
    do{
        menu(scelta);
        
    }while(scelta != 'a' && scelta != 'b');

    
      

    return 0;
}




