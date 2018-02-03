/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutinePersistenceMirroringDelegate : PBCodable <NSCopying> {
    int  _creationFailureReason;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int creationFailureReason : 1; 
        unsigned int mirroringDelegatePresent : 1; 
    }  _has;
    bool  _mirroringDelegatePresent;
    unsigned long long  _timestamp;
}

@property (nonatomic) int creationFailureReason;
@property (nonatomic) bool hasCreationFailureReason;
@property (nonatomic) bool hasMirroringDelegatePresent;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool mirroringDelegatePresent;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)creationFailureReason;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreationFailureReason;
- (bool)hasMirroringDelegatePresent;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)mirroringDelegatePresent;
- (bool)readFrom:(id)arg1;
- (void)setCreationFailureReason:(int)arg1;
- (void)setHasCreationFailureReason:(bool)arg1;
- (void)setHasMirroringDelegatePresent:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMirroringDelegatePresent:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
