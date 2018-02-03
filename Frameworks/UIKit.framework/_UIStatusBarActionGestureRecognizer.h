/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarActionGestureRecognizer : UIGestureRecognizer {
    bool  _highlighted;
}

@property (nonatomic) bool highlighted;

- (bool)highlighted;
- (void)setHighlighted:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end