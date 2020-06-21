/*
 * real_roots.cpp
 *
 *  Created on: Jun 7, 2020
 *      Author: meisam
 */

#include <gsl/gsl_roots.h>
#include "../headers/org_gsl4j_roots_RealRoot.h"

/*
 * Class:     org_gsl4j_roots_RealRoot
 * Method:    func
 * Signature: (Lorg/gsl4j/roots/RealRootFunction;D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_roots_RealRoot_func
  (JNIEnv *env, jclass RealRoot, jobject RealRootFunction, jdouble x) {
	// goal: call the method "value()" in the realrootfunction
	// step 1: jclass for the interface
	jclass realRootClass = env -> GetObjectClass(RealRootFunction) ;
	// step 2: method id
	jmethodID fid = env -> GetMethodID(realRootClass, "value", "(D)D") ;
	jdouble result = env -> CallDoubleMethod(RealRootFunction, fid, x) ;
	return result ;

}


