/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate> {
    BSSettings * _clientExtendedData;
    id /* block */  _completionHandler;
    int  _expired;
    FBSSceneSnapshotRequestHandle * _outgoingRequestHandle;
    id /* block */  _requestHandler;
    NSMutableArray * _requests;
}

@property (nonatomic, copy) BSSettings *clientExtendedData;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double expirationInterval;
@property (getter=isExpired, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ requestHandler;
@property (readonly) Class superclass;

- (void)_executeNextRequest;
- (void)_finishAllRequests;
- (bool)_remainsActionable;
- (id)clientExtendedData;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)executeRequestsWithHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2 expirationHandler:(id /* block */)arg3;
- (double)expirationInterval;
- (Class)fallbackXPCEncodableClass;
- (id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(id /* block */)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isExpired;
- (id /* block */)requestHandler;
- (void)setClientExtendedData:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setExpired:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (bool)snapshotRequestAllowSnapshot:(id)arg1;

@end
