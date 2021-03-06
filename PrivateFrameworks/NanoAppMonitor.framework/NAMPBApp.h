/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
 */

@interface NAMPBApp : PBCodable <NSCopying> {
    NSString * _companionBundleID;
    double  _timeIntervalSinceReferenceDate;
    NSString * _watchBundleID;
}

@property (nonatomic, retain) NSString *companionBundleID;
@property (nonatomic) double timeIntervalSinceReferenceDate;
@property (nonatomic, retain) NSString *watchBundleID;

+ (id)fromUsage:(id)arg1;

- (void).cxx_destruct;
- (id)companionBundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompanionBundleID:(id)arg1;
- (void)setTimeIntervalSinceReferenceDate:(double)arg1;
- (void)setWatchBundleID:(id)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)watchBundleID;
- (void)writeTo:(id)arg1;

@end
