/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate> {
    NSObject<OS_dispatch_queue> * _callback_queue;
    FBSOrientationObserverClient * _client;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activeInterfaceOrientationWithCompletion:(id /* block */)arg1;
- (void)client:(id)arg1 handleOrientationUpdate:(id)arg2;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (void)invalidate;
- (void)setHandler:(id /* block */)arg1;

@end
