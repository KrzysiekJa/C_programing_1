//
//  2_2.c
//  projekt2
//
//  Created by Krzysztof Jarek on 08.12.2017.
//  Copyright © 2017 Krzysztof Jarek. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i_rand(int min, int max){
    return rand() % (max-min+1) + min;
}

int main(void) {
    int tab[10];
    
    for (int i=0; i<10; i++){
        tab[i]= i_rand(-100, 100);
    }

    printf ("Tablica przed sortowaniem:\n");
    
    for (int i=0; i<10; i++){
        printf (" %d",tab[i]);
    }
    
    for ( int i= 1; i<10; i++){
        int t= tab[i];
        int j=i-1;
        while(j>=0 && t< tab[j]){
            tab[j+1]= tab[j];
            j=j-1;}
        tab[j +1]=t;
        }
    
    printf ("\nTablica po sortowaniu:\n");
    
    for (int i=0; i<10; i++){
        printf (" %d",tab[i]);
    }
    printf ("\n");
    
    return 0;
}
