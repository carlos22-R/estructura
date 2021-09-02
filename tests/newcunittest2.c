/*
 * File:   newcunittest2.c
 * Author: carlos
 *
 * Created on 2 sep. 2021, 00:08:14
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
    int vector[]={1,2,3};
    size_t tamano=3;
    
    CU_ASSERT(MostrarI(vector, tamano));
    
}

void testMostrarD() {
    double vector[]={1.2,2.3};
    size_t tamano=2;
    CU_ASSERT(MostrarD(vector, tamano));
    
}

void testMostrarC() {
    char vector[]={'a','b'};
    size_t tamano=lenght(vector);
   
    CU_ASSERT(MostrarC(vector, tamano));
    
}

void testMostrarF() {
    float vector[]={1.2,1.4};
    size_t tamano=2;
    
    
    CU_ASSERT(MostrarF(vector, tamano));
    
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest2", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testMostrarI", testMostrarI)) ||
            (NULL == CU_add_test(pSuite, "testMostrarD", testMostrarD)) ||
            (NULL == CU_add_test(pSuite, "testMostrarC", testMostrarC)) ||
            (NULL == CU_add_test(pSuite, "testMostrarF", testMostrarF))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
