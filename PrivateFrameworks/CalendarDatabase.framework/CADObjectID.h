/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CADObjectID : NSObject <NSCopying, NSSecureCoding> {
    int  _entityID;
    int  _entityType;
    bool  _temporary;
}

@property (nonatomic, readonly) int entityID;
@property (nonatomic, readonly) int entityType;
@property (getter=isTemporary, nonatomic, readonly) bool temporary;

+ (bool)supportsSecureCoding;

- (id)URIRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)entityID;
- (id)entityName;
- (int)entityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEntityType:(int)arg1 entityID:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTemporary;
- (id)stringRepresentation;

@end