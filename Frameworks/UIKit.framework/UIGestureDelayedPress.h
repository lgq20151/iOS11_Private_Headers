/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureDelayedPress : NSObject <NSCopying> {
    bool  _cloneForSecondDelivery;
    long long  _delayCount;
    UIPressesEvent * _event;
    UIPress * _press;
    UIPress * _stateWhenDelayed;
    UIPress * _stateWhenDelivered;
}

@property bool cloneForSecondDelivery;
@property (nonatomic, retain) UIPressesEvent *event;
@property (nonatomic, retain) UIPress *press;
@property (nonatomic, retain) UIPress *stateWhenDelayed;
@property (nonatomic, retain) UIPress *stateWhenDelivered;

- (void).cxx_destruct;
- (bool)cloneForSecondDelivery;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)decrementDelayCount;
- (long long)delayCount;
- (id)description;
- (id)event;
- (void)incrementDelayCount;
- (id)init;
- (long long)phaseForDelivery;
- (id)press;
- (void)saveCurrentPressState;
- (void)setCloneForSecondDelivery:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setPress:(id)arg1;
- (void)setStateWhenDelayed:(id)arg1;
- (void)setStateWhenDelivered:(id)arg1;
- (id)stateWhenDelayed;
- (id)stateWhenDelivered;
- (double)timestampForDelivery;

@end
