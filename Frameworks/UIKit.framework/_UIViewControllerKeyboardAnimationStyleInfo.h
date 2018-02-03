/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerKeyboardAnimationStyleInfo : NSObject {
    bool  _isAnimationCompleting;
    id /* block */  _previousCompleteHandler;
}

@property (nonatomic) bool isAnimationCompleting;
@property (nonatomic, copy) id /* block */ previousCompleteHandler;

- (void)dealloc;
- (bool)isAnimationCompleting;
- (id /* block */)previousCompleteHandler;
- (void)setIsAnimationCompleting:(bool)arg1;
- (void)setPreviousCompleteHandler:(id /* block */)arg1;

@end
