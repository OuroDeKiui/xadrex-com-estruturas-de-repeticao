#include <stdio.h>

//Funçaõ da movimentação da torre
void torre(int movT){
    if(movT == 0) return;
    printf("direita\n");
    torre(movT - 1);
} 

//Função movimentação Rainha
void rainha(int movR){
    if(movR == 0) return;
    printf("Esquerda\n");
    rainha(movR - 1);
}

//Função movimentação bispo
void bispo(int movB){
    if(movB == 0)  return;
    printf("Direita\n");
    bispo(movB - 1);
}



int main(){

    //Declaração de variavel
    int escolha;
    int timer = 3;
    int resp;

    //Saudação
    printf(">>> BEM-VINDO À DEMOSTRAÇÃO DE MOVIMENTO DAS PEÇAS NO XADREZ <<< \n \n");

    //Menu de interação de escolha
    printf("1. Bispo \n");
    printf("2. Rainha \n");
    printf("3. Torre \n");
    printf("4. Cavalo \n \n");

    //Pedir ao usuario para fazer uma escolha e recebe-la
    printf("Escolha uma peça para visualizar sua movimentação no tabuleiro! \n");
    scanf("%d", &escolha);
    printf("------------------------------------- \n \n");

    //Lógica da escolha 
    switch(escolha){
        case 1:{
            printf("*** Movimentação do Bispo *** \n \n"); //Bispo
            
            //Contagem para o inicio da demostração
            for(timer = 3; timer >= 1; timer--){
                printf(" Iniciando %d...\n", timer);
            }
            printf("\n \n"); //Apenas para criar linhas entre o timer e a demostração            
            
            for(int i = 1; i <=5; i++){
                printf("Cima\n");
                bispo(1);
           }

            //Explicação da movimentação do Bispo
            
            printf("\n"); //Apenas para criar linhas
            printf("O bispo se move somente na diagonal \n \n");
        }
        break;

        case 2: //Escolha Rainha
            printf("*** Movimentação do Rainha *** \n \n");
            
            //Demostração Rainha            
            rainha(8);
            
            //Explicação da movimentação da Rainha
            printf("\n \nA Rainha se movimenta em todas as direções\n");
        break;
        
        case 3: //Escolha Torre
            
            //Demonstração  da Torre
            torre(5);


        break;

        case 4: //Movimentação cavalo

        printf("*** Movimentação do cavalo ***\n \n");

        //Declaração da variavel de repetição while
        int i = 1;
        
        //Exemplo da movimentação do cavalo
        while(i <=1){
            for(int j = 0, k = 2; j < k; j++){
                printf("Cima\n");
            }
            printf("Direita\n");
            i++;
        }
    

        //Explicação da movimentação do cavalo
        printf("\nO cavalo se movimenta em L\n");
    }
}