/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBRTMutableOrderIndexSet : NSObject {
    NSMutableIndexSet * _indexSet;
    bool  _reversed;
}

@property (readonly) unsigned long long beginningIndex;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long endingIndex;
@property (readonly) unsigned long long highestIndex;
@property (nonatomic, readonly) NSMutableIndexSet *indexSet;
@property (readonly) unsigned long long lowestIndex;
@property (nonatomic) bool reversed;

- (void).cxx_destruct;
- (void)addIndex:(unsigned long long)arg1;
- (unsigned long long)beginningIndex;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)endingIndex;
- (unsigned long long)highestIndex;
- (id)indexSet;
- (id)init;
- (id)initWithIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)lowestIndex;
- (void)removeIndex:(unsigned long long)arg1;
- (void)removeIndexes:(id)arg1;
- (bool)reversed;
- (void)setReversed:(bool)arg1;

@end
