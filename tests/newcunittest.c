/*
 * File:   newcunittest.c
 * Author: carlos
 *
 * Created on 1 sep. 2021, 23:40:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../headerfuncion.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testMostrarI() {
    int* vector[]={12,34};
    size_t tamano=2;
    
        CU_ASSERT(MostrarI(vector,tamano));
    
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testMostrarI", testMostrarI))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
