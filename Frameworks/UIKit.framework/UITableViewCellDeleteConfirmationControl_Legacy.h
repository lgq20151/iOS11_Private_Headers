/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl {
    UITableViewCellDeleteConfirmationGestureRecognizer * _deleteConfirmationGesture;
    bool  _visible;
}

@property (getter=isVisible, nonatomic) bool visible;

+ (struct CGSize { double x1; double x2; })defaultSizeForTitle:(id)arg1;

- (void).cxx_destruct;
- (void)_confirmationAnimationDidEnd;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelDeleteConfirmationWithGesture:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultSize;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (bool)isVisible;
- (void)layoutSubviews;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (void)touchUpInside:(id)arg1;
- (void)touchUpOutside:(id)arg1;

@end
