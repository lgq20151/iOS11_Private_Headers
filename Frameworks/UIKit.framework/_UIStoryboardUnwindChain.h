/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStoryboardUnwindChain : NSObject {
    unsigned long long  _commonAncestorIdx;
    unsigned long long  _modalAncestorContainingSourceIdx;
    NSMutableArray * _viewControllers;
}

@property (nonatomic, readonly) UIViewController *commonAncestorViewController;
@property (nonatomic, readonly) UIViewController *modalAncestorContainingSourceViewController;

- (void).cxx_destruct;
- (id)commonAncestorViewController;
- (id)debugDescription;
- (void)enumerateViewControllersFromModalAncestorUpToButNotIncludingDestination:(id /* block */)arg1;
- (id)initFromSourceViewController:(id)arg1 toDestinationViewController:(id)arg2;
- (id)modalAncestorContainingSourceViewController;

@end
