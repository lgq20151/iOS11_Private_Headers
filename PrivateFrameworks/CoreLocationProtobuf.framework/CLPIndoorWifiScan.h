/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPIndoorWifiScan : PBCodable <NSCopying> {
    double  _age;
    NSString * _bundleId;
    int  _channel;
    struct { 
        unsigned int age : 1; 
        unsigned int hidden : 1; 
    }  _has;
    int  _hidden;
    NSString * _mac;
    int  _rssi;
    double  _timestamp;
}

@property (nonatomic) double age;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) int channel;
@property (nonatomic) bool hasAge;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasHidden;
@property (nonatomic) int hidden;
@property (nonatomic, retain) NSString *mac;
@property (nonatomic) int rssi;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (double)age;
- (id)bundleId;
- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAge;
- (bool)hasBundleId;
- (bool)hasHidden;
- (unsigned long long)hash;
- (int)hidden;
- (bool)isEqual:(id)arg1;
- (id)mac;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (void)setAge:(double)arg1;
- (void)setBundleId:(id)arg1;
- (void)setChannel:(int)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHidden:(int)arg1;
- (void)setMac:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end