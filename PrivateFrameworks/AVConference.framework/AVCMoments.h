/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCMoments : NSObject {
    unsigned int  _capabilities;
    AVConferenceXPCClient * _connection;
    int  _currentActiveRequestsCount;
    int  _currentPendingRequestsCount;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _deviceID;
    NSMutableDictionary * _requests;
    long long  _streamToken;
}

@property (nonatomic, readonly) int activeRequestCount;
@property (nonatomic, readonly) unsigned int capabilities;
@property (nonatomic, readonly) <AVCMomentsDelegate> *delegate;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) int pendingRequestCount;
@property (nonatomic, readonly) long long streamToken;

- (int)activeRequestCount;
- (bool)avcMomentsRequestDidEndRequest:(id)arg1 withError:(id*)arg2;
- (bool)avcMomentsRequestDidRejectRequest:(id)arg1 withError:(id*)arg2;
- (bool)avcMomentsRequestDidStartRequest:(id)arg1 withError:(id*)arg2;
- (unsigned int)capabilities;
- (bool)connect;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (id)description;
- (id)deviceID;
- (void)didEndProcessingRequestHelperWithResult:(id)arg1;
- (void)didFinishRequestHelperWithResult:(id)arg1;
- (void)didStartProcessingRequestHelperWithResult:(id)arg1;
- (void)disconnect;
- (id)initWithStreamToken:(long long)arg1 deviceID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;
- (id)newRequestWithMediaType:(unsigned char)arg1;
- (int)pendingRequestCount;
- (void)registerBlocksForNotifications;
- (long long)streamToken;

@end