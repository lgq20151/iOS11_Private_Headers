/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {
    AVAssetResourceLoadingContentInformationRequestInternal * _contentInformationRequest;
}

@property (getter=isByteRangeAccessSupported, nonatomic) bool byteRangeAccessSupported;
@property (nonatomic) long long contentLength;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSDate *renewalDate;

- (long long)contentLength;
- (id)contentType;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithLoadingRequest:(id)arg1;
- (bool)isByteRangeAccessSupported;
- (bool)isDiskCachingPermitted;
- (id)propertyList;
- (id)renewalDate;
- (void)setByteRangeAccessSupported:(bool)arg1;
- (void)setContentLength:(long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setDiskCachingPermitted:(bool)arg1;
- (void)setRenewalDate:(id)arg1;

@end
