/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselSnapshotTaken : PBCodable <NSCopying> {
    AWDCarouselAppInfo * _app;
    struct { 
        unsigned int timeToCaptureMillis : 1; 
        unsigned int timeToGenerateMillis : 1; 
        unsigned int timeToSaveMillis : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timeToCaptureMillis;
    unsigned long long  _timeToGenerateMillis;
    unsigned long long  _timeToSaveMillis;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDCarouselAppInfo *app;
@property (nonatomic, readonly) bool hasApp;
@property (nonatomic) bool hasTimeToCaptureMillis;
@property (nonatomic) bool hasTimeToGenerateMillis;
@property (nonatomic) bool hasTimeToSaveMillis;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timeToCaptureMillis;
@property (nonatomic) unsigned long long timeToGenerateMillis;
@property (nonatomic) unsigned long long timeToSaveMillis;
@property (nonatomic) unsigned long long timestamp;

- (id)app;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApp;
- (bool)hasTimeToCaptureMillis;
- (bool)hasTimeToGenerateMillis;
- (bool)hasTimeToSaveMillis;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApp:(id)arg1;
- (void)setHasTimeToCaptureMillis:(bool)arg1;
- (void)setHasTimeToGenerateMillis:(bool)arg1;
- (void)setHasTimeToSaveMillis:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeToCaptureMillis:(unsigned long long)arg1;
- (void)setTimeToGenerateMillis:(unsigned long long)arg1;
- (void)setTimeToSaveMillis:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timeToCaptureMillis;
- (unsigned long long)timeToGenerateMillis;
- (unsigned long long)timeToSaveMillis;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
