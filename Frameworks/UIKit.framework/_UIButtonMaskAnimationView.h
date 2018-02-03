/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate> {
    UIButton * _delegate;
    unsigned long long  _hardEdge;
    UIView * _hardEdgeLine;
}

@property (nonatomic) UIColor *borderColor;
@property double borderWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) UIButton *delegate;
@property (readonly, copy) NSString *description;
@property unsigned long long hardEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLine;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)borderColor;
- (double)borderWidth;
- (id)delegate;
- (unsigned long long)hardEdge;
- (id)init;
- (void)layoutSubviews;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHardEdge:(unsigned long long)arg1;

@end
