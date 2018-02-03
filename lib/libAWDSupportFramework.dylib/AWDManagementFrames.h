/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDManagementFrames : PBCodable <NSCopying> {
    unsigned long long  _aTIM;
    unsigned long long  _action;
    unsigned long long  _assocRequest;
    unsigned long long  _assocResponse;
    unsigned long long  _auth;
    unsigned long long  _beacon;
    unsigned long long  _deauth;
    unsigned long long  _disassoc;
    struct { 
        unsigned int aTIM : 1; 
        unsigned int action : 1; 
        unsigned int assocRequest : 1; 
        unsigned int assocResponse : 1; 
        unsigned int auth : 1; 
        unsigned int beacon : 1; 
        unsigned int deauth : 1; 
        unsigned int disassoc : 1; 
        unsigned int probeRequest : 1; 
        unsigned int probeResponse : 1; 
        unsigned int reassocRequest : 1; 
        unsigned int reassocResponse : 1; 
    }  _has;
    unsigned long long  _probeRequest;
    unsigned long long  _probeResponse;
    unsigned long long  _reassocRequest;
    unsigned long long  _reassocResponse;
}

@property (nonatomic) unsigned long long aTIM;
@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long assocRequest;
@property (nonatomic) unsigned long long assocResponse;
@property (nonatomic) unsigned long long auth;
@property (nonatomic) unsigned long long beacon;
@property (nonatomic) unsigned long long deauth;
@property (nonatomic) unsigned long long disassoc;
@property (nonatomic) bool hasATIM;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasAssocRequest;
@property (nonatomic) bool hasAssocResponse;
@property (nonatomic) bool hasAuth;
@property (nonatomic) bool hasBeacon;
@property (nonatomic) bool hasDeauth;
@property (nonatomic) bool hasDisassoc;
@property (nonatomic) bool hasProbeRequest;
@property (nonatomic) bool hasProbeResponse;
@property (nonatomic) bool hasReassocRequest;
@property (nonatomic) bool hasReassocResponse;
@property (nonatomic) unsigned long long probeRequest;
@property (nonatomic) unsigned long long probeResponse;
@property (nonatomic) unsigned long long reassocRequest;
@property (nonatomic) unsigned long long reassocResponse;

- (unsigned long long)aTIM;
- (unsigned long long)action;
- (unsigned long long)assocRequest;
- (unsigned long long)assocResponse;
- (unsigned long long)auth;
- (unsigned long long)beacon;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deauth;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)disassoc;
- (bool)hasATIM;
- (bool)hasAction;
- (bool)hasAssocRequest;
- (bool)hasAssocResponse;
- (bool)hasAuth;
- (bool)hasBeacon;
- (bool)hasDeauth;
- (bool)hasDisassoc;
- (bool)hasProbeRequest;
- (bool)hasProbeResponse;
- (bool)hasReassocRequest;
- (bool)hasReassocResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)probeRequest;
- (unsigned long long)probeResponse;
- (bool)readFrom:(id)arg1;
- (unsigned long long)reassocRequest;
- (unsigned long long)reassocResponse;
- (void)setATIM:(unsigned long long)arg1;
- (void)setAction:(unsigned long long)arg1;
- (void)setAssocRequest:(unsigned long long)arg1;
- (void)setAssocResponse:(unsigned long long)arg1;
- (void)setAuth:(unsigned long long)arg1;
- (void)setBeacon:(unsigned long long)arg1;
- (void)setDeauth:(unsigned long long)arg1;
- (void)setDisassoc:(unsigned long long)arg1;
- (void)setHasATIM:(bool)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasAssocRequest:(bool)arg1;
- (void)setHasAssocResponse:(bool)arg1;
- (void)setHasAuth:(bool)arg1;
- (void)setHasBeacon:(bool)arg1;
- (void)setHasDeauth:(bool)arg1;
- (void)setHasDisassoc:(bool)arg1;
- (void)setHasProbeRequest:(bool)arg1;
- (void)setHasProbeResponse:(bool)arg1;
- (void)setHasReassocRequest:(bool)arg1;
- (void)setHasReassocResponse:(bool)arg1;
- (void)setProbeRequest:(unsigned long long)arg1;
- (void)setProbeResponse:(unsigned long long)arg1;
- (void)setReassocRequest:(unsigned long long)arg1;
- (void)setReassocResponse:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
