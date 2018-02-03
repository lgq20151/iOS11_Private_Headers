/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSWebTunnelRequestCompleted : PBCodable <NSCopying> {
    int  _deliveryType;
    struct { 
        unsigned int requestSize : 1; 
        unsigned int timeTaken : 1; 
        unsigned int timestamp : 1; 
        unsigned int deliveryType : 1; 
        unsigned int tunnelError : 1; 
        unsigned int reversePushAttempted : 1; 
    }  _has;
    unsigned long long  _requestSize;
    bool  _reversePushAttempted;
    NSString * _serviceIdentifier;
    unsigned long long  _timeTaken;
    unsigned long long  _timestamp;
    int  _tunnelError;
}

@property (nonatomic) int deliveryType;
@property (nonatomic) bool hasDeliveryType;
@property (nonatomic) bool hasRequestSize;
@property (nonatomic) bool hasReversePushAttempted;
@property (nonatomic, readonly) bool hasServiceIdentifier;
@property (nonatomic) bool hasTimeTaken;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTunnelError;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic) bool reversePushAttempted;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) unsigned long long timeTaken;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int tunnelError;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deliveryType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeliveryType;
- (bool)hasRequestSize;
- (bool)hasReversePushAttempted;
- (bool)hasServiceIdentifier;
- (bool)hasTimeTaken;
- (bool)hasTimestamp;
- (bool)hasTunnelError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)requestSize;
- (bool)reversePushAttempted;
- (id)serviceIdentifier;
- (void)setDeliveryType:(int)arg1;
- (void)setHasDeliveryType:(bool)arg1;
- (void)setHasRequestSize:(bool)arg1;
- (void)setHasReversePushAttempted:(bool)arg1;
- (void)setHasTimeTaken:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTunnelError:(bool)arg1;
- (void)setRequestSize:(unsigned long long)arg1;
- (void)setReversePushAttempted:(bool)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setTimeTaken:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTunnelError:(int)arg1;
- (unsigned long long)timeTaken;
- (unsigned long long)timestamp;
- (int)tunnelError;
- (void)writeTo:(id)arg1;

@end
