/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCFileProviderMonitor : NSObject {
    id /* block */  _monitorCallback;
    NSOrderedSet * _monitoredIdentifiers;
    id  _providerMonitoringContext;
    NSMutableDictionary * _providerNames;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)monitorProviderNamesForIdentifiers:(id)arg1 callback:(id /* block */)arg2;
- (void)notifyIfNecessary;

@end
