/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface Polyline : NSObject {
    float  arclength;
    struct CGPoint { 
        double x; 
        double y; 
    }  axisV;
    struct CGPath { } * boundsPath;
    bool  isempty;
    float  maxsize;
    struct CGPoint { 
        double x; 
        double y; 
    }  normV;
    unsigned int  nsegs;
    double  s0;
    double  s1;
    double  sdelta;
    double  seglength;
    float  xmax;
    float  xmin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  xyBoundsRect;
    float  ymax;
    float  ymin;
    NSMutableData * yyData;
}

@property struct CGPoint { double x1; double x2; } axisV;
@property (readonly) struct CGPath { }*boundsPath;
@property struct CGPoint { double x1; double x2; } normV;
@property unsigned int nsegs;
@property double s0;
@property double s1;
@property double seglength;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } xyBoundsRect;

- (void)accomodatePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })axisV;
- (struct CGPath { }*)boundsPath;
- (void)bridgeGapsLinear;
- (void)bridgeGapsMinimum;
- (void)constructBezierWithToleranceOutside:(float)arg1 andInside:(float)arg2;
- (void)dealloc;
- (id)initWithMaxsize:(float)arg1 segmentDelta:(float)arg2 andAxis:(struct CGPoint { double x1; double x2; })arg3;
- (void)lengthenStart:(float)arg1 end:(float)arg2;
- (bool)liesAbovePointX:(float)arg1 Y:(float)arg2;
- (bool)liesBelowPointX:(float)arg1 Y:(float)arg2;
- (struct CGPoint { double x1; double x2; })normV;
- (unsigned int)nsegs;
- (void)printBounds;
- (void)printPoints;
- (void)printRect;
- (double)s0;
- (double)s1;
- (double)seglength;
- (void)setAxisV:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNormV:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNsegs:(unsigned int)arg1;
- (void)setS0:(double)arg1;
- (void)setS1:(double)arg1;
- (void)setSeglength:(double)arg1;
- (void)setXyBoundsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })xyBoundsRect;
- (struct CGPoint { double x1; double x2; })xyFromS2:(float)arg1;
- (struct CGPoint { double x1; double x2; })xyFromS:(double)arg1;
- (float*)yy;

@end
