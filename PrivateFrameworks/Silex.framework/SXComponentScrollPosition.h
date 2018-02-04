/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentScrollPosition : SXScrollPosition {
    double  _canvasWidth;
    NSString * _componentIdentifier;
    double  _relativePageOffset;
}

@property (nonatomic) double canvasWidth;
@property (nonatomic, retain) NSString *componentIdentifier;
@property (nonatomic) double relativePageOffset;

- (void).cxx_destruct;
- (double)canvasWidth;
- (id)componentIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)relativePageOffset;
- (void)setCanvasWidth:(double)arg1;
- (void)setComponentIdentifier:(id)arg1;
- (void)setRelativePageOffset:(double)arg1;

@end