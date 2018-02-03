/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDChipErrorCountersTx : PBCodable <NSCopying> {
    struct { 
        unsigned int txchanrej : 1; 
        unsigned int txexptime : 1; 
        unsigned int txphycrs : 1; 
        unsigned int txphyerr : 1; 
        unsigned int txuflo : 1; 
    }  _has;
    unsigned long long  _txchanrej;
    unsigned long long  _txexptime;
    unsigned long long  _txphycrs;
    unsigned long long  _txphyerr;
    unsigned long long  _txuflo;
}

@property (nonatomic) bool hasTxchanrej;
@property (nonatomic) bool hasTxexptime;
@property (nonatomic) bool hasTxphycrs;
@property (nonatomic) bool hasTxphyerr;
@property (nonatomic) bool hasTxuflo;
@property (nonatomic) unsigned long long txchanrej;
@property (nonatomic) unsigned long long txexptime;
@property (nonatomic) unsigned long long txphycrs;
@property (nonatomic) unsigned long long txphyerr;
@property (nonatomic) unsigned long long txuflo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTxchanrej;
- (bool)hasTxexptime;
- (bool)hasTxphycrs;
- (bool)hasTxphyerr;
- (bool)hasTxuflo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTxchanrej:(bool)arg1;
- (void)setHasTxexptime:(bool)arg1;
- (void)setHasTxphycrs:(bool)arg1;
- (void)setHasTxphyerr:(bool)arg1;
- (void)setHasTxuflo:(bool)arg1;
- (void)setTxchanrej:(unsigned long long)arg1;
- (void)setTxexptime:(unsigned long long)arg1;
- (void)setTxphycrs:(unsigned long long)arg1;
- (void)setTxphyerr:(unsigned long long)arg1;
- (void)setTxuflo:(unsigned long long)arg1;
- (unsigned long long)txchanrej;
- (unsigned long long)txexptime;
- (unsigned long long)txphycrs;
- (unsigned long long)txphyerr;
- (unsigned long long)txuflo;
- (void)writeTo:(id)arg1;

@end
