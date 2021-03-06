/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequester : NSObject {
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
    <_GEOETARequesterServerProxy> * _serverProxy;
}

+ (id)sharedRequester;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;

- (void).cxx_destruct;
- (void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(bool)arg3 connectionProperties:(id)arg4 willSendRequest:(id /* block */)arg5 finished:(id /* block */)arg6 networkActivity:(id /* block */)arg7 error:(id /* block */)arg8;
- (void)cancelRequest:(id)arg1;
- (void)cancelSimpleETARequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 willSendRequest:(id /* block */)arg4 finished:(id /* block */)arg5 networkActivity:(id /* block */)arg6 error:(id /* block */)arg7;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 requestMode:(int)arg3 finished:(id /* block */)arg4 networkActivity:(id /* block */)arg5 error:(id /* block */)arg6;
- (void)updateRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

@end
