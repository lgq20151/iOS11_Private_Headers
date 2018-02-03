/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController {
    NSArray * _keyCommands;
    struct __GSKeyboard { } * _keyboard;
}

@property (nonatomic, retain) UIKeyCommandDiscoverabilityHUDView *view;

- (void).cxx_destruct;
- (void)animateOutWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithKeyCommands:(id)arg1 keyboard:(struct __GSKeyboard { }*)arg2;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
