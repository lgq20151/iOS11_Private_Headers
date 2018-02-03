/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDEventKitSyncCompletedNightlySync : PBCodable <NSCopying> {
    unsigned int  _eventsSynced;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventsSynced : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int eventsSynced;
@property (nonatomic) bool hasEventsSynced;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool success;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventsSynced;
- (bool)hasEventsSynced;
- (bool)hasSuccess;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventsSynced:(unsigned int)arg1;
- (void)setHasEventsSynced:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)success;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
