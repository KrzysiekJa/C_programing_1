//
//  2_1.c
//  projekt2
//
//  Created by Krzysztof Jarek on 08.12.2017.
//  Copyright © 2017 Krzysztof Jarek. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double d_rand(double min, double max){
    double r = (double) rand()/RAND_MAX;
    return r*(max-min) + min;
}

int main(void){
    int n;
    double s=0;
    int p=0;
    
    printf("Podaj liczbe losowan:");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        double x = d_rand(0, 1);
        double y = d_rand(0, 1);
        double k = (pow(x,2) + pow(y,2));
        if (k < 1){
            p=p+1;
            s= s + k;
        }
    }
    double w =(p*4.0)/n;
    printf("Wynik = %6.4f \n", w);
    
    return 0;
}
