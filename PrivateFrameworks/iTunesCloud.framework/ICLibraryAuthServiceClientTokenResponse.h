/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICLibraryAuthServiceClientTokenResponse : NSObject <NSCopying> {
    int  _resultCode;
    NSString * _serverHostName;
    long long  _serverInstance;
    bool  _success;
    ICLibraryAuthServiceClientTokenResult * _tokenResult;
}

@property (nonatomic, readonly) int resultCode;
@property (nonatomic, readonly, copy) NSString *serverHostName;
@property (nonatomic, readonly) long long serverInstance;
@property (getter=isSuccess, nonatomic) bool success;
@property (nonatomic, readonly, copy) ICLibraryAuthServiceClientTokenResult *tokenResult;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithResponseDictionary:(id)arg1;
- (id)initWithResultCode:(int)arg1;
- (bool)isSuccess;
- (int)resultCode;
- (id)serverHostName;
- (long long)serverInstance;
- (void)setSuccess:(bool)arg1;
- (id)tokenResult;

@end