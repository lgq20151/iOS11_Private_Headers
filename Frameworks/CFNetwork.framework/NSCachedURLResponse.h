/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSCachedURLResponse : NSObject <NSCopying, NSSecureCoding> {
    NSCachedURLResponseInternal * _internal;
}

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSURLResponse *response;
@property (readonly) unsigned long long storagePolicy;
@property (readonly, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (const struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFCachedURLResponse {} *x2; }*)_CFCachedURLResponse;
- (void)_deallocInternalCFCachedURLResponse;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFCachedURLResponse {} *x2; }*)arg1;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFCachedURLResponse {} *x2; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataArray;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1 data:(id)arg2;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)response;
- (unsigned long long)storagePolicy;
- (id)userInfo;

@end
