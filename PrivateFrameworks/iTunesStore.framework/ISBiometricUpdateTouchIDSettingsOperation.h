/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation {
    NSNumber * _accountIdentifier;
    NSString * _attestationString;
    ISBiometricStore * _biometricStore;
    bool  _regeneratePublicKey;
    id /* block */  _resultBlock;
    long long  _status;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSString *attestationString;
@property (nonatomic, retain) ISBiometricStore *biometricStore;
@property bool regeneratePublicKey;
@property (copy) id /* block */ resultBlock;
@property (readonly) long long status;

- (void).cxx_destruct;
- (id)_newUpdateTouchIDSettingsOperation;
- (id)accountIdentifier;
- (id)attestationString;
- (id)biometricStore;
- (id)initWithAccountIdentifier:(id)arg1;
- (bool)regeneratePublicKey;
- (id /* block */)resultBlock;
- (void)run;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAttestationString:(id)arg1;
- (void)setBiometricStore:(id)arg1;
- (void)setRegeneratePublicKey:(bool)arg1;
- (void)setResultBlock:(id /* block */)arg1;
- (long long)status;

@end
