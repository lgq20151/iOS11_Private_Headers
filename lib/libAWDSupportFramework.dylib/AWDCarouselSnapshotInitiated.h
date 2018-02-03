/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselSnapshotInitiated : PBCodable <NSCopying> {
    AWDCarouselAppInfo * _app;
    struct { 
        unsigned int latency : 1; 
        unsigned int leeway : 1; 
        unsigned int timestamp : 1; 
        unsigned int priority : 1; 
    }  _has;
    unsigned long long  _latency;
    unsigned long long  _leeway;
    int  _priority;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDCarouselAppInfo *app;
@property (nonatomic, readonly) bool hasApp;
@property (nonatomic) bool hasLatency;
@property (nonatomic) bool hasLeeway;
@property (nonatomic) bool hasPriority;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long latency;
@property (nonatomic) unsigned long long leeway;
@property (nonatomic) int priority;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsPriority:(id)arg1;
- (id)app;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApp;
- (bool)hasLatency;
- (bool)hasLeeway;
- (bool)hasPriority;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)latency;
- (unsigned long long)leeway;
- (void)mergeFrom:(id)arg1;
- (int)priority;
- (id)priorityAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApp:(id)arg1;
- (void)setHasLatency:(bool)arg1;
- (void)setHasLeeway:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLatency:(unsigned long long)arg1;
- (void)setLeeway:(unsigned long long)arg1;
- (void)setPriority:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
