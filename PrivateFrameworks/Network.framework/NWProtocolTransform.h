/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWProtocolTransform : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_protocol_transform> * _internalTransform;
}

@property (nonatomic) int dataMode;
@property (nonatomic) bool disablePathFallback;
@property (nonatomic) unsigned long long fallbackMode;
@property (retain) NSObject<OS_nw_protocol_transform> *internalTransform;
@property (nonatomic) unsigned char ipProtocol;
@property (nonatomic) int multipathService;
@property (nonatomic) bool noProxy;
@property (nonatomic) bool prohibitDirect;
@property (nonatomic, copy) NWEndpoint *replacementEndpoint;
@property (nonatomic) bool tfo;
@property (nonatomic) bool tfoNoCookie;
@property (nonatomic) bool useTFOHeuristics;

- (void).cxx_destruct;
- (void)appendProtocol:(id)arg1 atLevel:(int)arg2;
- (void)clearProtocolsAtLevel:(int)arg1;
- (int)dataMode;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (bool)disablePathFallback;
- (void)disableProtocol:(struct nw_protocol_identifier { BOOL x1[32]; int x2; int x3; }*)arg1;
- (unsigned long long)fallbackMode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCTransform:(id)arg1;
- (id)internalTransform;
- (unsigned char)ipProtocol;
- (bool)isEqual:(id)arg1;
- (int)multipathService;
- (bool)noProxy;
- (id)privateDescription;
- (bool)prohibitDirect;
- (id)replacementEndpoint;
- (void)setDataMode:(int)arg1;
- (void)setDisablePathFallback:(bool)arg1;
- (void)setFallbackMode:(unsigned long long)arg1;
- (void)setInternalTransform:(id)arg1;
- (void)setIpProtocol:(unsigned char)arg1;
- (void)setMultipathService:(int)arg1;
- (void)setNoProxy:(bool)arg1;
- (void)setProhibitDirect:(bool)arg1;
- (void)setReplacementEndpoint:(id)arg1;
- (void)setTfo:(bool)arg1;
- (void)setTfoNoCookie:(bool)arg1;
- (void)setUseTFOHeuristics:(bool)arg1;
- (bool)tfo;
- (bool)tfoNoCookie;
- (bool)useTFOHeuristics;

@end
