#include <stdio.h>

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

    printf("\nFinished Algorithm!!! \n");

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void A(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("Enter value for row %d, column %d: ", i, j);
            scanf("%d", &to_input);
            matrix[i][j] = to_input;
        }
    }

    printf("\nFinished Reading!!! \n");

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    Floyd_Warshall();
}

void B(int first_index, int second_index){
    int item_to_check = matrix[first_index][second_index];
    int bigger_than_zero = item_to_check > 0;
    int smaller_than_infinity = item_to_check < 1000000;

    int to_return = ((bigger_than_zero) && (smaller_than_infinity)) ? 1 : 0;
    printf("\n%d\n",to_return);
}

void C(int first_index, int second_index){
    int item_to_check = matrix[first_index][second_index];
    int bigger_than_zero = item_to_check > 0;
    int smaller_than_infinity = item_to_check < 1000000;

    int to_return = ((bigger_than_zero) && (smaller_than_infinity)) ? item_to_check : -1;
    printf("\n%d\n",to_return);
}
