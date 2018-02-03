/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMDNSResponderResolveStatsDomain : PBCodable <NSCopying> {
    NSMutableArray * _hostnames;
    NSString * _name;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSMutableArray *hostnames;
@property (nonatomic, retain) NSString *name;

+ (Class)hostnameType;

- (void)addHostname:(id)arg1;
- (void)clearHostnames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (unsigned long long)hash;
- (id)hostnameAtIndex:(unsigned long long)arg1;
- (id)hostnames;
- (unsigned long long)hostnamesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHostnames:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
