/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCreditCardDataController : NSObject {
    NSMapTable * _creditCardDataKeychainReferences;
}

@property (nonatomic, readonly) NSArray *creditCardData;

+ (bool)hasCreditCardData;

- (void).cxx_destruct;
- (id)_neverSavedCreditCardSuffixFromCard:(id)arg1;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1;
- (void)_removeNeverSaveCreditCardData:(id)arg1;
- (id)_uniqueCardNameForCardName:(id)arg1;
- (void)clearCreditCardData;
- (id)creditCardData;
- (void)creditCardDataDidChange;
- (id)defaultNameForCardOfType:(unsigned long long)arg1 cardholderName:(id)arg2;
- (id)existingCardWithNumber:(id)arg1;
- (id)init;
- (void)invalidateCreditCardData;
- (bool)isCreditCardDataSaved:(id)arg1;
- (void)neverSaveCreditCardData:(id)arg1;
- (void)removeCreditCardData:(id)arg1;
- (void)replaceCreditCardData:(id)arg1 withCard:(id)arg2;
- (id)savableCreditCardDataInForm:(id)arg1;
- (void)saveCreditCardData:(id)arg1;
- (void)saveCreditCardDataIfAllowed:(id)arg1;
- (bool)shouldAddCardWithNumber:(id)arg1;
- (bool)shouldNeverSaveCardWithNumber:(id)arg1;

@end
