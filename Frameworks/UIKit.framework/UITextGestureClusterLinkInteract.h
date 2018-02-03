/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextGestureClusterLinkInteract : UITextGestureCluster {
    bool  _isTryingToHighlightLink;
}

- (void)_resetForLink;
- (void)cancelInteractionWithLink;
- (bool)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)linkTapRecognizer:(id)arg1;
- (void)longDelayRecognizer:(id)arg1;
- (void)smallDelayRecognizer:(id)arg1;
- (bool)tapOnLinkWithGesture:(id)arg1;

@end
