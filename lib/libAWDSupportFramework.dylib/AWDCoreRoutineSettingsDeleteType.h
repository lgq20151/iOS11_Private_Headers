/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineSettingsDeleteType : PBCodable <NSCopying> {
    int  _deletionMethod;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deletionMethod : 1; 
    }  _has;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) int deletionMethod;
@property (nonatomic) bool hasDeletionMethod;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deletionMethod;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeletionMethod;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setDeletionMethod:(int)arg1;
- (void)setHasDeletionMethod:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
