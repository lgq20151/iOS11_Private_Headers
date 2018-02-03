/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol> {
    BrightnessSystemClientInternal * _target;
    id /* block */  clientBlock;
    NSObject<OS_dispatch_queue> * queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) BrightnessSystemClientInternal *target;

- (void)dealloc;
- (void)notifyChangedProperty:(id)arg1 value:(id)arg2;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)unregisterNotificationBlock;

@end
