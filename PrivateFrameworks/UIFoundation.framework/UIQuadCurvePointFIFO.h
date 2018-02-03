/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UIQuadCurvePointFIFO : UIPointFIFO {
    _UIPointVector * _controlPoints;
    id /* block */  _emissionHandler;
    bool  _emitInterpolatedPoints;
    void _lastPoint;
    double  _lineWidth;
    struct CGPath { } * _path;
    _UIPointVector * _points;
    _UIPointVector * _prevPoints;
    float  _unitScale;
    UIView * _view;
}

@property (nonatomic) _UIPointVector *controlPoints;
@property (copy) id /* block */ emissionHandler;
@property (nonatomic) bool emitInterpolatedPoints;
@property (nonatomic) void lastPoint;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic) _UIPointVector *points;
@property (nonatomic) _UIPointVector *prevPoints;
@property (nonatomic) float unitScale;
@property (nonatomic, retain) UIView *view;

+ (void)interpolateFromPoint:(void *)arg1 toPoint:(void *)arg2 controlPoint:(void *)arg3 time:(void *)arg4; // needs 4 arg types, found 1: float

- (void)addPoint;
- (void)clear;
- (id)controlPoints;
- (void)dealloc;
- (id /* block */)emissionHandler;
- (bool)emitInterpolatedPoints;
- (void)enumerateInterpolationFromPoint:(void *)arg1 toPoint:(void *)arg2 controlPoint:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 1: id /* block */
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (void)lastPoint;
- (double)lineWidth;
- (struct CGPath { }*)path;
- (id)points;
- (id)prevPoints;
- (void)setControlPoints:(id)arg1;
- (void)setEmissionHandler:(id /* block */)arg1;
- (void)setEmitInterpolatedPoints:(bool)arg1;
- (void)setLastPoint;
- (void)setLineWidth:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setPoints:(id)arg1;
- (void)setPrevPoints:(id)arg1;
- (void)setUnitScale:(float)arg1;
- (void)setUnitScaleForViewSize:(struct CGSize { double x1; double x2; })arg1 normalizedSize:(struct CGSize { double x1; double x2; })arg2 contentScaleFactor:(double)arg3;
- (void)setView:(id)arg1;
- (float)unitScale;
- (id)view;

@end
