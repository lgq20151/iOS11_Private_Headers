/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface TopBottomRegion : NSObject {
    NSMutableData * bottomData;
    bool  isempty;
    float  length;
    int  nsegs;
    float  seglength;
    float  ss;
    NSMutableData * topData;
    int  xdatamax;
    int  xdatamin;
    float  xmax;
    float  xmin;
    float  ymax;
    float  ymin;
}

@property (readonly) float*bottom;
@property bool isempty;
@property float length;
@property (readonly) float*top;
@property float xmax;
@property float xmin;

- (void)adjustForX:(float)arg1 Y:(float)arg2;
- (float*)bottom;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (bool)containsPointX:(float)arg1 Y:(float)arg2;
- (void)dealloc;
- (id)initWithSegments:(int)arg1 boundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isempty;
- (float)length;
- (void)lowerBottomBy:(float)arg1;
- (void)printSummary;
- (void)raiseTopBy:(float)arg1;
- (void)setIsempty:(bool)arg1;
- (void)setLength:(float)arg1;
- (void)setXmax:(float)arg1;
- (void)setXmin:(float)arg1;
- (void)smoothWithSize:(int)arg1;
- (float*)top;
- (float)xmax;
- (float)xmin;

@end
