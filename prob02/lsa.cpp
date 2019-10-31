#include <iostream>
#include "lsa.hpp"

int linear_search(int linear_array[], int number_target, int array_size){

  if (array_size < 0) {
    return -1;
  } else if (number_target == linear_array[array_size]) {
    return array_size;
  } else {
    return linear_search(linear_array, number_target, array_size - 1);
  }
}
