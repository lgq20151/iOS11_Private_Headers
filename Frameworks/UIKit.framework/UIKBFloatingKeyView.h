/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBFloatingKeyView : UIKBContainerKeyView {
    _UIFloatingContentView * _floatingContentView;
}

@property (nonatomic, readonly) _UIFloatingContentView *floatingContentView;

- (void).cxx_destruct;
- (id)floatingContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForDisplay;

@end
