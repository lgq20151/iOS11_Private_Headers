/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselSnapshotScheduled : PBCodable <NSCopying> {
    AWDCarouselAppInfo * _app;
    bool  _freebee;
    struct { 
        unsigned int interval : 1; 
        unsigned int timestamp : 1; 
        unsigned int reason : 1; 
        unsigned int freebee : 1; 
        unsigned int systemScheduled : 1; 
    }  _has;
    unsigned long long  _interval;
    int  _reason;
    bool  _systemScheduled;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDCarouselAppInfo *app;
@property (nonatomic) bool freebee;
@property (nonatomic, readonly) bool hasApp;
@property (nonatomic) bool hasFreebee;
@property (nonatomic) bool hasInterval;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSystemScheduled;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) int reason;
@property (nonatomic) bool systemScheduled;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsReason:(id)arg1;
- (id)app;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)freebee;
- (bool)hasApp;
- (bool)hasFreebee;
- (bool)hasInterval;
- (bool)hasReason;
- (bool)hasSystemScheduled;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned long long)interval;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setApp:(id)arg1;
- (void)setFreebee:(bool)arg1;
- (void)setHasFreebee:(bool)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSystemScheduled:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setReason:(int)arg1;
- (void)setSystemScheduled:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)systemScheduled;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
