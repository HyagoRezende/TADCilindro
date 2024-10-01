//Implementacao dos algoritmos das funções
//Abstraido pelo usuario

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//inclusao da extensao .h criada
#include "cilindro.h"

//definido o TAD cilindro
struct cilindro{
    float h;
    float d;
};

//criar o ponteiro para armazenar as informacoes do cilindro
Cilindro *cria_cilindro(float h, float d){
    Cilindro *c = (Cilindro *) malloc(sizeof(Cilindro));
    if(c != NULL){
        c -> h = h;
        c -> d = d;
    }
    return(c);
}

//liberar a memoria
void libera_cilindro(Cilindro *c){
    if(c != NULL){
        free(c);
    }
}

//acessar os dados do cilindro
void acessa_cilindro(Cilindro *c){
    if(c != NULL){
        printf("Altura Cilindro = %.2f\n", c->h);
        printf("Diametro Cilindro = %.2f\n", c->d);
    }
}

//retornar a altura do cilindro
float altura_cilindro(Cilindro *c){
    if(c != NULL){
        return(c -> h);
    }
}

//retornar o raio do cilindro
float raio_cilindro(Cilindro *c){
    if(c != NULL){
        return((c -> d)/2);
    }
}

//retornar area da base
float area_base_cilindro(Cilindro *c){
    if(c != NULL){
        return((pow((c->d/2),2))*3.14);
    }
}

//retornar volume do cilindro
float volume_cilindro(Cilindro *c){
    if(c != NULL){
        return(((pow((c->d/2),2))*3.14)*(c -> h));
    }
}

int main(){
    Cilindro *cilindro_teste;
    float altura, diametro;

    printf("Informe a altura e o diametro do cilindro que deseja criar: ");
        scanf("%f %f",&altura,&diametro);
            cilindro_teste = cria_cilindro(altura,diametro);
                acessa_cilindro(cilindro_teste);
                    printf("A Altura do cilindro e: %.2f\n",altura_cilindro(cilindro_teste));
                printf("O raio do cilindro e: %.2f\n",raio_cilindro(cilindro_teste));
            printf("A area da base e: %.2f\n",area_base_cilindro(cilindro_teste));
        printf("O volume e: %.2f\n",volume_cilindro(cilindro_teste));
    libera_cilindro(cilindro_teste);
    return (0);    
}


