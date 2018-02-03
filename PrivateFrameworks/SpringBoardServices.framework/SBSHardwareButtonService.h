/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSHardwareButtonService : SBSAbstractSystemService {
    NSMutableArray * _consumers;
    struct SBSHardwareButtonServiceButtonConfiguration { 
        unsigned long long eventMask; 
        long long maximumPriority; 
    }  _homeButtonConfiguration;
    struct SBSHardwareButtonServiceButtonConfiguration { 
        unsigned long long eventMask; 
        long long maximumPriority; 
    }  _lockButtonConfiguration;
}

@property (nonatomic, retain) NSMutableArray *consumers;
@property (nonatomic) struct SBSHardwareButtonServiceButtonConfiguration { unsigned long long x1; long long x2; } homeButtonConfiguration;
@property (nonatomic) struct SBSHardwareButtonServiceButtonConfiguration { unsigned long long x1; long long x2; } lockButtonConfiguration;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEventConsumerInfo:(id)arg1;
- (void)_mainQueue_handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)_resetEventMaskForButtonKind:(long long)arg1;
- (void)_setApplicationClientEventMask:(unsigned long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3;
- (id)_viableConsumerForEvent:(long long)arg1 priority:(long long)arg2;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(id /* block */)arg2;
- (id)beginConsumingPressesForButtonKind:(long long)arg1 eventConsumer:(id)arg2 priority:(long long)arg3;
- (void)consumerInfoWillInvalidate:(id)arg1;
- (id)consumers;
- (id)description;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(id /* block */)arg2;
- (void)handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (struct SBSHardwareButtonServiceButtonConfiguration { unsigned long long x1; long long x2; })homeButtonConfiguration;
- (struct SBSHardwareButtonServiceButtonConfiguration { unsigned long long x1; long long x2; })lockButtonConfiguration;
- (void)setConsumers:(id)arg1;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)setHomeButtonConfiguration:(struct SBSHardwareButtonServiceButtonConfiguration { unsigned long long x1; long long x2; })arg1;
- (void)setLockButtonConfiguration:(struct SBSHardwareButtonServiceButtonConfiguration { unsigned long long x1; long long x2; })arg1;

@end
