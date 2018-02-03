/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardBreadcrumb : PBCodable <NSCopying> {
    NSString * _entityID;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int wasTapped : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSString * _type;
    bool  _wasTapped;
}

@property (nonatomic, retain) NSString *entityID;
@property (nonatomic, readonly) bool hasEntityID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic) bool hasWasTapped;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *type;
@property (nonatomic) bool wasTapped;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityID;
- (bool)hasEntityID;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasWasTapped;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWasTapped:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(id)arg1;
- (void)setWasTapped:(bool)arg1;
- (unsigned long long)timestamp;
- (id)type;
- (bool)wasTapped;
- (void)writeTo:(id)arg1;

@end
