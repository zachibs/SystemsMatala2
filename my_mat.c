#include <stdio.h>

int matrix[4][4];
int to_input;

int min(int first, int second){

    return (first > second) ? second : first;
}

void Floyd_Warshall(){
    for (int k = 0; k < 4; k++){
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
                matrix[i][j] = min(matrix[i][j], (matrix[i][k] + matrix[k][j]));
            }
        }
    }

    printf("\nFinished Algorithm!!! \n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void A(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Enter value for row %d, column %d: ", i, j);
            scanf("%d", &to_input);
            matrix[i][j] = to_input;
        }
    }

    printf("\nFinished Reading!!! \n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    Floyd_Warshall();
}

int B(int first_index, int second_index){
    return ((matrix[first_index][second_index] > 0) && (matrix[first_index][second_index] < INFINITY)) ? 1 : 0;
}
