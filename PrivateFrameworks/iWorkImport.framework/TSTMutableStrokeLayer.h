/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMutableStrokeLayer : TSTStrokeLayer

@property (nonatomic) unsigned short columnOrRowIndex;

- (void)appendStroke:(id)arg1 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2 order:(int)arg3;
- (void)flattenStrokeOrder;
- (void)insertSpaceAtRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)invalidate;
- (void)invalidateRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)moveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(long long)arg2;
- (void)removeRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)setStroke:(id)arg1 inRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2 order:(int)arg3;
- (void)swapSegmentAtIndex:(long long)arg1 withSegmentAtIndex:(long long)arg2;

@end