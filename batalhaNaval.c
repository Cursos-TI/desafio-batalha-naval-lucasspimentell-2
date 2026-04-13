#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0char tabuleiro[10][10]= { // Declarando o tamanho da matriz e atribuindo os valores

#define LINHA 10
#define COLUNA 10


int soma = 0;

    int matriz[LINHA][COLUNA];

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
           
            matriz[i][j] = soma; 
            //Horizontalmente
            matriz[6][4] = 3;
            matriz[6][5] = 3;
            matriz[6][6] = 3;

            matriz[8][7] = 3;
            matriz[8][8] = 3;
            matriz[8][9] = 3;

            // diagonal primaria

            if (i==j)
            {
                
                    
                    for (int j = 1; j < 4; j++)
                    {
                        /* code */
                        matriz[i][j] = 3; 
                        
                    }
                
                    
            }
            
            // diagonal secundaria
            
            if (i+j == 9)
            {
                
                    
                    for (int j = 0; j < 3; j++)
                    {
                       
                        matriz[i][j] = 3; 
                        
                    }
                
               
                    
            }

            
            

            
            printf("  %d  ",matriz[i][j]);

        }
        printf("\n");
    }

    printf("Hbilidades:\n");

    printf("CONE : \n");

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = soma; 

            matriz[1][7] = 5;
            matriz[2][7] = 5;
            matriz[3][7] = 5;
            matriz[3][8] = 5;
            matriz[3][6] = 5;
            
            

           



            printf("  %d  ",matriz[i][j]);

        }
        printf("\n");
    }

    printf("CRUZ : \n");

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = soma; 

            matriz[1][2] = 5;
            matriz[2][2] = 5;
            matriz[3][2] = 5;
            matriz[4][2] = 5;
            matriz[2][1] = 5;
            matriz[2][3] = 5;

            printf("  %d  ",matriz[i][j]);

        }
        printf("\n");
    }

    printf("Octaedro : \n");

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = soma; 

            matriz[5][2] = 5;
            matriz[6][2] = 5;
            matriz[7][2] = 5;
            
            matriz[6][1] = 5;
            matriz[6][3] = 5;

            printf("  %d  ",matriz[i][j]);

        }
        printf("\n");
    }

    printf("Escolha uma Hbilidade:\n");

    printf("1 : Cone\n");
    printf("2 : Cruz\n");
    printf("3 : octaedro\n");

    int opcao;
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:

        printf("#### HABILIDADE!!! -  Cone ####\n");

        for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
           
            matriz[i][j] = soma; 

            //Horizontalmente
            matriz[6][4] = 3;
            matriz[6][5] = 3;
            matriz[6][6] = 3;

            matriz[8][7] = 3;
            matriz[8][8] = 3;
            matriz[8][9] = 3;

            // diagonal primaria

            if (i==j)
            {
                
                    
                    for (int j = 1; j < 4; j++)
                    {
                        /* code */
                        matriz[i][j] = 3; 
                        
                    }
                
                    
            }
            
            // diagonal secundaria
            
            if (i+j == 9)
            {
                
                    
                    for (int j = 0; j < 3; j++)
                    {
                       
                        matriz[i][j] = 3; 
                        
                    }
                
               
                    
            }

            matriz[1][7] = 5;
            matriz[2][7] = 5;
            matriz[3][7] = 5;
            matriz[3][8] = 5;
            matriz[3][6] = 5;

            
            

            
            printf("  %d  ",matriz[i][j]);

        }
        printf("\n");
    }
        
        break;

    case 2:

        printf("#### HABILIDADE!!! -  CRUZ ####\n");

        for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
           
            matriz[i][j] = soma; 

            //Horizontalmente
            matriz[6][4] = 3;
            matriz[6][5] = 3;
            matriz[6][6] = 3;

            matriz[8][7] = 3;
            matriz[8][8] = 3;
            matriz[8][9] = 3;

            // diagonal primaria

            if (i==j)
            {
                
                    
                    for (int j = 1; j < 4; j++)
                    {
                        /* code */
                        matriz[i][j] = 3; 
                        
                    }
                
                    
            }
            
            // diagonal secundaria
            
            if (i+j == 9)
            {
                
                    
                    for (int j = 0; j < 3; j++)
                    {
                       
                        matriz[i][j] = 3; 
                        
                    }
                
               
                    
            }

            matriz[1][2] = 5;
            matriz[2][2] = 5;
            matriz[3][2] = 5;
            matriz[4][2] = 5;
            matriz[2][1] = 5;
            matriz[2][3] = 5;

            printf("  %d  ",matriz[i][j]);

        }
        printf("\n");
    }
        printf("\n ACERTOU O NAVIO !!!!");
        break;

    case 3:

        printf("#### HABILIDADE!!! -  OCTAEDRO ####\n");

        for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
           
            matriz[i][j] = soma; 

            //Horizontalmente
            matriz[6][4] = 3;
            matriz[6][5] = 3;
            matriz[6][6] = 3;

            matriz[8][7] = 3;
            matriz[8][8] = 3;
            matriz[8][9] = 3;

            // diagonal primaria

            if (i==j)
            {
                
                    
                    for (int j = 1; j < 4; j++)
                    {
                        /* code */
                        matriz[i][j] = 3; 
                        
                    }
                
                    
            }
            
            // diagonal secundaria
            
            if (i+j == 9)
            {
                
                    
                    for (int j = 0; j < 3; j++)
                    {
                       
                        matriz[i][j] = 3; 
                        
                    }
                
               
                    
            }

            matriz[5][2] = 5;
            matriz[6][2] = 5;
            matriz[7][2] = 5;
            
            matriz[6][1] = 5;
            matriz[6][3] = 5;

            printf("  %d  ",matriz[i][j]);



        }
        printf("\n");
    }
        printf("\n ACERTOU O NAVIO !!!!");
        break;
    
    default:
        break;
    }


    return 0;
}
