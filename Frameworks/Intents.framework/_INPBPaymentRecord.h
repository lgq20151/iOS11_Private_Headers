/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPaymentRecord : PBCodable <NSCopying> {
    _INPBCurrencyAmount * _currencyAmount;
    _INPBCurrencyAmount * _feeAmount;
    struct { 
        unsigned int status : 1; 
    }  _has;
    _INPBString * _note;
    _INPBContact * _payee;
    _INPBContact * _payer;
    _INPBPaymentMethodValue * _paymentMethod;
    int  _status;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCurrencyAmount *currencyAmount;
@property (nonatomic, retain) _INPBCurrencyAmount *feeAmount;
@property (nonatomic, readonly) bool hasCurrencyAmount;
@property (nonatomic, readonly) bool hasFeeAmount;
@property (nonatomic, readonly) bool hasNote;
@property (nonatomic, readonly) bool hasPayee;
@property (nonatomic, readonly) bool hasPayer;
@property (nonatomic, readonly) bool hasPaymentMethod;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) _INPBString *note;
@property (nonatomic, retain) _INPBContact *payee;
@property (nonatomic, retain) _INPBContact *payer;
@property (nonatomic, retain) _INPBPaymentMethodValue *paymentMethod;
@property (nonatomic) int status;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feeAmount;
- (bool)hasCurrencyAmount;
- (bool)hasFeeAmount;
- (bool)hasNote;
- (bool)hasPayee;
- (bool)hasPayer;
- (bool)hasPaymentMethod;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)note;
- (id)payee;
- (id)payer;
- (id)paymentMethod;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setFeeAmount:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setNote:(id)arg1;
- (void)setPayee:(id)arg1;
- (void)setPayer:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
