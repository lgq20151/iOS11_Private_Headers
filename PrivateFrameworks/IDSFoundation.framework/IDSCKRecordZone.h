/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCKRecordZone : NSObject <NSCopying, NSSecureCoding> {
    IDSCKRecordZoneID * _zoneID;
}

@property (nonatomic, readonly) IDSCKRecordZoneID *zoneID;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)zoneID;

@end