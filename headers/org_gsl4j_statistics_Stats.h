/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_gsl4j_statistics_Stats */

#ifndef _Included_org_gsl4j_statistics_Stats
#define _Included_org_gsl4j_statistics_Stats
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    mean
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_mean
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    variance
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_variance
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    varianceMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_varianceMean
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    sd
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_sd
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    sdMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_sdMean
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    totSumSquares
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_totSumSquares
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    totSumSquaresMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_totSumSquaresMean
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    varianceWithFixedMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_varianceWithFixedMean
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    sdWithFixedMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_sdWithFixedMean
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    absdev
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_absdev
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    absdevMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_absdevMean
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    skew
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_skew
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    skewMeanSd
 * Signature: ([DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_skewMeanSd
  (JNIEnv *, jclass, jdoubleArray, jdouble, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    kurtosis
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_kurtosis
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    kurtosisMeanSd
 * Signature: ([DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_kurtosisMeanSd
  (JNIEnv *, jclass, jdoubleArray, jdouble, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    lag1Autocorrelation
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_lag1Autocorrelation
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    lag1AutocorrelationMean
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_lag1AutocorrelationMean
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    covariance
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_covariance
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    covarianceMean
 * Signature: ([D[DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_covarianceMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    correlation
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_correlation
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    spearman
 * Signature: ([D[D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_spearman
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedMean
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedVariance
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedVariance
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedVarianceMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedVarianceMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSd
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSd
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSdMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSdMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedVarianceWithFixedMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedVarianceWithFixedMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSdWithFixedMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSdWithFixedMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedTotSumOfSquares
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedTotSumOfSquares
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedTotSumOfSquaresMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedTotSumOfSquaresMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedAbsoluteSd
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedAbsoluteSd
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedAbsoluteSdMean
 * Signature: ([D[DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedAbsoluteSdMean
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSkew
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSkew
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedSkewMeanSd
 * Signature: ([D[DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedSkewMeanSd
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedKurtosis
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedKurtosis
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    weightedKurtosisMeanSd
 * Signature: ([D[DDD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_weightedKurtosisMeanSd
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdouble, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    max
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_max
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    min
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_min
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    minmax
 * Signature: ([D)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_gsl4j_statistics_Stats_minmax
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    maxIndex
 * Signature: ([D)J
 */
JNIEXPORT jlong JNICALL Java_org_gsl4j_statistics_Stats_maxIndex
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    minIndex
 * Signature: ([D)J
 */
JNIEXPORT jlong JNICALL Java_org_gsl4j_statistics_Stats_minIndex
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    minmaxIndex
 * Signature: ([D)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_gsl4j_statistics_Stats_minmaxIndex
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    medianFromSortedData
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_medianFromSortedData
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    median
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_median
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    quantileFromSortedData
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_quantileFromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    select
 * Signature: ([DI)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_select
  (JNIEnv *, jclass, jdoubleArray, jint);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    trmeanFromSortedData
 * Signature: ([DD)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_trmeanFromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdouble);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    gastwirthFromSortedData
 * Signature: ([D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_gastwirthFromSortedData
  (JNIEnv *, jclass, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    mad0
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_mad0
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    mad
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_mad
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    sn0FromSortedData
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_sn0FromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    snFromSortedData
 * Signature: ([D[D)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_snFromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    qn0FromSortedData
 * Signature: ([D[D[I)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_qn0FromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jintArray);

/*
 * Class:     org_gsl4j_statistics_Stats
 * Method:    qnFromSortedData
 * Signature: ([D[D[I)D
 */
JNIEXPORT jdouble JNICALL Java_org_gsl4j_statistics_Stats_qnFromSortedData
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jintArray);

#ifdef __cplusplus
}
#endif
#endif
