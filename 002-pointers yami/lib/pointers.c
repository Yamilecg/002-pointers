//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"
// comparación de elementos y se intercambian de manera que queden en orden ascendente
int bubble_sort(int *collection, int count)
{ int *swap = 0;
  // aqui su implementación.
  for(int i = 0; i < count; i++) //mientras sea verdadero se seguira ejecutando
    {
      for(int j = 0; j < 5 ; j++) //ciclo anidado
      {
          if (*(collection+j) > *(collection + j + 1)) //determinador si se amerita un cambio de posición
          {
              *(swap++);
              count = * (collection+j);
              *(collection + j) = *(collection+j+1);
              *(collection+j+1)= count;
          }

      }
  }

  for(int i = 0; i < 6; i++){
      printf("%d\t",collection[i]);
      printf("%d\n",swap); // no supe poner bien el swap :(
  }
  return 0;
}

void insertion_sort(int *collection, int count) // por inserción hay que ver si el numero izquiera es > numero actual
{
    int i;
    int lugar; //posición
    for (i = 0; i < count; i++) {
        lugar = i;
        count = *(collection+i);

        while ((lugar > 0) && (*(collection + lugar - 1) > count)) {
            *(collection + lugar) =  *(collection + lugar - 1);
            lugar--;

        }
        *(collection + lugar) = count;

    }
    printf("Forma Ascendente:\n ");
    for (i = 0; i < 6; i++) {
    printf("%d\n",*(collection+i));


    }
    printf("Forma Descendente:\n ");
    for (i = 5; i >= 0; i--) {
        printf("%d\n",*(collection+i));

    }
}

void reverse(int *collection, int count) {
    int rev = 0;
    for (int i = 0; i < count; i++) {
        rev = *(collection+i);
        *(collection+i) = collection[count - i - 1];
        collection[count - i - 1] = rev;
    }
    printf("\nReverse:\n ");
    for (int i = count -1 ; i >= 0; i--) {
        printf("%d\n", *(collection+i));

    }
}


/*int calulate_frequency(int *collection, int count, int target)
{
Se que debemos de buscar los números rpetidos por lo que entiendo
 pero no se como ponerlo con apuntadores jeje

  return 0;
/*