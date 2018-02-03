/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPBPath : PBCodable <NSCopying> {
    NSMutableArray * _agents;
    NSString * _clientUUID;
    NWPBInterface * _delegateInterface;
    bool  _direct;
    NWPBInterface * _directInterface;
    NWPBEndpoint * _endpoint;
    struct { 
        unsigned int status : 1; 
        unsigned int direct : 1; 
        unsigned int ipv4 : 1; 
        unsigned int ipv6 : 1; 
        unsigned int local : 1; 
    }  _has;
    bool  _ipv4;
    bool  _ipv6;
    bool  _local;
    NWPBParameters * _parameters;
    int  _status;
}

@property (nonatomic, retain) NSMutableArray *agents;
@property (nonatomic, retain) NSString *clientUUID;
@property (nonatomic, retain) NWPBInterface *delegateInterface;
@property (nonatomic) bool direct;
@property (nonatomic, retain) NWPBInterface *directInterface;
@property (nonatomic, retain) NWPBEndpoint *endpoint;
@property (nonatomic, readonly) bool hasClientUUID;
@property (nonatomic, readonly) bool hasDelegateInterface;
@property (nonatomic) bool hasDirect;
@property (nonatomic, readonly) bool hasDirectInterface;
@property (nonatomic, readonly) bool hasEndpoint;
@property (nonatomic) bool hasIpv4;
@property (nonatomic) bool hasIpv6;
@property (nonatomic) bool hasLocal;
@property (nonatomic, readonly) bool hasParameters;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool ipv4;
@property (nonatomic) bool ipv6;
@property (nonatomic) bool local;
@property (nonatomic, retain) NWPBParameters *parameters;
@property (nonatomic) int status;

+ (Class)agentsType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addAgents:(id)arg1;
- (id)agents;
- (id)agentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)agentsCount;
- (void)clearAgents;
- (id)clientUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegateInterface;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)direct;
- (id)directInterface;
- (id)endpoint;
- (bool)hasClientUUID;
- (bool)hasDelegateInterface;
- (bool)hasDirect;
- (bool)hasDirectInterface;
- (bool)hasEndpoint;
- (bool)hasIpv4;
- (bool)hasIpv6;
- (bool)hasLocal;
- (bool)hasParameters;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)ipv4;
- (bool)ipv6;
- (bool)isEqual:(id)arg1;
- (bool)local;
- (void)mergeFrom:(id)arg1;
- (id)parameters;
- (bool)readFrom:(id)arg1;
- (void)setAgents:(id)arg1;
- (void)setClientUUID:(id)arg1;
- (void)setDelegateInterface:(id)arg1;
- (void)setDirect:(bool)arg1;
- (void)setDirectInterface:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setHasDirect:(bool)arg1;
- (void)setHasIpv4:(bool)arg1;
- (void)setHasIpv6:(bool)arg1;
- (void)setHasLocal:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIpv4:(bool)arg1;
- (void)setIpv6:(bool)arg1;
- (void)setLocal:(bool)arg1;
- (void)setParameters:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end