/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCredentialMatch : WBSFormAutoFillItem {
    NSURLCredential * _credential;
    NSURLProtectionSpace * _protectionSpace;
}

@property (nonatomic, readonly) NSURLCredential *credential;
@property (nonatomic, readonly) NSURLProtectionSpace *protectionSpace;

- (void).cxx_destruct;
- (id)completion;
- (id)credential;
- (id)initWithCredential:(id)arg1;
- (id)initWithCredential:(id)arg1 protectionSpace:(id)arg2;
- (id)protectionSpace;

@end
