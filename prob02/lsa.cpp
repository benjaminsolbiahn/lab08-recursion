#include <iostream>
#include "lsa.hpp"

int linear_search(int linear_array[], int number_target, int array_size){

  if (number_target == linear_array[array_size]) {
    return linear_array[array_size];
  } else {
    return linear_search(linear_array, number_target, array_size - 1);
  }
}
