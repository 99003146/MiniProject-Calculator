#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <math.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_substract(void);
void test_multiply(void);
void test_divide(void);
void test_square(void);
void test_squarert(void);
void test_ctof(void);
void test_ftoc(void);
void test_kmtom(void);
void test_mtokm(void);
void test_kgtog(void);
void test_gtokg(void);
void test_sine(void);
void test_cosine(void);
void test_tan(void);
void test_Cot(void);
void test_Sec(void);
void test_Cosec(void);
/* Start of the aSpplication test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  CU_add_test(suite,"add",test_add);
  CU_add_test(suite,"substract",test_substract);
  CU_add_test(suite,"multiply",test_multiply);
  CU_add_test(suite,"divide",test_divide);
  CU_add_test(suite,"square",test_square);
  CU_add_test(suite,"square root",test_squarert);
  CU_add_test(suite,"Celsius_to_Farenheit", test_ctof);
  CU_add_test(suite,"Farenheit_to_Celsius", test_ftoc);
  CU_add_test(suite,"Kilometer_to_meter", test_kmtom);
  CU_add_test(suite,"meter_to_kilometer", test_mtokm);
  CU_add_test(suite,"kilogram_to_gram", test_kgtog);
  CU_add_test(suite,"sine",test_sine);
  CU_add_test(suite,"cos",test_cosine);
  CU_add_test(suite,"tan",test_tan);
  CU_add_test(suite,"Cot",test_Cot);
  CU_add_test(suite,"Sec",test_Sec);
  CU_add_test(suite,"cosine",test_Cosec);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_add(void)
{
    CU_ASSERT_EQUAL(add(1,2), 3);
    CU_ASSERT_EQUAL(add(0,-3), -3);
}

void test_multiply(void)
{
    CU_ASSERT_DOUBLE_EQUAL(multiply(4.21,2), 8.420, 0);
    CU_ASSERT_DOUBLE_EQUAL(multiply(-3.2,2),-6.400,0);
}
void test_divide(void)
{
    CU_ASSERT_DOUBLE_EQUAL(divide(6.7,2), 3.350, 0);
    CU_ASSERT_DOUBLE_EQUAL(divide(6.7,0), 0, 0);
}
void test_substract(void)
{
    CU_ASSERT_EQUAL(substract(6,2), 4);
    CU_ASSERT_EQUAL(substract(1,2), -1);
}


void test_square(void)
{
    CU_ASSERT_DOUBLE_EQUAL(square(6.7) , 44.89, 0);
    CU_ASSERT_DOUBLE_EQUAL(square(-6.7), 44.89, 0);
}

void test_squarert(void)
{
    CU_ASSERT_DOUBLE_EQUAL(sqarert(144) , 12, 0);
    CU_ASSERT_DOUBLE_EQUAL(sqarert(98) , 9.899, 0.1);

}

 void test_ctof(void)
{
    CU_ASSERT_DOUBLE_EQUAL(ctof(32) , 89.600, 0);
   CU_ASSERT_DOUBLE_EQUAL(ctof(-32) , -25.600, 0);
 }

 void test_ftoc(void)
{
    CU_ASSERT_DOUBLE_EQUAL(ftoc(89.6) , 32.000, 0);
    CU_ASSERT_DOUBLE_EQUAL(ftoc(-25.6) , -32.000, 0);
}

void test_kmtom(void)
{
    CU_ASSERT_DOUBLE_EQUAL(kmtom(4) , 4000, 0);
    CU_ASSERT_DOUBLE_EQUAL(kmtom(-2) , 0, 0);

}
void test_mtokm(void)
{
    CU_ASSERT_DOUBLE_EQUAL(mtokm(4000) , 4, 0);
    CU_ASSERT_DOUBLE_EQUAL(mtokm(-2) , 0, 0);
}
void test_kgtog(void)
{
    CU_ASSERT_DOUBLE_EQUAL(kgtog(4) , 4000, 0);
    CU_ASSERT_DOUBLE_EQUAL(mtokm(-2) , 0, 0);  
}
void test_gtokg(void)
{
    CU_ASSERT_DOUBLE_EQUAL(gtokg(4000) , 4, 0);
    CU_ASSERT_DOUBLE_EQUAL(gtokg(-2) , 0, 0);  
}


void test_sine(void)
{
    CU_ASSERT_DOUBLE_EQUAL(sine(90) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(sine(0) , 0, 0);  
}

void test_cosine(void)
{
    CU_ASSERT_DOUBLE_EQUAL(cosine(0) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(cosine(45) , 0.707107, 0.1);  
}

void test_tan(void)
{
    CU_ASSERT_DOUBLE_EQUAL(Tan(45) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(Tan(0) , 0, 0);   
}
void test_Cot(void)
{
    CU_ASSERT_DOUBLE_EQUAL(Cot(45) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(Cot(90) , 0, 0.1);   
}
void test_Sec(void)
{
    CU_ASSERT_DOUBLE_EQUAL(Sec(0) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(Sec(45) , 1.414214 , 0.1);   
}
void test_Cosec(void)
{    
    CU_ASSERT_DOUBLE_EQUAL(Cosec(90) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(Cosec(45) , 1.414214 , 0.1); 

}