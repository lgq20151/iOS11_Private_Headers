/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICReachability : NSObject {
    bool  _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (id)sharedReachabilityForInternetConnection;

- (bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (bool)startNotifier;
- (void)stopNotifier;

@end