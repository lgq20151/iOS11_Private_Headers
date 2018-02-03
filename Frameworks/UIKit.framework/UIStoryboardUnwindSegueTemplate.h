/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate {
    NSString * _action;
}

@property (nonatomic, copy) NSString *action;

- (void).cxx_destruct;
- (id)_legacyUnwindExecutorForTarget:(id)arg1;
- (id)_perform:(id)arg1;
- (id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2;
- (id)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)arg1;
- (id)segueWithDestinationViewController:(id)arg1;
- (void)setAction:(id)arg1;

@end
