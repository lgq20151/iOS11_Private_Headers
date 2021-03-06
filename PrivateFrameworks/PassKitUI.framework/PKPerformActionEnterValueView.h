/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformActionEnterValueView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPaymentDataProviderDelegate, PKPerformActionView, UITextFieldDelegate> {
    PKPaymentPassAction * _action;
    NSDecimalNumber * _cardBalance;
    NSDecimalNumber * _currentAmount;
    NSNumberFormatter * _currentAmountFormatter;
    <PKPerformActionViewDelegate> * _delegate;
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    PKFelicaPassProperties * _felicaProperties;
    PKNumericSuggestionLastInput * _lastInput;
    NSDecimalNumber * _maxAmount;
    NSDecimalNumber * _minAmount;
    PKEnterValueNewBalanceView * _newBalanceView;
    PKPass * _pass;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentService * _peerPaymentService;
    PKNumericSuggestionsEnterValueAlgorithm * _suggestionGenerator;
    PKNumberPadSuggestionsView * _suggestionView;
}

@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPerformActionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maxAmount;
@property (nonatomic, copy) NSDecimalNumber *minAmount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_amountTopPadding;
- (void)_createSubviews;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (bool)_isCurrentAmountValid;
- (void)_peerPaymentAccountChanged:(id)arg1;
- (void)_readCurrentBalance;
- (bool)_shouldShakeCard:(id)arg1;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(bool)arg2;
- (void)_updateCurrentBalanceWithUpdatedFelicaProperties;
- (void)_updatePeerPaymentAccount;
- (id)amountTextField;
- (id)cardBalance;
- (void)dealloc;
- (id)delegate;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)init;
- (id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3;
- (void)layoutSubviews;
- (id)maxAmount;
- (id)minAmount;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (id)pass;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)saveLastInputValues;
- (id)serviceProviderData;
- (void)setCardBalance:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxAmount:(id)arg1;
- (void)setMinAmount:(id)arg1;
- (id)transactionAmount;
- (id)transactionCurrency;
- (void)willDismissViewController;

@end
