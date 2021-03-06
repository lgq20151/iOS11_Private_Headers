/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASRelationshipEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _anchor;
    NSDate * _timestamp;
    long long  _type;
    long long  _version;
}

@property (nonatomic) unsigned long long anchor;
@property (nonatomic, readonly) ASCodableRelationshipEvent *codableRelationshipEvent;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic) long long type;
@property (nonatomic) long long version;

+ (id)_relationshipEventWithCodable:(id)arg1;
+ (id)relationshipEventWithCodableRelationshipEvent:(id)arg1;
+ (id)relationshipEventWithRecord:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_codableRelationshipEvent;
- (unsigned long long)anchor;
- (id)codableRelationshipEvent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRelationshipEvent:(id)arg1;
- (void)setAnchor:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (id)timestamp;
- (long long)type;
- (long long)version;

@end
