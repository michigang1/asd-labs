//
//  ASD
//  LR2_2
//
//  Created by Michael Chirozidi on 13.12.2021.
//

#include <stdio.h>
#include <stdlib.h>

int n;// глобальная переменная для ввоыда в функцию

void qsMatrix(int num[n][n], int first, int last){
    int l = first;
    int r = last;
    int x = num[first][first];
    while (first < last)
    {
        while ((num[last][last] > x) && (first < last))
            last = last - 1;

        num[first][first] = num[last][last];
        first = first + 1;
        while ((num[first][first] < x) && (first < last))
            first = first + 1;

        num[last][last] = num[first][first];
        if(last > first) {
            last = last - 1;
        }
    }
    num[last][last] = x;
    x = last;
    first = l;
    last = r;
    if (first < x)
        qsMatrix(num, first, x - 1);
    if (last > x)
        qsMatrix(num, x + 1, last);
}

int main(){
    int j,i;
    n = 8;
    int MATRIX[8][8] = {
            {50, 0, 0, 0, 0, 0, 0, 0},
            {0, 20, 0, 0, 0, 0, 0, 0},
            {0, 0, 20, 0, 0, 0, 0, 0},
            {0, 0, 0, 20, 0, 0, 0, 0},
            {0, 0, 0, 0, 10, 0, 0, 0},
            {0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, -10, 0},
            {0, 0, 0, 0, 0, 0, 0, -55}
    };
    printf("Initial matrix:\n");
    for(j = 0; j < n; j++){
        for(i = 0; i < n; i++){
            printf("%i\t", MATRIX[i][j]);
        }
        printf("\n");
    }
    printf("Sorted matrix: \n");
    qsMatrix(MATRIX, 0, n - 1);
    for(j = 0; j < n; j++){
        for(i = 0; i < n; i++){
            printf("%i\t", MATRIX[i][j]);
        }
        printf("\n");
    }
    return 0;
}
