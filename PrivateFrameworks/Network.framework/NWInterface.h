/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWInterface : NSObject <NSCopying, NSSecureCoding, NWPrettyDescription> {
    NSObject<OS_nw_interface> * _internalInterface;
}

@property (nonatomic, readonly) NWInterface *delegateInterface;
@property (getter=isExpensive, nonatomic, readonly) bool expensive;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) unsigned long long interfaceIndex;
@property (nonatomic, readonly) NSString *interfaceName;
@property (retain) NSObject<OS_nw_interface> *internalInterface;
@property (nonatomic, readonly) long long mtu;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (nonatomic, readonly) long long subtype;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *typeString;

+ (id)descriptionForSubtype:(long long)arg1;
+ (id)descriptionForType:(long long)arg1;
+ (id)interfaceWithProtocolBufferData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createProtocolBufferObject;
- (id)delegateInterface;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generation;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)initWithInterfaceIndex:(unsigned long long)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (unsigned long long)interfaceIndex;
- (id)interfaceName;
- (id)internalInterface;
- (bool)isDeepEqual:(id)arg1;
- (bool)isExpensive;
- (bool)isShallowEqual:(id)arg1;
- (long long)mtu;
- (id)privateDescription;
- (void)setInternalInterface:(id)arg1;
- (long long)subtype;
- (long long)type;
- (id)typeString;

@end
