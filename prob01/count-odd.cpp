#include <iostream>
#include "count-odd.hpp"

int count_odd(int input){
    int odd_counter = 0;
  if (input == 0){
    return 0;
  } else if (input == 1){
    return 1;
  } else if (input % 2 == 0){
    return 1 + count_odd(input - 1);
  } else{
    odd_counter ++;
    return 1 + count_odd(input - 2);
  }
}
