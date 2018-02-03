/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSCompositeLayoutXAxisAnchor : NSLayoutXAxisAnchor <NSCompositeLayoutAnchor> {
    double  _constant;
    NSLayoutDimension * _dimension;
    double  _dimensionMultiplier;
    NSLayoutXAxisAnchor * _xAxisAnchor;
}

@property (readonly) NSArray *_childAnchors;

- (id)_childAnchors;
- (long long)_directionAbstraction;
- (id)_expressionInContext:(/* Warning: unhandled struct encoding: '{?=q@}' */ struct { long long x1; id x2; })arg1;
- (double)_valueInEngine:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)initWithAnchor:(id)arg1;
- (id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 plus:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end
