/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIServerHookResponse : NSObject {
    NSDictionary * _additionalPayload;
    NSURLRequest * _continuationRequest;
}

@property (nonatomic, copy) NSDictionary *additionalPayload;
@property (nonatomic, copy) NSURLRequest *continuationRequest;

- (void).cxx_destruct;
- (id)additionalPayload;
- (id)continuationRequest;
- (void)setAdditionalPayload:(id)arg1;
- (void)setContinuationRequest:(id)arg1;

@end
