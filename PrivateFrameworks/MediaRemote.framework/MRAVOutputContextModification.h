/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputContextModification : NSObject {
    MRStandardCallback * _callback;
    unsigned long long  _modificationType;
    NSArray * _outputDevices;
    NSObject<OS_dispatch_source> * _timerSource;
    bool  _valid;
}

@property (nonatomic, readonly) MRStandardCallback *callback;
@property (nonatomic, readonly) unsigned long long modificationType;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, readonly) bool valid;

+ (id)addModificationWithDevices:(id)arg1 callback:(id)arg2;
+ (id)removeModificationWithDevices:(id)arg1 callback:(id)arg2;
+ (id)replaceModificationWithDevices:(id)arg1 callback:(id)arg2;

- (id)callback;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 devices:(id)arg2 callback:(id)arg3;
- (void)invalidate;
- (unsigned long long)modificationType;
- (id)outputDevices;
- (bool)valid;

@end
