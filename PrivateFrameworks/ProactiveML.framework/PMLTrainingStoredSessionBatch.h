/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLTrainingStoredSessionBatch : NSObject {
    unsigned long long  _count;
    PMLSparseMatrix * _covariates;
    PMLModelRegressor * _outcomes;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) PMLSparseMatrix *covariates;
@property (nonatomic, readonly) PMLModelRegressor *outcomes;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)covariates;
- (id)initWithCovariates:(id)arg1 outcomes:(id)arg2;
- (id)minibatchStats;
- (id)minibatchStatsForPositiveLabel:(unsigned long long)arg1;
- (id)outcomes;

@end