/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsHealthUIEvent : PBCodable <NSCopying> {
    unsigned int  _eventType;
    struct { 
        unsigned int healthIssues : 1; 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
    }  _has;
    NSString * _hashCode;
    unsigned long long  _healthIssues;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int eventType;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasHashCode;
@property (nonatomic) bool hasHealthIssues;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *hashCode;
@property (nonatomic) unsigned long long healthIssues;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (bool)hasEventType;
- (bool)hasHashCode;
- (bool)hasHealthIssues;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hashCode;
- (unsigned long long)healthIssues;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasHealthIssues:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHashCode:(id)arg1;
- (void)setHealthIssues:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
