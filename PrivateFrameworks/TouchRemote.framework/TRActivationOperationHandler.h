/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRActivationOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _activationHandler;
}

@property (nonatomic, copy) id /* block */ activationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id /* block */)activationHandler;
- (id)initWithActivationHandler:(id /* block */)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setActivationHandler:(id /* block */)arg1;

@end