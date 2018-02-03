/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPressInfo : NSObject {
    unsigned long long  _clickCount;
    double  _force;
    unsigned long long  _gameControllerComponent;
    bool  _longClick;
    long long  _phase;
    unsigned long long  _source;
    double  _timestamp;
    long long  _type;
}

@property (nonatomic) unsigned long long clickCount;
@property (nonatomic) double force;
@property (nonatomic) unsigned long long gameControllerComponent;
@property (getter=isLongClick, nonatomic) bool longClick;
@property (nonatomic) long long phase;
@property (nonatomic) unsigned long long source;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;

- (id)_sourceDescription;
- (unsigned long long)clickCount;
- (id)description;
- (double)force;
- (unsigned long long)gameControllerComponent;
- (id)init;
- (bool)isLongClick;
- (long long)phase;
- (void)setClickCount:(unsigned long long)arg1;
- (void)setForce:(double)arg1;
- (void)setGameControllerComponent:(unsigned long long)arg1;
- (void)setLongClick:(bool)arg1;
- (void)setPhase:(long long)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (unsigned long long)source;
- (double)timestamp;
- (long long)type;

@end