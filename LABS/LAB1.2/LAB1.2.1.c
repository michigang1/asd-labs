//
//  LR1_2_1.c
//  ASD
//
//  Created by Michael Chirozidi on 17.10.2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n; //верхняя граница произведения
    double sum = 0; //сумма
    double prod = 1; //деление и перемножение
    int count = 0; // операции

 printf("Input n:\n");
 scanf("%d", &n);

for(int i = 1; i <= n; i++){
    sum = 0;
    for(int j = 1; j <= i; j++){
        sum += sin(j);
        count +=  5;
    }
    prod *= (sum / (cos(i) + 1));
    count += 8;
   }
count += 2;

 printf("Output: %.7lf\n", prod);
 printf("Operations: %d\n", count);
 return 0;
}


