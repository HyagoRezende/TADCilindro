//Arquivo .h visível ao usuário
//Variáveis e cabeçalhos das funções
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//definir a estrutura de dado a ser utilizada
typedef struct cilindro Cilindro;

//funcao para criar o cilindro h=altura, d=diametro
Cilindro *cria_cilindro(float h, float d);

//funcao liberar a memoria cilindro
void libera_cilindro(Cilindro *c);

//funcao para acessar dados do cilindro
void acessa_cilindro(Cilindro *c);

//funcao retorna altura do cilindro
float altura_cilindro(Cilindro *c);

//funcao retorna raio do cilindro
float raio_cilindro(Cilindro *c);

//funcao retorna area da base
float area_base_cilindro(Cilindro *c);

//funcao retorna area da face
float area_face_cilindro(Cilindro *c);

//funcao retorna volume do cilindro
float volume_cilindro(Cilindro *c);
