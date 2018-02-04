/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCNetworkAddress : NSObject {
    NSString * _interfaceName;
    NSString * _ip;
    unsigned short  _ipVersion;
    unsigned short  _port;
}

@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSString *ip;
@property (nonatomic) unsigned short ipVersion;
@property (nonatomic) unsigned short port;

- (void)dealloc;
- (id)interfaceName;
- (id)ip;
- (unsigned short)ipVersion;
- (bool)isIPv6;
- (unsigned short)port;
- (void)setInterfaceName:(id)arg1;
- (void)setIp:(id)arg1;
- (void)setIpVersion:(unsigned short)arg1;
- (void)setPort:(unsigned short)arg1;

@end