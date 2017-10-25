//
//  main.cpp
//  Ordenacion seleccion
//
//  Created by Pablo Fernando Gonzalez de Lara on 25/10/17.
//  Copyright © 2017 Pablo Fernando Gonzalez de Lara. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int vector[5] = {99,88,2,5,0};
    int i, j, aux;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(vector[j] > vector [j+1]){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
    //Asendente
    for(i=0; i<5; i++){
        printf("%i ", vector[i]);
    }
    printf("\n");
    return 0;
}
