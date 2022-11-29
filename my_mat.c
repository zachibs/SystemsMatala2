#include <stdio.h>
#include <stdlib.h>
#define max 999999999

int matrix[10][10];
int to_input;

int min(int first, int second){

    return (first > second) ? second : first;
}

void Floyd_Warshall(){
    for (int k = 0; k < 10; k++){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                matrix[i][j] = min(matrix[i][j], (matrix[i][k] + matrix[k][j]));
            }
        }
    }
}

void A(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf("%d", &to_input);
            matrix[i][j] = to_input;

            if(i !=j && to_input == 0)
            {
                matrix[i][j] = max;
            }
        }
    }
    Floyd_Warshall();
}

void B(int first_index, int second_index){
    if (matrix[first_index][second_index] == 0 || matrix[first_index][second_index] == max)
    {
        printf("\nFalse");
    }
    else
    {
        printf ("\nTrue");
    }    
    
}

void C(int first_index, int second_index){
   if (matrix[first_index][second_index] == 0 || matrix[first_index][second_index] == max)
    {
        printf("\n-1");
    }
    else
    {
        printf ("\n%d", matrix[first_index][second_index]);
    } 
}

void D(){
    exit(0);
}