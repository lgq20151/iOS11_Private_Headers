/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBClientConnectionReport : PBCodable <NSCopying> {
    long long  _bytesReceived;
    long long  _bytesSent;
    long long  _connectionDuration;
    int  _connectionJoiningFailure;
    int  _connectionJoiningLbConnectionMigration;
    int  _connectionJoiningLbConnectionState;
    unsigned long long  _connectionServiceId;
    int  _dataPathResult;
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int connectionDuration : 1; 
        unsigned int connectionServiceId : 1; 
        unsigned int timeToConnectionFailure : 1; 
        unsigned int timeToFirstResponse : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionJoiningFailure : 1; 
        unsigned int connectionJoiningLbConnectionMigration : 1; 
        unsigned int connectionJoiningLbConnectionState : 1; 
        unsigned int dataPathResult : 1; 
    }  _has;
    long long  _timeToConnectionFailure;
    long long  _timeToFirstResponse;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long bytesReceived;
@property (nonatomic) long long bytesSent;
@property (nonatomic) long long connectionDuration;
@property (nonatomic) int connectionJoiningFailure;
@property (nonatomic) int connectionJoiningLbConnectionMigration;
@property (nonatomic) int connectionJoiningLbConnectionState;
@property (nonatomic) unsigned long long connectionServiceId;
@property (nonatomic) int dataPathResult;
@property (nonatomic) bool hasBytesReceived;
@property (nonatomic) bool hasBytesSent;
@property (nonatomic) bool hasConnectionDuration;
@property (nonatomic) bool hasConnectionJoiningFailure;
@property (nonatomic) bool hasConnectionJoiningLbConnectionMigration;
@property (nonatomic) bool hasConnectionJoiningLbConnectionState;
@property (nonatomic) bool hasConnectionServiceId;
@property (nonatomic) bool hasDataPathResult;
@property (nonatomic) bool hasTimeToConnectionFailure;
@property (nonatomic) bool hasTimeToFirstResponse;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long timeToConnectionFailure;
@property (nonatomic) long long timeToFirstResponse;
@property (nonatomic) unsigned long long timestamp;

- (long long)bytesReceived;
- (long long)bytesSent;
- (long long)connectionDuration;
- (int)connectionJoiningFailure;
- (int)connectionJoiningLbConnectionMigration;
- (int)connectionJoiningLbConnectionState;
- (unsigned long long)connectionServiceId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataPathResult;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBytesReceived;
- (bool)hasBytesSent;
- (bool)hasConnectionDuration;
- (bool)hasConnectionJoiningFailure;
- (bool)hasConnectionJoiningLbConnectionMigration;
- (bool)hasConnectionJoiningLbConnectionState;
- (bool)hasConnectionServiceId;
- (bool)hasDataPathResult;
- (bool)hasTimeToConnectionFailure;
- (bool)hasTimeToFirstResponse;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBytesReceived:(long long)arg1;
- (void)setBytesSent:(long long)arg1;
- (void)setConnectionDuration:(long long)arg1;
- (void)setConnectionJoiningFailure:(int)arg1;
- (void)setConnectionJoiningLbConnectionMigration:(int)arg1;
- (void)setConnectionJoiningLbConnectionState:(int)arg1;
- (void)setConnectionServiceId:(unsigned long long)arg1;
- (void)setDataPathResult:(int)arg1;
- (void)setHasBytesReceived:(bool)arg1;
- (void)setHasBytesSent:(bool)arg1;
- (void)setHasConnectionDuration:(bool)arg1;
- (void)setHasConnectionJoiningFailure:(bool)arg1;
- (void)setHasConnectionJoiningLbConnectionMigration:(bool)arg1;
- (void)setHasConnectionJoiningLbConnectionState:(bool)arg1;
- (void)setHasConnectionServiceId:(bool)arg1;
- (void)setHasDataPathResult:(bool)arg1;
- (void)setHasTimeToConnectionFailure:(bool)arg1;
- (void)setHasTimeToFirstResponse:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeToConnectionFailure:(long long)arg1;
- (void)setTimeToFirstResponse:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeToConnectionFailure;
- (long long)timeToFirstResponse;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
