/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate> {
    CommerceRemoteUIDelegate * _commerceDelegate;
    <PSCloudStorageOffersManagerDelegate> * _delegate;
    unsigned long long  _requiredStorageThreshold;
    bool  _shouldOfferFamilySharePlansOnly;
    bool  _skipCompletionAlert;
    bool  _skipRetryWithoutToken;
    bool  _supportsModernAlerts;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSCloudStorageOffersManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long requiredStorageThreshold;
@property (nonatomic) bool shouldOfferFamilySharePlansOnly;
@property (nonatomic) bool skipCompletionAlert;
@property (nonatomic) bool skipRetryWithoutToken;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsModernAlerts;

- (void).cxx_destruct;
- (void)_setupFlowWithNavigationController:(id)arg1 modally:(bool)arg2;
- (void)beginFlowWithNavigationController:(id)arg1 modally:(bool)arg2;
- (void)beginFlowWithNavigationController:(id)arg1 purchaseToken:(id)arg2 buyParameters:(id)arg3 requestHeaders:(id)arg4 modally:(bool)arg5;
- (void)cancelLoad;
- (void)commerceDelegate:(id)arg1 didCompleteWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3;
- (void)commerceDelegateDidCancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)requiredStorageThreshold;
- (void)setDelegate:(id)arg1;
- (void)setRequiredStorageThreshold:(unsigned long long)arg1;
- (void)setShouldOfferFamilySharePlansOnly:(bool)arg1;
- (void)setSkipCompletionAlert:(bool)arg1;
- (void)setSkipRetryWithoutToken:(bool)arg1;
- (void)setSupportsModernAlerts:(bool)arg1;
- (bool)shouldOfferFamilySharePlansOnly;
- (bool)skipCompletionAlert;
- (bool)skipRetryWithoutToken;
- (bool)supportsModernAlerts;

@end