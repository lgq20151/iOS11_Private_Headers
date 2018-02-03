/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMElevationData : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  fElevationAscended;
    unsigned long long  fElevationDescended;
    NSDate * fEndDate;
    unsigned long long  fRecordId;
    NSUUID * fSourceId;
    NSDate * fStartDate;
}

@property (nonatomic, readonly) unsigned long long elevationAscended;
@property (nonatomic, readonly) unsigned long long elevationDescended;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)elevationAscended;
- (unsigned long long)elevationDescended;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 elevationAscended:(unsigned long long)arg5 elevationDescended:(unsigned long long)arg6;
- (id)initWithSignificantElevationSample:(id)arg1;
- (unsigned long long)recordId;
- (id)sourceId;
- (id)startDate;

@end
