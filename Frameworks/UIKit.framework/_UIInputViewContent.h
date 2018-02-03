/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInputViewContent : UIView {
    double  _contentHeight;
    double  _contentWidth;
    UIInputView * _inputView;
    int  _unclippableCorners;
}

@property (nonatomic) int _unclippableCorners;

- (struct CGSize { double x1; double x2; })_contentSize;
- (bool)_isToolbar;
- (void)_setToolbarBackgroundImage:(id)arg1;
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeFittingContentViews;
- (int)_unclippableCorners;
- (void)_updateCornerClipping;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputView:(id)arg2;
- (void)set_unclippableCorners:(int)arg1;

@end
