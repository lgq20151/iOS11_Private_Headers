/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastController : NSObject {
    NSString * _broadcastExtensionBundleID;
    RPBroadcastViewController * _broadcastViewController;
    <RPBroadcastControllerDelegate> * _delegate;
    NSDictionary * _serviceInfo;
}

@property (nonatomic, readonly) NSString *broadcastExtensionBundleID;
@property (nonatomic, retain) NSURL *broadcastURL;
@property (nonatomic, readonly) RPBroadcastViewController *broadcastViewController;
@property (getter=isBroadcasting, nonatomic, readonly) bool broadcasting;
@property (nonatomic) <RPBroadcastControllerDelegate> *delegate;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic, retain) NSDictionary *serviceInfo;

- (void).cxx_destruct;
- (id)broadcastExtensionBundleID;
- (id)broadcastURL;
- (id)broadcastViewController;
- (void)dealloc;
- (id)delegate;
- (void)finishBroadcastWithHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCurrentSession;
- (id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 broadcastViewController:(id)arg3;
- (bool)isBroadcasting;
- (bool)isPaused;
- (void)pauseBroadcast;
- (void)resumeBroadcast;
- (id)serviceInfo;
- (void)setBroadcastURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServiceInfo:(id)arg1;
- (void)startBroadcastWithHandler:(id /* block */)arg1;

@end