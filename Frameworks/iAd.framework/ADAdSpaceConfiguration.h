/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding> {
    NSString * _adSpaceContextJSON;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    NSSet * _context;
    int  _creativeType;
    NSString * _identifier;
    long long  _options;
    NSURL * _serverURL;
}

@property (nonatomic, copy) NSString *adSpaceContextJSON;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, copy) NSString *authenticationUserName;
@property (nonatomic, copy) NSSet *context;
@property (nonatomic) int creativeType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long options;
@property (nonatomic, copy) NSURL *serverURL;

+ (bool)supportsSecureCoding;

- (id)adSpaceContextJSON;
- (id)advertisingSection;
- (id)authenticationUserName;
- (id)context;
- (int)creativeType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (long long)options;
- (id)serverURL;
- (void)setAdSpaceContextJSON:(id)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCreativeType:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setServerURL:(id)arg1;

@end