/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKManager : NSObject {
    PKDaemonClient * _client;
}

@property (retain) PKDaemonClient *client;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)client;
- (id)containingAppForExtensionProperties:(id)arg1;
- (id)containingAppForPlugInConnectedTo:(id)arg1;
- (id)containingAppForPlugInWithPid:(int)arg1;
- (void)forceHoldPlugIn:(id)arg1 result:(id /* block */)arg2;
- (void)holdPlugInsInApplication:(id)arg1 result:(id /* block */)arg2;
- (void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(id /* block */)arg3;
- (id)informationForPlugInWithPid:(int)arg1;
- (id)initForService:(const char *)arg1;
- (void)registerPlugInAtURL:(id)arg1 result:(id /* block */)arg2;
- (void)registerPlugInsInBundle:(id)arg1 result:(id /* block */)arg2;
- (void)releaseHold:(id)arg1;
- (void)setClient:(id)arg1;
- (void)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 result:(id /* block */)arg3;
- (void)unregisterPlugInAtURL:(id)arg1 result:(id /* block */)arg2;
- (void)unregisterPlugInsInBundle:(id)arg1 result:(id /* block */)arg2;
- (void)updateExtensionStatesForPlugIns:(id)arg1 result:(id /* block */)arg2;

@end
