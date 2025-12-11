    #include <stdio.h>
    void swap_rows(int matrix[][500], int N, int X, int Y) {
        for (int i = 0; i < N; i++) {
            int temp = matrix[X][i];
            matrix[X][i] = matrix[Y][i];
            matrix[Y][i] = temp;
        }
    }
     

    void swap_columns(int matrix[][500], int N, int X, int Y) {
        for (int i = 0; i < N; i++) {
            int temp = matrix[i][X];
            matrix[i][X] = matrix[i][Y];
            matrix[i][Y] = temp;
        }
    }
     
    int main() {
        int N, X, Y;
        int matrix[500][500];
     

        scanf("%d %d %d", &N, &X, &Y);
        X--; Y--;  // Convert to 0-based indexing
     

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
     

        swap_rows(matrix, N, X, Y);
        swap_columns(matrix, N, X, Y);
     

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
     
        return 0;
    }
