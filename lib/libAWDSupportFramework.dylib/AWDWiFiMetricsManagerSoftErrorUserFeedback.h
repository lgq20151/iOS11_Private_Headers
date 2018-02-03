/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerSoftErrorUserFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _softErrorInstanceCounters;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _softErrorUserConfirmationCounters;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) int*softErrorInstanceCounters;
@property (nonatomic, readonly) unsigned long long softErrorInstanceCountersCount;
@property (nonatomic, readonly) int*softErrorUserConfirmationCounters;
@property (nonatomic, readonly) unsigned long long softErrorUserConfirmationCountersCount;
@property (nonatomic) unsigned long long timestamp;

- (void)addSoftErrorInstanceCounters:(int)arg1;
- (void)addSoftErrorUserConfirmationCounters:(int)arg1;
- (void)clearSoftErrorInstanceCounters;
- (void)clearSoftErrorUserConfirmationCounters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSoftErrorInstanceCounters:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSoftErrorUserConfirmationCounters:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (int*)softErrorInstanceCounters;
- (int)softErrorInstanceCountersAtIndex:(unsigned long long)arg1;
- (unsigned long long)softErrorInstanceCountersCount;
- (int*)softErrorUserConfirmationCounters;
- (int)softErrorUserConfirmationCountersAtIndex:(unsigned long long)arg1;
- (unsigned long long)softErrorUserConfirmationCountersCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
