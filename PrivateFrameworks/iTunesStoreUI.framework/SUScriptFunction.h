/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptFunction : NSObject {
    WebScriptObject * _function;
    NSLock * _lock;
    SUScriptObject * _thisObject;
}

@property (retain) WebScriptObject *scriptObject;
@property id thisObject;

- (id)_copyAdjustedArgumentsForArguments:(id)arg1;
- (id)callSynchronouslyWithArguments:(id)arg1;
- (bool)callWithArguments:(id)arg1;
- (bool)callWithArguments:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithScriptObject:(id)arg1;
- (void)lock;
- (id)scriptObject;
- (void)setScriptObject:(id)arg1;
- (void)setThisObject:(id)arg1;
- (id)thisObject;
- (void)unlock;

@end