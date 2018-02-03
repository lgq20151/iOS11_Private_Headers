/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {
    NSString * _colorName;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _concaveInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    struct CGSize { 
        double width; 
        double height; 
    }  _offset;
    double  _weight;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } concaveInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIKBGradient *gradient;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) struct CGSize { double x1; double x2; } offset;
@property (nonatomic, readonly) SEL renderSelector;
@property (nonatomic, readonly) bool renderUnder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesRGBColors;
@property (nonatomic) double weight;

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize { double x1; double x2; })arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 weight:(double)arg4;

- (struct CGColor { }*)CGColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })concaveInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)gradient;
- (id)initWithColor:(id)arg1 offset:(struct CGSize { double x1; double x2; })arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 weight:(double)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })offset;
- (SEL)renderSelector;
- (bool)renderUnder;
- (void)setConcaveInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setWeight:(double)arg1;
- (bool)usesRGBColors;
- (double)weight;

@end