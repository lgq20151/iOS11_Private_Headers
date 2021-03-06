/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKKeyboardContentViewController : UIInputViewController {
    NSString * _identifier;
    UIViewController * _viewController;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithViewController:(id)arg1 identifier:(id)arg2;
- (void)loadView;
- (void)setIdentifier:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
