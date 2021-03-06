/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetCustomURLRequest : NSObject {
    struct __CFDictionary { } * _customURLRequest;
    struct __CFDictionary { } * _customURLResponse;
    unsigned long long  _requestID;
}

@property (nonatomic, readonly) unsigned long long requestID;

+ (id)requestWithRequest:(struct __CFDictionary { }*)arg1 id:(unsigned long long)arg2;

- (struct __CFDictionary { }*)customURLRequest;
- (struct __CFDictionary { }*)customURLResponse;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(struct __CFDictionary { }*)arg1 id:(unsigned long long)arg2;
- (unsigned long long)requestID;
- (void)setCustomURLRequest:(struct __CFDictionary { }*)arg1;
- (void)setCustomURLResponse:(struct __CFDictionary { }*)arg1;

@end
