//
//  ASD
//  LR1_3
//
//  Created by Michael Chirozidi on 25.10.2021.
//

#include <stdio.h>
#include "math.h"
#include "stdlib.h"
#include <time.h>

int main(int argc, const char * argv[]) {
    
    float a, b, R;
    int n;
    double arrayY[n];
    R = 0;

    printf("Enter the a:");
    scanf("%f", &a);
    printf("Enter the b:");
    scanf("%f", &b);
    printf("Enter the n:");
    scanf("%d", &n);
    printf("\n\t\ta=%.3f\t\tb=%.3f\t\tn=%d\n", a ,b, n);

    srand(time(NULL));
    
    for (int i = 0; i < n; i++){
        arrayY[i] = ( (rand() % 1000 - 250) ) / 10.0 + 0.1;
        float temp = arrayY[i];
        if( fabs ( arrayY[i] ) <= 10 ) arrayY[i] = a * (arrayY[i] * arrayY[i] * arrayY[i] );
        else arrayY[i]++;
        float g;
        if( ( (i + 1) % 2) == 0) g = (a * arrayY[i] -3 * b);
        else g = -(a * arrayY[i] -3 * b);
        printf("\ny(%d) = %.3f\t\tz(%d) = %.3f\t\t g(%d) = %.3f \t\n", i + 1, temp, i + 1, arrayY[i], i + 1, g);
        R = R + g;
        if (i == (n-1) ) printf("\nR = %.3f\n\n", R);
        }
    
return 0;
    
}
