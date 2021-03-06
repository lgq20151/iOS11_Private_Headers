/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcher> {
    TKTokenWatcher * _watcher;
}

- (void).cxx_destruct;
- (id)initWithWatcher:(id)arg1;
- (void)insertedToken:(id)arg1 reply:(id /* block */)arg2;
- (void)removedToken:(id)arg1 reply:(id /* block */)arg2;

@end
