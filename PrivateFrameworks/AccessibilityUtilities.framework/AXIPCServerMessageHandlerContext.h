/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCServerMessageHandlerContext : NSObject {
    bool  _async;
    id /* block */  _handler;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, readonly) bool async;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) id target;

- (void).cxx_destruct;
- (bool)async;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 async:(bool)arg3;
- (SEL)selector;
- (id)target;

@end