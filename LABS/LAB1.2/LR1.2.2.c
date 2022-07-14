//
//  LR1_2_2.c
//  ASD
//
//  Created by Michael Chirozidi on 17.10.2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n; //верхняя граница произведение
    double sum = 0; //сумма
    double prod = 1; //деление и перемножение
    int count = 0; //операции

 printf("Input n:\n");
 scanf("%d", &n);

for(int i = 1; i <= n; i++){
        sum += sin(i); //i==j
        prod *= sum / (cos(i) + 1);
        count += 9;
}
 count++;
 printf("Output: %.7lf\n", prod);
 printf("Operations: %d\n", count);
 return 0;
}

