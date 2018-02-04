/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSActivityStream : NSObject {
    NSMutableDictionary * _activityFilters;
    <OSActivityStreamDelegate> * _delegate;
    bool  _delegateHasDidFail;
    bool  _delegateStreamErrorLess;
    bool  _delegateStreamWithError;
    OSLogDevice * _device;
    <OSDeviceDelegate> * _deviceDelegate;
    void * _deviceEventSession;
    void * _deviceSearchSession;
    unsigned long long  _eventFilter;
    unsigned long long  _options;
    NSMutableSet * _pids;
    NSCompoundPredicate * _predicate;
    NSMutableSet * _proc_names;
    struct os_activity_stream_s { } * _stream;
    NSString * _waitforProcessName;
}

@property (nonatomic) NSMutableDictionary *activityFilters;
@property (nonatomic) <OSActivityStreamDelegate> *delegate;
@property (nonatomic) OSLogDevice *device;
@property (nonatomic) <OSDeviceDelegate> *deviceDelegate;
@property (nonatomic) unsigned long long eventFilter;
@property (nonatomic) unsigned long long events;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSCompoundPredicate *predicate;

- (void).cxx_destruct;
- (id)activityFilters;
- (void)addFilterForActivity:(id)arg1 andBinary:(id)arg2;
- (void)addProcessID:(int)arg1;
- (void)addProcessName:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (id)deviceDelegate;
- (bool)establishTrust:(id)arg1;
- (unsigned long long)eventFilter;
- (unsigned long long)events;
- (id)getInfoForDevice:(id)arg1 andKey:(id)arg2;
- (id)init;
- (id)initWithDevice:(void*)arg1;
- (int)maxProcs;
- (unsigned long long)options;
- (id)predicate;
- (void)setActivityFilters:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceDelegate:(id)arg1;
- (void)setEventFilter:(unsigned long long)arg1;
- (void)setEvents:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)start;
- (void)startLocal;
- (void)startRemote;
- (void)stop;
- (void)stopLocal;
- (void)stopRemote;
- (bool)streamEvent:(id)arg1 error:(id)arg2;
- (void)waitForProcessName:(id)arg1;

@end