/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {
    double  _modificationDate;
    long long  _modificationEpoch;
    long long  _objectAnchor;
    long long  _request;
    long long  _status;
}

@property (nonatomic, readonly) double modificationDate;
@property (nonatomic, readonly) long long modificationEpoch;
@property (nonatomic, readonly) long long objectAnchor;
@property (nonatomic, readonly) long long request;
@property (nonatomic, readonly) long long status;

+ (id)recordWithReadingDisabledFromRecord:(id)arg1;
+ (id)recordWithSharingDisabledFromRecord:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deniedReading;
- (bool)deniedSharing;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 objectAnchor:(long long)arg3 modificationEpoch:(long long)arg4 modificationDate:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isCompatibleStatus:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (double)modificationDate;
- (long long)modificationEpoch;
- (long long)objectAnchor;
- (bool)readingEnabled;
- (long long)request;
- (bool)requestedReading;
- (bool)requestedSharing;
- (bool)sharingEnabled;
- (long long)status;

@end
