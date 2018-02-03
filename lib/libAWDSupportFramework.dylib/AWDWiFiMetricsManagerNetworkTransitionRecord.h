/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerNetworkTransitionRecord : PBCodable <NSCopying> {
    unsigned long long  _beganTimestamp;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _channelScanCounts;
    unsigned long long  _endedTimestamp;
    unsigned int  _errors;
    unsigned long long  _gotIPTimestamp;
    struct { 
        unsigned int beganTimestamp : 1; 
        unsigned int endedTimestamp : 1; 
        unsigned int gotIPTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int errors : 1; 
        unsigned int state : 1; 
        unsigned int trigger : 1; 
    }  _has;
    unsigned int  _state;
    unsigned long long  _timestamp;
    unsigned int  _trigger;
}

@property (nonatomic) unsigned long long beganTimestamp;
@property (nonatomic, readonly) unsigned int*channelScanCounts;
@property (nonatomic, readonly) unsigned long long channelScanCountsCount;
@property (nonatomic) unsigned long long endedTimestamp;
@property (nonatomic) unsigned int errors;
@property (nonatomic) unsigned long long gotIPTimestamp;
@property (nonatomic) bool hasBeganTimestamp;
@property (nonatomic) bool hasEndedTimestamp;
@property (nonatomic) bool hasErrors;
@property (nonatomic) bool hasGotIPTimestamp;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTrigger;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int trigger;

- (void)addChannelScanCount:(unsigned int)arg1;
- (unsigned long long)beganTimestamp;
- (unsigned int)channelScanCountAtIndex:(unsigned long long)arg1;
- (unsigned int*)channelScanCounts;
- (unsigned long long)channelScanCountsCount;
- (void)clearChannelScanCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)endedTimestamp;
- (unsigned int)errors;
- (unsigned long long)gotIPTimestamp;
- (bool)hasBeganTimestamp;
- (bool)hasEndedTimestamp;
- (bool)hasErrors;
- (bool)hasGotIPTimestamp;
- (bool)hasState;
- (bool)hasTimestamp;
- (bool)hasTrigger;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBeganTimestamp:(unsigned long long)arg1;
- (void)setChannelScanCounts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setEndedTimestamp:(unsigned long long)arg1;
- (void)setErrors:(unsigned int)arg1;
- (void)setGotIPTimestamp:(unsigned long long)arg1;
- (void)setHasBeganTimestamp:(bool)arg1;
- (void)setHasEndedTimestamp:(bool)arg1;
- (void)setHasErrors:(bool)arg1;
- (void)setHasGotIPTimestamp:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTrigger:(unsigned int)arg1;
- (unsigned int)state;
- (unsigned long long)timestamp;
- (unsigned int)trigger;
- (void)writeTo:(id)arg1;

@end
