/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCapturePowerMonitor : NSObject {
    float  _maxTorchLevel;
    struct OpaqueFigSimpleMutex { } * _maxTorchLevelLock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _registrationToken;
    id /* block */  _torchHandler;
}

@property (readonly) float maxTorchLevel;

+ (void)initialize;

- (void)_powerNotification:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (float)maxTorchLevel;
- (void)setPowerHandler:(id /* block */)arg1;

@end
