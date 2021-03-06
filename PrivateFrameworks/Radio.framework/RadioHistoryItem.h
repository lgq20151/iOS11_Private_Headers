/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioHistoryItem : NSObject <NSCopying, NSMutableCopying> {
    NSDate * _datePlayed;
    NSString * _externalIdentifier;
    RadioTrack * _track;
    long long  _type;
}

@property (nonatomic, readonly) NSDate *datePlayed;
@property (nonatomic, readonly, copy) NSString *externalIdentifier;
@property (nonatomic, readonly) RadioTrack *track;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datePlayed;
- (id)description;
- (id)externalIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)track;
- (long long)type;

@end
