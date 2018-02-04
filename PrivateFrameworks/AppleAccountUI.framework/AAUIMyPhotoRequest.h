/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIMyPhotoRequest : AARequest {
    ACAccount * _account;
    SSAccount * _iTunesAccount;
    NSString * _serverCacheTag;
}

@property (setter=setiTunesAccount:, nonatomic, retain) SSAccount *iTunesAccount;
@property (nonatomic, copy) NSString *serverCacheTag;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)iTunesAccount;
- (id)initWithAccount:(id)arg1;
- (id)serverCacheTag;
- (void)setServerCacheTag:(id)arg1;
- (void)setiTunesAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end