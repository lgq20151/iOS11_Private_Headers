/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWEndpoint : NSObject <NSCopying, NSSecureCoding, NWPrettyDescription> {
    NSObject<OS_nw_endpoint> * _internalEndpoint;
}

@property (nonatomic, retain) NWInterface *interface;
@property (nonatomic, retain) NSObject<OS_nw_endpoint> *internalEndpoint;
@property (nonatomic, retain) NSString *parentEndpointDomain;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (nonatomic, retain) NSData *txtRecord;

+ (Class)copyClassForEndpointType:(int)arg1;
+ (unsigned int)endpointType;
+ (id)endpointWithCEndpoint:(id)arg1;
+ (id)endpointWithInternalEndpoint:(id)arg1;
+ (id)endpointWithProtocolBufferData:(id)arg1;
+ (bool)supportsResolverCallback;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyCEndpoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createProtocolBufferObject;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (id)interface;
- (id)internalEndpoint;
- (bool)isEqual:(id)arg1;
- (id)parentEndpointDomain;
- (id)privateDescription;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)arg1;
- (void)setInterface:(id)arg1;
- (void)setInternalEndpoint:(id)arg1;
- (void)setParentEndpointDomain:(id)arg1;
- (void)setTxtRecord:(id)arg1;
- (id)txtRecord;

@end
