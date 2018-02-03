/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMUserSwitchContext : NSObject {
    bool  _secondaryActionRequired;
    NSData * _setupData;
    NSString * _shortLivedToken;
}

@property (nonatomic) bool secondaryActionRequired;
@property (nonatomic, copy) NSData *setupData;
@property (nonatomic, copy) NSString *shortLivedToken;

+ (id)contextWithDataRepresentation:(id)arg1;
+ (id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(bool)arg3;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)description;
- (id)dictRepresentation;
- (bool)secondaryActionRequired;
- (void)setSecondaryActionRequired:(bool)arg1;
- (void)setSetupData:(id)arg1;
- (void)setShortLivedToken:(id)arg1;
- (id)setupData;
- (id)shortLivedToken;

@end
