/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback {
    unsigned long long  _eventType;
    unsigned int  _systemSoundID;
}

@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) unsigned int systemSoundID;

+ (id)customDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned int)arg2;
+ (id)type;

- (unsigned long long)_effectiveEventType;
- (unsigned int)_effectiveSystemSoundID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)eventType;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)systemSoundID;

@end
