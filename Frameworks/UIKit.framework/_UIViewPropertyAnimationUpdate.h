/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewPropertyAnimationUpdate : NSObject {
    bool  _additive;
    double  _delay;
    double  _duration;
    NSValue * _fromValue;
    bool  _implicit;
    NSString * _propertyName;
    double  _startTime;
    NSValue * _toValue;
}

@property (getter=isAdditive, nonatomic, readonly) bool additive;
@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSValue *fromValue;
@property (getter=isImplicit, nonatomic, readonly) bool implicit;
@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSValue *toValue;

- (void).cxx_destruct;
- (double)delay;
- (double)duration;
- (id)fromValue;
- (id)init;
- (id)initWithPropertyName:(id)arg1 implicit:(bool)arg2 additive:(bool)arg3;
- (bool)isAdditive;
- (bool)isImplicit;
- (id)propertyName;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFromValue:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setToValue:(id)arg1;
- (double)startTime;
- (id)toValue;

@end
