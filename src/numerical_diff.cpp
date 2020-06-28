/*
 * numerical_diff.cpp
 *
 *  Created on: Jun 22, 2020
 *      Author: meisam
 */

#include <gsl/gsl_deriv.h>
#include "../headers/org_gsl4j_diff_NumericalDiff.h"

/*************Initialize and Cache IDs*******************/
jclass jMathFunction ;
jmethodID jvalueMethod ;

struct my_f_params {
	JNIEnv *env ;
	jobject MathFunction ;
};

jdouble math_func(jdouble x, void *p) {
	my_f_params *params = (my_f_params *)p;
	return (*params).env -> CallDoubleMethod(params->MathFunction, jvalueMethod, x) ;
}

/*
 * Class:     org_gsl4j_diff_NumericalDiff
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_gsl4j_diff_NumericalDiff_initIDs
  (JNIEnv *env, jclass NumericalDiff) {
	jMathFunction = env -> FindClass("org/gsl4j/function/MathFunction") ;
	jvalueMethod = env -> GetMethodID(jMathFunction, "value", "(D)D") ;
}

/*******************************************************/

/*
 * Class:     org_gsl4j_diff_NumericalDiff
 * Method:    central
 * Signature: (Lorg/gsl4j/function/MathFunction;DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_diff_NumericalDiff_central
  (JNIEnv *env, jclass NumericalDiff, jobject MathFunction, jdouble x, jdouble h) {
	my_f_params params {env, MathFunction};
	gsl_function F ;
	F.function = &math_func ;
	F.params = &params ;
	jdouble jresult {0.0} ;
	jdouble absErr {0.0} ;
	gsl_deriv_central(&F, x, h, &jresult, &absErr) ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_diff_NumericalDiff
 * Method:    forward
 * Signature: (Lorg/gsl4j/function/MathFunction;DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_diff_NumericalDiff_forward
  (JNIEnv *env, jclass NumericalDiff, jobject MathFunction, jdouble x, jdouble h) {
	my_f_params params {env, MathFunction};
	gsl_function F ;
	F.function = &math_func ;
	F.params = &params ;
	jdouble jresult {0.0} ;
	jdouble absErr {0.0} ;
	gsl_deriv_forward(&F, x, h, &jresult, &absErr) ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_diff_NumericalDiff
 * Method:    backward
 * Signature: (Lorg/gsl4j/function/MathFunction;DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_diff_NumericalDiff_backward
  (JNIEnv *env, jclass NumericalDiff, jobject MathFunction, jdouble x, jdouble h) {
	my_f_params params {env, MathFunction};
	gsl_function F ;
	F.function = &math_func ;
	F.params = &params ;
	jdouble jresult {0.0} ;
	jdouble absErr {0.0} ;
	gsl_deriv_backward(&F, x, h, &jresult, &absErr) ;
	return jresult ;
}

/*
 * Class:     org_gsl4j_diff_NumericalDiff
 * Method:    centralWithError
 * Signature: (Lorg/gsl4j/function/MathFunction;DD)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_gsl4j_diff_NumericalDiff_centralWithError
  (JNIEnv *env, jclass NumericalDiff, jobject MathFunction, jdouble x, jdouble h) {
	my_f_params params {env, MathFunction};
	gsl_function F ;
	F.function = &math_func ;
	F.params = &params ;
	jdouble jresult {0.0} ;
	jdouble absErr {0.0} ;
	gsl_deriv_central(&F, x, h, &jresult, &absErr) ;
	jdoubleArray jarray = env -> NewDoubleArray(2) ;
	jdouble buf[] = {jresult, absErr} ;
	env -> SetDoubleArrayRegion(jarray, 0, 2, buf) ;
	return jarray ;
}

/*
 * Class:     org_gsl4j_diff_NumericalDiff
 * Method:    forwardWithError
 * Signature: (Lorg/gsl4j/function/MathFunction;DD)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_gsl4j_diff_NumericalDiff_forwardWithError
  (JNIEnv *env, jclass NumericalDiff, jobject MathFunction, jdouble x, jdouble h) {
	my_f_params params {env, MathFunction};
	gsl_function F ;
	F.function = &math_func ;
	F.params = &params ;
	jdouble jresult {0.0} ;
	jdouble absErr {0.0} ;
	gsl_deriv_forward(&F, x, h, &jresult, &absErr) ;
	jdoubleArray jarray = env -> NewDoubleArray(2) ;
	jdouble buf[] = {jresult, absErr} ;
	env -> SetDoubleArrayRegion(jarray, 0, 2, buf) ;
	return jarray ;
}

/*
 * Class:     org_gsl4j_diff_NumericalDiff
 * Method:    backwardWithError
 * Signature: (Lorg/gsl4j/function/MathFunction;DD)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_gsl4j_diff_NumericalDiff_backwardWithError
  (JNIEnv *env, jclass NumericalDiff, jobject MathFunction, jdouble x, jdouble h) {
	my_f_params params {env, MathFunction};
	gsl_function F ;
	F.function = &math_func ;
	F.params = &params ;
	jdouble jresult {0.0} ;
	jdouble absErr {0.0} ;
	gsl_deriv_backward(&F, x, h, &jresult, &absErr) ;
	jdoubleArray jarray = env -> NewDoubleArray(2) ;
	jdouble buf[] = {jresult, absErr} ;
	env -> SetDoubleArrayRegion(jarray, 0, 2, buf) ;
	return jarray ;
}



