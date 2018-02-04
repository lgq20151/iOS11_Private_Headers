/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAnalysisProgress : NSObject {
    NSDictionary * _countDictionariesByWorkerType;
    NSDictionary * _countOfDeletionsByWorkerType;
    NSDictionary * _totalProgressCountsByWorkerType;
}

+ (void)requestCurrentProgressWithLibrary:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (float)_progressFromProcessedCount:(long long)arg1 outOfPossibleCount:(long long)arg2;
- (unsigned long long)countOfDeletionsForWorkerType:(short)arg1;
- (id)description;
- (id)init;
- (id)initWithCounts:(id)arg1 totalProgressCounts:(id)arg2 countOfDeletionsByWorkerType:(id)arg3;
- (float)localPercentAnalyzedForWorkerType:(short)arg1;
- (float)percentAnalyzedForWorkerType:(short)arg1;
- (id)statusAsDictionary;

@end