/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMPickupManager : NSObject {
    <CMPickupDelegate> * _delegate;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fDispatcher;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
}

@property (nonatomic) <CMPickupDelegate> *delegate;

+ (bool)isPickupAvailable;

- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)onPickupStateUpdated:(const struct Sample { unsigned char x1; double x2; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)startPickupUpdates;
- (void)stopPickupUpdates;

@end
