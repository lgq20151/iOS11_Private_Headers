/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDictationPrivacySheetController : UINavigationController {
    id /* block */  _dismissHandler;
}

@property (copy) id /* block */ dismissHandler;

+ (id)controllerWithDismissHandler:(id /* block */)arg1;

- (void)dealloc;
- (void)dismiss;
- (void)dismissAnimated:(bool)arg1;
- (id /* block */)dismissHandler;
- (id)initWithHandler:(id /* block */)arg1;
- (void)setDismissHandler:(id /* block */)arg1;

@end
