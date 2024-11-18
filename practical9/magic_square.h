#include <stdio.h>

int isMagicSquare(int **square, const int n) {
    
    if (n <= 0) {
        return 0;
    }

    int M = (n * (n * n + 1)) / 2;
   

for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	   printf("%d",square[i][j]);
	}
	printf("\n");
   }


    
   for (int i = 0; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += square[i][j];
        }
        if (row_sum != M) {
            return 0;
        }
    }

    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < n; i++) {
            col_sum += square[i][j];
        }
        if (col_sum != M) {
            return 0;
        }
    }

    int main_diag_sum = 0;
    for (int i = 0; i < n; i++) {
        main_diag_sum += square[i][i];
    }
    if (main_diag_sum != M) {
        return 0;
    }

    int sec_diag_sum = 0;
    for (int i = 0; i < n; i++) {
        sec_diag_sum += square[i][n - i - 1];
    }
    if (sec_diag_sum != M) {
        return 0;
    }

    return 1;
}

