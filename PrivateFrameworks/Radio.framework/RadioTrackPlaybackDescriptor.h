/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _current;
    NSDate * _expirationDate;
    double  _pauseTime;
    NSDate * _skipDate;
    long long  _storeID;
    NSDictionary * _trackInfo;
}

@property (getter=isCurrent, nonatomic, readonly) bool current;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) double pauseTime;
@property (nonatomic, readonly) NSDate *skipDate;
@property (nonatomic, readonly) long long storeID;
@property (nonatomic, readonly, copy) NSDictionary *trackInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrack:(id)arg1;
- (bool)isCurrent;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)pauseTime;
- (id)queueTrackDictionary;
- (id)skipDate;
- (long long)storeID;
- (id)trackInfo;

@end