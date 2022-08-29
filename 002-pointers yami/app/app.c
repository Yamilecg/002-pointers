#include "pointers.h"

int main(void)
{
    int collection[] = {9,1,1,6,3,8};//arreglo
    int count = 6;

    bubble_sort(collection, count);
    insertion_sort(collection, count);
    reverse(collection, count);
    calulate_frequency(collection, count,0);

  return 0;
}
