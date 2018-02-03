/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTTelephonyNetworkInfo : NSObject {
    NSString * _cachedCellId;
    NSString * _cachedCurrentRadioAccessTechnology;
    NSDictionary * _cachedSignalStrength;
    bool  _monitoringCellId;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _queue;
    CTCarrier * _subscriberCellularProvider;
    id /* block */  _subscriberCellularProviderDidUpdateNotifier;
    struct __CTServerConnection { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct dispatch_queue_s {} *x2; struct CTServerState {} *x3; unsigned char x4; unsigned char x5; unsigned int x6; struct _xpc_connection_s {} *x7; unsigned char x8; unsigned char x9; } * server_connection;
    NSLock * server_lock;
}

@property (retain) NSString *cachedCellId;
@property (retain) NSString *cachedCurrentRadioAccessTechnology;
@property (retain) NSDictionary *cachedSignalStrength;
@property (nonatomic, retain) NSString *cellId;
@property (nonatomic, readonly, retain) NSString *currentRadioAccessTechnology;
@property bool monitoringCellId;
@property (retain) CTCarrier *subscriberCellularProvider;
@property (nonatomic, copy) id /* block */ subscriberCellularProviderDidUpdateNotifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachedCellId;
- (id)cachedCurrentRadioAccessTechnology;
- (id)cachedSignalStrength;
- (id)cellId;
- (void)cleanUpServerConnection;
- (id)createSignalStrengthDictWithBars:(id)arg1;
- (id)currentRadioAccessTechnology;
- (void)dealloc;
- (bool)getAllowsVOIP:(bool*)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (bool)getCarrierName:(id)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (bool)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(struct { int x1; int x2; }*)arg3;
- (bool)getMobileNetworkCode:(id)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (void)handleCTRegistrationCellChangedNotification:(id)arg1;
- (void)handleCTSignalStrengthNotification:(id)arg1;
- (void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (id)init;
- (bool)monitoringCellId;
- (void)postCellularProviderUpdatesIfNecessary;
- (void)queryCTSignalStrengthNotification;
- (void)queryCellId;
- (void)queryDataMode;
- (id)radioAccessTechnology;
- (void)setCachedCellId:(id)arg1;
- (void)setCachedCurrentRadioAccessTechnology:(id)arg1;
- (void)setCachedSignalStrength:(id)arg1;
- (void)setCellId:(id)arg1;
- (void)setMonitoringCellId:(bool)arg1;
- (void)setSubscriberCellularProvider:(id)arg1;
- (void)setSubscriberCellularProviderDidUpdateNotifier:(id /* block */)arg1;
- (bool)setUpServerConnection;
- (id)signalStrength;
- (id)subscriberCellularProvider;
- (id /* block */)subscriberCellularProviderDidUpdateNotifier;
- (bool)updateNetworkInfoAndShouldNotifyClient:(bool*)arg1;
- (void)updateRadioAccessTechnology:(id)arg1;
- (void)updateSignalStrength:(id)arg1;

@end
