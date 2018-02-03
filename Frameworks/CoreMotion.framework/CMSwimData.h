/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMSwimData : NSObject <NSCopying, NSSecureCoding> {
    double  fAvgPace;
    double  fDistance;
    NSDate * fEndDate;
    unsigned long long  fLapCount;
    unsigned long long  fRecordId;
    unsigned long long  fSegment;
    NSUUID * fSessionId;
    NSUUID * fSourceId;
    NSDate * fStartDate;
    unsigned long long  fStrokeCount;
    long long  fStrokeType;
}

@property (nonatomic, readonly) double avgPace;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long lapCount;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) unsigned long long segment;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long strokeCount;
@property (nonatomic, readonly) long long strokeType;

+ (unsigned long long)maxSwimDataEntries;
+ (id)strokeTypeName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (double)avgPace;
- (void)convertToSwimEntry:(struct CLSwimEntry { unsigned long long x1; unsigned char x2[16]; unsigned char x3[16]; double x4; double x5; double x6; double x7; double x8; double x9; int x10; int x11; int x12; int x13; float x14; float x15; float x16; int x17; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 strokeCount:(unsigned long long)arg6 distance:(double)arg7 avgPace:(double)arg8 lapCount:(unsigned long long)arg9 strokeType:(long long)arg10 segment:(unsigned long long)arg11;
- (id)initWithSessionId:(id)arg1;
- (id)initWithSwimEntry:(const struct CLSwimEntry { unsigned long long x1; unsigned char x2[16]; unsigned char x3[16]; double x4; double x5; double x6; double x7; double x8; double x9; int x10; int x11; int x12; int x13; float x14; float x15; float x16; int x17; }*)arg1;
- (unsigned long long)lapCount;
- (unsigned long long)recordId;
- (unsigned long long)segment;
- (id)sessionId;
- (id)sourceId;
- (id)startDate;
- (unsigned long long)strokeCount;
- (long long)strokeType;

@end
