/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CLEAR printf("\033[0;0H\033[2J");

void ex01();
void ex02();
void ex03();
void ex04();

int main()
{
  
  char array[12] = {"HOLAMUNDO"};
  srand(time(NULL));
  printf("Ejercicio 1\n\n");
  ex01(ex01);
  printf("\n---------------------------------------------------------------------------------------------\n");
   printf("Ejercicio 2\n\n");
  ex02();
  printf("\n---------------------------------------------------------------------------------------------\n");
  printf("Ejercicio 3\n\n");
  ex03(array);
  printf("\n---------------------------------------------------------------------------------------------\n");
  printf("Ejercicio 4\n\n");
  isBinary();
  return 0;

}

void ex01()
{
  /* Excerice 01:
  Create an array of 10 integers, set their value (whatever you want)
  Using pointer arithmetic and a for loop traverse and print all the array

  DO NOT USE BRACKETS [ ]
  
  Print both the value and the address.
  
  ie
    int array = [ 2 , 3 , 5 , 6]

    array[0] = 2 -> addr = 0x00001
    array[1] = 3 -> addr = 0x00004
    array[2] = 5 -> addr = 0x00008
    array[3] = 6 -> addr = 0x0000B
*/
int arreglo[10];
int * ptr_array = arreglo;

for(int i = 0 ; i < 10 ; i++, ptr_array++) {
  *ptr_array = rand() % 10;
  printf("array[%d] = %d -> addr = %p\n",i, *ptr_array, ptr_array);
}


}

void ex02()
{
  /* Excercise 02:
  Implement a function mylenght() that returns the size of the passed 
  string (char array). DO NOT USE strlen(), use only pointer arithmetic.

  DO NOT USE BRACKETS [ ]

  TIP: all strings are array of chars, terminated by '\0' character.
*/

char array[100] = "Hello World, im Paul";
char *ptr_array = array;
int counter = 0;
for (int i = 0 ; i < 100 ; i++, ptr_array ++) {
  if(*ptr_array == '\0') {
    break;
  }
  counter += 1;

}
printf("La longitud de [Hello World, im Paul] es = %d", counter);

}

/* More practice excerises (similar to Ex02)

  NOTA :    No utilizar arreglos o corchetes dentro de
            ninguna de las 2 funciones.

  Excercise 03
  Implementa una funcion, que reciba por referencia un arreglo,
  recorra este arreglo y cambie cualquier mayuscula a minuscula, 
  el arreglo se debe de imprimir de vuelta en el main  Tip: ASCII table

  


  Exercise 04
  Implementa una función isBinary que reciba una cadena de texto de consola
  y determine si está formada exclusivamente por dígitos binarios (0, 1). 
  
*/

void ex03(char *array) {
  printf("El texto era [HOLAMUNDO] ahora es: ");
  for(int i = 0 ; i < 12 ; i++, array++) {
    *array += 32;
    printf("%c", *array);
  }
}

void isBinary() {

  char array[100];

  printf("Que texto quieres saber si es binario?: ");
  scanf("%99s", array);

  char *ptr_array = array;
  int len = strlen(array);

  for(int i = 0 ; i < len ; i++, ptr_array++) {
    if(*ptr_array != '0' && *ptr_array != '1') {
    printf("No esta formado por 1s y 0s\n");
    return;
    } 
    }
    printf("Si esta formado por 1s y 0s\n");
  }

