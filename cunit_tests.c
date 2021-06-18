#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "Calculator.h"

void test_add(void) {
  
  CU_ASSERT(add(2,2) == 4);
  CU_ASSERT(add(0,0) == 0);
  CU_ASSERT(add(-1,1) == 0);
}

void test_subtract(void) {

  CU_ASSERT(subtract(2,2) == 0);
  CU_ASSERT(subtract(5,1) == 4);
  CU_ASSERT(subtract(20,10) == 10);
}

void test_multiply(void) {
  
  CU_ASSERT(multiply(2,2) == 4);
  CU_ASSERT(multiply(2,5) == 10);
  CU_ASSERT(multiply(10,10) == 100);
}

void test_divide(void) {

  CU_ASSERT(divide(20,10) == 2);
  CU_ASSERT(divide(2,1) == 2);
  CU_ASSERT(divide(100,10) == 10);
}

int main() {
  
  CU_initialize_registry();
  
  CU_pSuite suite1 = CU_add_suite("test_add", 0, 0);
  CU_pSuite suite2 = CU_add_suite("test_subtract", 0, 0);
  CU_pSuite suite3 = CU_add_suite("test_multiply", 0, 0);
  CU_pSuite suite4 = CU_add_suite("test_divide", 0, 0);
  
  CU_add_test(suite1, "test_add", test_add);
  CU_add_test(suite2, "test_subtract", test_subtract);
  CU_add_test(suite3, "test_multiply", test_multiply);
  CU_add_test(suite4, "test_divide", test_divide);
  
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  CU_basic_run_tests();
  
  CU_cleanup_registry();
  
  return 0;
}
