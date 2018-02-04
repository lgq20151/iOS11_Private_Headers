/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTObjectDiff : NSObject {
    <MTDiffable> * _diffable1;
    <MTDiffable> * _diffable2;
    NSMutableDictionary * _differencesByKey;
    unsigned long long  _results;
}

@property (nonatomic, copy) <MTDiffable> *diffable1;
@property (nonatomic, copy) <MTDiffable> *diffable2;
@property (nonatomic, readonly) NSArray *differences;
@property (nonatomic, retain) NSMutableDictionary *differencesByKey;
@property (nonatomic) unsigned long long results;

+ (id)diffBetweenObject:(id)arg1 andObject:(id)arg2;

- (void).cxx_destruct;
- (void)_handleDifferenceForKey:(id)arg1 value1:(id)arg2 value2:(id)arg3;
- (void)computeDiff;
- (id)description;
- (id)diffable1;
- (id)diffable2;
- (id)differenceForKey:(id)arg1;
- (id)differences;
- (id)differencesByKey;
- (bool)hasDifferencesInKeys:(id)arg1;
- (id)initWithObject:(id)arg1 andObject:(id)arg2;
- (unsigned long long)results;
- (void)setDiffable1:(id)arg1;
- (void)setDiffable2:(id)arg1;
- (void)setDifferencesByKey:(id)arg1;
- (void)setResults:(unsigned long long)arg1;

@end