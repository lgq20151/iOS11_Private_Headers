/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterRemoteProxy : NSObject <GEORequestCounterProtocol> {
    NSObject<OS_dispatch_queue> * _requestQ;
}

@property (nonatomic) bool countersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearCounters;
- (bool)countersEnabled;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)incrementAtTime:(id)arg1 app:(id)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4 xmitBytes:(unsigned long long)arg5 recvBytes:(unsigned long long)arg6;
- (void)incrementCountsForLogMsgCollection:(id)arg1 appId:(id)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned long long)arg4 recvBytes:(unsigned long long)arg5;
- (void)incrementForApp:(id)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned long long)arg4 recvBytes:(unsigned long long)arg5;
- (id)init;
- (void)readRequestsPerAppSince:(id)arg1 handler:(id /* block */)arg2;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)setCountersEnabled:(bool)arg1;
- (void)startPowerLogSessionWithName:(id)arg1;

@end
