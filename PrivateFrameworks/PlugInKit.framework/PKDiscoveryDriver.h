/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKDiscoveryDriver : NSObject <LSApplicationWorkspaceObserverProtocol> {
    int  _annotationNotifyToken;
    NSDictionary * _attributes;
    unsigned long long  _flags;
    NSSet * _lastResults;
    PKDiscoveryLSWatcher * _lsWatcher;
    id  _mcNotificationToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_os_activity> * _relatedActivity;
    id /* block */  _report;
    NSObject<OS_dispatch_queue> * _sync;
}

@property int annotationNotifyToken;
@property (retain) NSDictionary *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (retain) NSSet *lastResults;
@property (retain) PKDiscoveryLSWatcher *lsWatcher;
@property (retain) id mcNotificationToken;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_os_activity> *relatedActivity;
@property (copy) id /* block */ report;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *sync;

- (void).cxx_destruct;
- (int)annotationNotifyToken;
- (id)attributes;
- (void)cancel;
- (void)dealloc;
- (unsigned long long)flags;
- (id)initWithAttributes:(id)arg1 flags:(unsigned long long)arg2 report:(id /* block */)arg3;
- (void)installWatchers;
- (id)lastResults;
- (id)lsWatcher;
- (id)mcNotificationToken;
- (void)performWithPreviousResults:(id)arg1 forceNotify:(bool)arg2;
- (id)queue;
- (id)relatedActivity;
- (void)removeWatchers;
- (id /* block */)report;
- (void)setAnnotationNotifyToken:(int)arg1;
- (void)setAttributes:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setLastResults:(id)arg1;
- (void)setLsWatcher:(id)arg1;
- (void)setMcNotificationToken:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRelatedActivity:(id)arg1;
- (void)setReport:(id /* block */)arg1;
- (void)setSync:(id)arg1;
- (id)sync;

@end
