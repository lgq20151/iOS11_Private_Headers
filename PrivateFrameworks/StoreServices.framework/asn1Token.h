/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1Token : NSObject {
    unsigned char  mClass;
    const char * mContent;
    unsigned long long  mIdentifier;
    unsigned long long  mLength;
}

@property (readonly) const char *content;
@property (readonly) unsigned long long identifier;
@property (readonly) unsigned long long length;
@property (readonly) unsigned char tokenClass;

+ (id)readOpaqueTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1;
+ (id)readTokenFromBuffer:(const char *)arg1 opaque:(bool)arg2;

- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(bool)arg5;
- (const char *)content;
- (id)description;
- (unsigned long long)identifier;
- (unsigned long long)length;
- (unsigned char)tokenClass;

@end