/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
    WebPolicyDecisionListenerPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_invalidate;
- (void)_usePolicy:(int)arg1;
- (void)dealloc;
- (void)download;
- (void)ignore;
- (void)use;

@end
