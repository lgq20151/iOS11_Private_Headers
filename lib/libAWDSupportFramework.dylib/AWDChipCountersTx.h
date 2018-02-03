/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDChipCountersTx : PBCodable <NSCopying> {
    struct { 
        unsigned int txbyte : 1; 
        unsigned int txchit : 1; 
        unsigned int txcmiss : 1; 
        unsigned int txctl : 1; 
        unsigned int txerror : 1; 
        unsigned int txframe : 1; 
        unsigned int txnoassoc : 1; 
        unsigned int txnobuf : 1; 
        unsigned int txprshort : 1; 
        unsigned int txretrans : 1; 
        unsigned int txrunt : 1; 
        unsigned int txserr : 1; 
    }  _has;
    unsigned long long  _txbyte;
    unsigned long long  _txchit;
    unsigned long long  _txcmiss;
    unsigned long long  _txctl;
    unsigned long long  _txerror;
    unsigned long long  _txframe;
    unsigned long long  _txnoassoc;
    unsigned long long  _txnobuf;
    unsigned long long  _txprshort;
    unsigned long long  _txretrans;
    unsigned long long  _txrunt;
    unsigned long long  _txserr;
}

@property (nonatomic) bool hasTxbyte;
@property (nonatomic) bool hasTxchit;
@property (nonatomic) bool hasTxcmiss;
@property (nonatomic) bool hasTxctl;
@property (nonatomic) bool hasTxerror;
@property (nonatomic) bool hasTxframe;
@property (nonatomic) bool hasTxnoassoc;
@property (nonatomic) bool hasTxnobuf;
@property (nonatomic) bool hasTxprshort;
@property (nonatomic) bool hasTxretrans;
@property (nonatomic) bool hasTxrunt;
@property (nonatomic) bool hasTxserr;
@property (nonatomic) unsigned long long txbyte;
@property (nonatomic) unsigned long long txchit;
@property (nonatomic) unsigned long long txcmiss;
@property (nonatomic) unsigned long long txctl;
@property (nonatomic) unsigned long long txerror;
@property (nonatomic) unsigned long long txframe;
@property (nonatomic) unsigned long long txnoassoc;
@property (nonatomic) unsigned long long txnobuf;
@property (nonatomic) unsigned long long txprshort;
@property (nonatomic) unsigned long long txretrans;
@property (nonatomic) unsigned long long txrunt;
@property (nonatomic) unsigned long long txserr;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTxbyte;
- (bool)hasTxchit;
- (bool)hasTxcmiss;
- (bool)hasTxctl;
- (bool)hasTxerror;
- (bool)hasTxframe;
- (bool)hasTxnoassoc;
- (bool)hasTxnobuf;
- (bool)hasTxprshort;
- (bool)hasTxretrans;
- (bool)hasTxrunt;
- (bool)hasTxserr;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTxbyte:(bool)arg1;
- (void)setHasTxchit:(bool)arg1;
- (void)setHasTxcmiss:(bool)arg1;
- (void)setHasTxctl:(bool)arg1;
- (void)setHasTxerror:(bool)arg1;
- (void)setHasTxframe:(bool)arg1;
- (void)setHasTxnoassoc:(bool)arg1;
- (void)setHasTxnobuf:(bool)arg1;
- (void)setHasTxprshort:(bool)arg1;
- (void)setHasTxretrans:(bool)arg1;
- (void)setHasTxrunt:(bool)arg1;
- (void)setHasTxserr:(bool)arg1;
- (void)setTxbyte:(unsigned long long)arg1;
- (void)setTxchit:(unsigned long long)arg1;
- (void)setTxcmiss:(unsigned long long)arg1;
- (void)setTxctl:(unsigned long long)arg1;
- (void)setTxerror:(unsigned long long)arg1;
- (void)setTxframe:(unsigned long long)arg1;
- (void)setTxnoassoc:(unsigned long long)arg1;
- (void)setTxnobuf:(unsigned long long)arg1;
- (void)setTxprshort:(unsigned long long)arg1;
- (void)setTxretrans:(unsigned long long)arg1;
- (void)setTxrunt:(unsigned long long)arg1;
- (void)setTxserr:(unsigned long long)arg1;
- (unsigned long long)txbyte;
- (unsigned long long)txchit;
- (unsigned long long)txcmiss;
- (unsigned long long)txctl;
- (unsigned long long)txerror;
- (unsigned long long)txframe;
- (unsigned long long)txnoassoc;
- (unsigned long long)txnobuf;
- (unsigned long long)txprshort;
- (unsigned long long)txretrans;
- (unsigned long long)txrunt;
- (unsigned long long)txserr;
- (void)writeTo:(id)arg1;

@end
