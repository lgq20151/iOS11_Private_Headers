/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPress : NSObject <_UIResponderForwardable> {
    bool  _abandonForwardingRecord;
    unsigned long long  _clickCount;
    double  _force;
    NSMutableArray * _forwardingRecord;
    unsigned long long  _gameControllerComponent;
    NSMutableArray * _gestureRecognizers;
    bool  _isDelayed;
    bool  _longClick;
    long long  _phase;
    UIResponder * _responder;
    bool  _sentPressesEnded;
    unsigned long long  _source;
    double  _timestamp;
    long long  _type;
    UIWindow * _window;
}

@property (setter=_setForwardablePhase:, nonatomic) long long _forwardablePhase;
@property (setter=_setResponder:, nonatomic, retain) UIResponder *_responder;
@property (nonatomic) unsigned long long clickCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double force;
@property (getter=_gameControllerComponent, setter=_setGameControllerComponent:, nonatomic) unsigned long long gameControllerComponent;
@property (nonatomic, copy) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDelayed;
@property (getter=isLongClick, nonatomic) bool longClick;
@property (nonatomic) long long phase;
@property (nonatomic, retain) UIResponder *responder;
@property (nonatomic) bool sentPressesEnded;
@property (getter=_source, setter=_setSource:, nonatomic) unsigned long long source;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_abandonForwardingRecord;
- (long long)_forwardablePhase;
- (id)_forwardingRecord;
- (unsigned long long)_gameControllerComponent;
- (bool)_isAbandoningForwardingRecord;
- (bool)_isDirectionalPress;
- (bool)_isSynthetic;
- (void)_loadStateFromPress:(id)arg1;
- (void)_loadStateFromPressInfo:(id)arg1;
- (id)_mutableForwardingRecord;
- (id)_phaseDescription;
- (void)_removeGestureRecognizer:(id)arg1;
- (id)_responder;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (void)_setForwardablePhase:(long long)arg1;
- (void)_setGameControllerComponent:(unsigned long long)arg1;
- (void)_setResponder:(id)arg1;
- (void)_setSource:(unsigned long long)arg1;
- (unsigned long long)_source;
- (bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (unsigned long long)clickCount;
- (id)description;
- (double)force;
- (id)gestureRecognizers;
- (bool)isDelayed;
- (bool)isLongClick;
- (long long)phase;
- (id)responder;
- (bool)sentPressesEnded;
- (void)setClickCount:(unsigned long long)arg1;
- (void)setForce:(double)arg1;
- (void)setGestureRecognizers:(id)arg1;
- (void)setIsDelayed:(bool)arg1;
- (void)setLongClick:(bool)arg1;
- (void)setPhase:(long long)arg1;
- (void)setResponder:(id)arg1;
- (void)setSentPressesEnded:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setWindow:(id)arg1;
- (double)timestamp;
- (long long)type;
- (id)window;

@end
