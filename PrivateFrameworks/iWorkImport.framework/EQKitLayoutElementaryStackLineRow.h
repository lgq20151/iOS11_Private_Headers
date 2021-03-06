/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitLayoutElementaryStackLineRow : NSObject <EQKitLayoutElementaryStackRow> {
    long long  mAlignmentShift;
    unsigned long long  mFirstColumnIndex;
    double  mFollowingSpace;
    unsigned long long  mLength;
    double  mThickness;
}

@property (nonatomic, readonly) long long alignmentShift;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long firstColumnIndex;
@property (nonatomic, readonly) double followingSpace;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool spansStack;
@property (readonly) Class superclass;

- (long long)alignmentShift;
- (unsigned long long)columnCount;
- (unsigned long long)firstColumnIndex;
- (double)followingSpace;
- (id)initWithLength:(unsigned long long)arg1 thickness:(double)arg2 position:(long long)arg3 followingSpace:(double)arg4;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(struct __wrap_iter<double *> { double *x1; })arg2 iterMax:(struct __wrap_iter<double *> { double *x1; })arg3 previousRow:(id)arg4 layoutManager:(const struct EQKitLayoutManager { id x1; double x2; struct __CFString {} *x3; struct Manager {} *x4; struct Config {} *x5; struct EQKitLayoutContext { int (**x_6_1_1)(); struct Info { unsigned long long x_2_2_1; bool x_2_2_2; bool x_2_2_3; bool x_2_2_4; int x_2_2_5; double x_2_2_6; int x_2_2_7; struct __CFString {} *x_2_2_8; } x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; id x_6_1_6; struct Collection {} x_6_1_7; struct __CTFont {} *x_6_1_8; struct CGColor {} *x_6_1_9; struct { unsigned int x_10_2_1 : 1; unsigned int x_10_2_2 : 1; unsigned int x_10_2_3 : 1; } x_6_1_10; struct { double x_11_2_1; double x_11_2_2; double x_11_2_3; } x_6_1_11; } x6; struct stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long> > > { struct deque<unsigned long, std::__1::allocator<unsigned long> > { struct __split_buffer<unsigned long *, std::__1::allocator<unsigned long *> > { unsigned long long **x_1_3_1; unsigned long long **x_1_3_2; unsigned long long **x_1_3_3; struct __compressed_pair<unsigned long **, std::__1::allocator<unsigned long *> > { unsigned long long **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned long long x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_3_1; } x_1_2_3; } x_7_1_1; } x7; }*)arg5;
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x1; })arg1;
- (void)setFirstColumnIndex:(unsigned long long)arg1;
- (bool)spansStack;

@end
