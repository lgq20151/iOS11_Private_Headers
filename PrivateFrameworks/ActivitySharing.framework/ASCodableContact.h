/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableContact : PBCodable <NSCopying> {
    NSMutableArray * _destinations;
    NSString * _fullName;
    NSString * _linkedContactStoreIdentifier;
    ASCodableRelationship * _relationship;
    ASCodableRelationship * _remoteRelationship;
    NSString * _shortName;
}

@property (nonatomic, retain) NSMutableArray *destinations;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, readonly) bool hasFullName;
@property (nonatomic, readonly) bool hasLinkedContactStoreIdentifier;
@property (nonatomic, readonly) bool hasRelationship;
@property (nonatomic, readonly) bool hasRemoteRelationship;
@property (nonatomic, readonly) bool hasShortName;
@property (nonatomic, retain) NSString *linkedContactStoreIdentifier;
@property (nonatomic, retain) ASCodableRelationship *relationship;
@property (nonatomic, retain) ASCodableRelationship *remoteRelationship;
@property (nonatomic, retain) NSString *shortName;

+ (Class)destinationsType;

- (void).cxx_destruct;
- (void)addDestinations:(id)arg1;
- (void)clearDestinations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinations;
- (id)destinationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationsCount;
- (id)dictionaryRepresentation;
- (id)fullName;
- (bool)hasFullName;
- (bool)hasLinkedContactStoreIdentifier;
- (bool)hasRelationship;
- (bool)hasRemoteRelationship;
- (bool)hasShortName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)linkedContactStoreIdentifier;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relationship;
- (id)remoteRelationship;
- (void)setDestinations:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setLinkedContactStoreIdentifier:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setRemoteRelationship:(id)arg1;
- (void)setShortName:(id)arg1;
- (id)shortName;
- (void)writeTo:(id)arg1;

@end
