//
//  LR1.c
//  ASD
//
//  Created by Michael Chirozidi on 23.09.2021.
//


#include <stdio.h>

int main () {
    int choice;
    float x, y;
    printf("Выберите номер программы: \n №1              №2\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("The program without boolean operations was selected\n");
            printf("Enter the x:");
            scanf("%f",&x);
                if(x > 2){
                    if (x <= 12){
                        printf("X belongs to the interval(2;12]∪(22;32)\n");
                        y=-9 * (x * x * x)+ 5 *( x * x);
                        printf("y=%.3f\n",y);
                    }
                    else if (x > 22){
                        if (x < 32){
                            printf("X belongs to the interval(2;12]∪(22;32)\n");
                            y=-9 * (x * x * x) + 5 * (x * x);
                            printf("y=%.3f\n", y);
                       }
                        else printf("X doesn't belong to intervals\n");
                    }
                    else printf("X doesn't belong to intervals\n");
                }
                else if (x <= 0){
                    printf("X belongs to the interval(-∞;0]\n");
                    y=-(x * x ) - 12;
                    printf("y=%.3f\n", y);
                  }
                else printf("X doesn't belong to intervals\n");

        break;

        case 2:
            printf("The program with boolean operations was selected\n");
            printf("Enter the x:\n");
            scanf("%f",&x);
             if( (x > 2 & x <= 12) || (x > 22 & x < 32) ){
                 printf("X belongs to the interval(2;12]∪(22;32)\n");
                 y=-9 * (x * x * x)+ 5 * ( x * x);
                 printf("y=%.3f\n", y);

             }
             else if (x<=0){
                 printf("X belongs to the interval(-∞;0]\n");
                 y=-(x * x) - 12;
                 printf("y=%.3f\n", y);
             }
             else printf("X doesn't belong to intervals\n");

        break;

        default:
             printf("Retry and choice needed variant\n");

        break;
    }

return 0;
  
}




