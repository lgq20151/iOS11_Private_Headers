/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioPlaybackHistory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    ICRadioPlaybackHistoryItem * _currentTrack;
    long long  _numberOfSkips;
    NSString * _stationIdentifier;
    NSArray * _tracks;
}

@property (nonatomic, readonly, copy) ICRadioPlaybackHistoryItem *currentTrack;
@property (nonatomic, readonly) long long numberOfSkips;
@property (nonatomic, readonly, copy) NSDictionary *propertyListRepresentation;
@property (nonatomic, readonly, copy) NSString *stationIdentifier;
@property (nonatomic, readonly, copy) NSArray *tracks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentTrack;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStationIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfSkips;
- (id)propertyListRepresentation;
- (id)stationIdentifier;
- (id)tracks;

@end