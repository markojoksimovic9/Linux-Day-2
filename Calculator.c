#include <stdio.h>
#include <stdbool.h>

int add(int x, int y) {
  
  return x+y;
}

int subtract(int x, int y) {
  
  return x-y;
}

int multiply(int x, int y) {
  
  return x*y;
}

int divide(int x, int y) {
  
  return x/y;
}

int main(void) {
  
  printf("5+4 = %d\n", add(5, 4));
  
  printf("5-4 = %d\n", subtract(5,4));
  
  printf("5*4 = %d\n", multiply(5,4));
  
  printf("10/2 = 5\n", divide(5,2));
}
