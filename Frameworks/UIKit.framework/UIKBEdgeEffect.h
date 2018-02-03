/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect> {
    NSString * _colorName;
    unsigned long long  _edges;
    UIKBGradient * _gradient;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    double  _opacity;
    double  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edges;
@property (nonatomic, retain) UIKBGradient *gradient;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) double opacity;
@property (nonatomic, readonly) SEL renderSelector;
@property (nonatomic, readonly) bool renderUnder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesRGBColors;
@property (nonatomic) double weight;

+ (id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 inset:(double)arg3 weight:(double)arg4;
+ (id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 weight:(double)arg4;

- (struct CGColor { }*)CGColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)edges;
- (id)gradient;
- (id)initWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 weight:(double)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (double)opacity;
- (SEL)renderSelector;
- (bool)renderUnder;
- (void)setEdges:(unsigned long long)arg1;
- (void)setGradient:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOpacity:(double)arg1;
- (void)setWeight:(double)arg1;
- (bool)usesRGBColors;
- (double)weight;

@end
