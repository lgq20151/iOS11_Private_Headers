/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSDirectivesManager : NSObject {
    PRSL2FeatureVectorProcessingContext * _processingContext;
    double  _weightX;
    double  _weightY;
    struct _as_is { unsigned long long x1; unsigned long long x2; } * directive_as_is;
    struct _as_is_range { unsigned long long x1; unsigned long long x2; unsigned long long x3; } * directive_as_is_range;
    struct _id_mapping { unsigned long long x1; unsigned long long x2; union { struct __CFDictionary {} *x_3_1_1; int x_3_1_2[5]; } x3; char *x4; } * directive_id_mapping;
    struct _is_populated { unsigned long long x1; unsigned long long x2; double x3[5]; double x4[5]; unsigned long long x5; } * directive_is_populated;
    struct _local_resultset_id_values_mapping { 
        unsigned long long start_idx; 
        unsigned long long end_idx; 
        struct __CFDictionary {} *mapping; 
        unsigned long long numPRSRankingBundleFeatures; 
        unsigned long long *PRSRankingBundleFeatureOrder; 
        double *score_vector; 
        unsigned long long mapSize; 
    }  directive_local_resultset_id_values_mapping;
    struct _one_sided_inverse { unsigned long long x1; unsigned long long x2; } * directive_one_sided_inverse;
    struct _parsec_resultset_id_values_mapping { 
        unsigned long long start_idx; 
        unsigned long long end_idx; 
        unsigned long long numFeatures; 
        struct __CFDictionary {} *mapping; 
        double *score_vector; 
        unsigned long long mapSize; 
    }  directive_parsec_resultset_id_values_mapping;
    struct _quantize { unsigned long long x1; unsigned long long x2; double *x3; unsigned long long x4; } * directive_quantize;
    struct _replace_if { unsigned long long x1; unsigned long long x2; double x3[2]; double x4[2]; unsigned long long x5; } * directive_replace_if;
    struct _replace_then_min { unsigned long long x1; unsigned long long x2; double x3[5]; double x4[5]; double x5; unsigned long long x6; } * directive_replace_then_min;
    struct _resultset_id_mapping { unsigned long long x1; unsigned long long x2; union { struct __CFDictionary {} *x_3_1_1; int x_3_1_2[5]; } x3; char *x4; double *x5; } * directive_resultset_id_mapping;
    struct _resultset_id_score_mapping { unsigned long long x1; unsigned long long x2; union { struct __CFDictionary {} *x_3_1_1; int x_3_1_2[5]; } x3; struct __CFDictionary {} *x4; char *x5; double *x6; } * directive_resultset_id_score_mapping;
    struct _value_if_not_exist { unsigned long long x1; unsigned long long x2; double x3; } * directive_value_if_not_exist;
    NSMutableIndexSet * disabledFeatureIndices;
    int  indexOfAsIs;
    int  indexOfAsIsRange;
    int  indexOfIdMapping;
    int  indexOfIsPopulated;
    int  indexOfOneSidedInverse;
    int  indexOfQuantize;
    int  indexOfReplaceIf;
    int  indexOfReplaceThenMin;
    int  indexOfResultSetIdMapping;
    int  indexOfResultSetIdScoreMapping;
    int  indexOfValueIfNotExist;
    NSMutableDictionary * mapInflatedIndexToSize;
    int  sizeOfAsIs;
    int  sizeOfAsIsRange;
    int  sizeOfIdMapping;
    int  sizeOfIsPopulated;
    int  sizeOfOneSidedInverse;
    int  sizeOfQuantize;
    int  sizeOfReplaceIf;
    int  sizeOfReplaceThenMin;
    int  sizeOfResultSetIdMapping;
    int  sizeOfResultSetIdScoreMapping;
    int  sizeOfValueIfNotExist;
}

@property (nonatomic, retain) PRSL2FeatureVectorProcessingContext *processingContext;
@property (nonatomic) double weightX;
@property (nonatomic) double weightY;

+ (id)descriptorsForModelInputScore;

- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (unsigned long long)getDirectiveTypeFromString:(id)arg1;
- (id)init;
- (void)processDirectives:(id)arg1 isL2:(bool)arg2;
- (void)processFeatureVector:(id)arg1 featureValues:(double*)arg2 maxCount:(unsigned long long)arg3 useExperimental:(bool)arg4;
- (void)processL2FeatureVector:(id)arg1 populatingValues:(double*)arg2 useExperimental:(bool)arg3;
- (double)processOutput:(double)arg1;
- (void)processResultSetValuesWithMap:(id)arg1 serverFeatures:(id)arg2;
- (id)processingContext;
- (void)setProcessingContext:(id)arg1;
- (void)setWeightX:(double)arg1;
- (void)setWeightY:(double)arg1;
- (double)weightX;
- (double)weightY;

@end