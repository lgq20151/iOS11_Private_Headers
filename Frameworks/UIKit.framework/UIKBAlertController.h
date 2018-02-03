/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBAlertController : UIAlertController {
    <UIKBAlertControllerDelegate> * _kbDelegate;
}

@property (nonatomic) <UIKBAlertControllerDelegate> *kbDelegate;

- (id)kbDelegate;
- (void)setKbDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
