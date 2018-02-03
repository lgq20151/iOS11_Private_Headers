/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDDataFrames : PBCodable <NSCopying> {
    unsigned long long  _cFack;
    unsigned long long  _cFackCFpoll;
    unsigned long long  _cFpoll;
    unsigned long long  _dataCFack;
    unsigned long long  _dataCFackCFpoll;
    unsigned long long  _dataCFpoll;
    unsigned long long  _dataFrames;
    struct { 
        unsigned int cFack : 1; 
        unsigned int cFackCFpoll : 1; 
        unsigned int cFpoll : 1; 
        unsigned int dataCFack : 1; 
        unsigned int dataCFackCFpoll : 1; 
        unsigned int dataCFpoll : 1; 
        unsigned int dataFrames : 1; 
        unsigned int null : 1; 
        unsigned int qoSdata : 1; 
        unsigned int qoSdataCFack : 1; 
        unsigned int qoSdataCFackCFpoll : 1; 
        unsigned int qoSnodataCFack : 1; 
        unsigned int qoSnodataCFpoll : 1; 
        unsigned int qoSnull : 1; 
    }  _has;
    unsigned long long  _null;
    unsigned long long  _qoSdata;
    unsigned long long  _qoSdataCFack;
    unsigned long long  _qoSdataCFackCFpoll;
    unsigned long long  _qoSnodataCFack;
    unsigned long long  _qoSnodataCFpoll;
    unsigned long long  _qoSnull;
}

@property (nonatomic) unsigned long long cFack;
@property (nonatomic) unsigned long long cFackCFpoll;
@property (nonatomic) unsigned long long cFpoll;
@property (nonatomic) unsigned long long dataCFack;
@property (nonatomic) unsigned long long dataCFackCFpoll;
@property (nonatomic) unsigned long long dataCFpoll;
@property (nonatomic) unsigned long long dataFrames;
@property (nonatomic) bool hasCFack;
@property (nonatomic) bool hasCFackCFpoll;
@property (nonatomic) bool hasCFpoll;
@property (nonatomic) bool hasDataCFack;
@property (nonatomic) bool hasDataCFackCFpoll;
@property (nonatomic) bool hasDataCFpoll;
@property (nonatomic) bool hasDataFrames;
@property (nonatomic) bool hasNull;
@property (nonatomic) bool hasQoSdata;
@property (nonatomic) bool hasQoSdataCFack;
@property (nonatomic) bool hasQoSdataCFackCFpoll;
@property (nonatomic) bool hasQoSnodataCFack;
@property (nonatomic) bool hasQoSnodataCFpoll;
@property (nonatomic) bool hasQoSnull;
@property (nonatomic) unsigned long long null;
@property (nonatomic) unsigned long long qoSdata;
@property (nonatomic) unsigned long long qoSdataCFack;
@property (nonatomic) unsigned long long qoSdataCFackCFpoll;
@property (nonatomic) unsigned long long qoSnodataCFack;
@property (nonatomic) unsigned long long qoSnodataCFpoll;
@property (nonatomic) unsigned long long qoSnull;

- (unsigned long long)cFack;
- (unsigned long long)cFackCFpoll;
- (unsigned long long)cFpoll;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataCFack;
- (unsigned long long)dataCFackCFpoll;
- (unsigned long long)dataCFpoll;
- (unsigned long long)dataFrames;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCFack;
- (bool)hasCFackCFpoll;
- (bool)hasCFpoll;
- (bool)hasDataCFack;
- (bool)hasDataCFackCFpoll;
- (bool)hasDataCFpoll;
- (bool)hasDataFrames;
- (bool)hasNull;
- (bool)hasQoSdata;
- (bool)hasQoSdataCFack;
- (bool)hasQoSdataCFackCFpoll;
- (bool)hasQoSnodataCFack;
- (bool)hasQoSnodataCFpoll;
- (bool)hasQoSnull;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)null;
- (unsigned long long)qoSdata;
- (unsigned long long)qoSdataCFack;
- (unsigned long long)qoSdataCFackCFpoll;
- (unsigned long long)qoSnodataCFack;
- (unsigned long long)qoSnodataCFpoll;
- (unsigned long long)qoSnull;
- (bool)readFrom:(id)arg1;
- (void)setCFack:(unsigned long long)arg1;
- (void)setCFackCFpoll:(unsigned long long)arg1;
- (void)setCFpoll:(unsigned long long)arg1;
- (void)setDataCFack:(unsigned long long)arg1;
- (void)setDataCFackCFpoll:(unsigned long long)arg1;
- (void)setDataCFpoll:(unsigned long long)arg1;
- (void)setDataFrames:(unsigned long long)arg1;
- (void)setHasCFack:(bool)arg1;
- (void)setHasCFackCFpoll:(bool)arg1;
- (void)setHasCFpoll:(bool)arg1;
- (void)setHasDataCFack:(bool)arg1;
- (void)setHasDataCFackCFpoll:(bool)arg1;
- (void)setHasDataCFpoll:(bool)arg1;
- (void)setHasDataFrames:(bool)arg1;
- (void)setHasNull:(bool)arg1;
- (void)setHasQoSdata:(bool)arg1;
- (void)setHasQoSdataCFack:(bool)arg1;
- (void)setHasQoSdataCFackCFpoll:(bool)arg1;
- (void)setHasQoSnodataCFack:(bool)arg1;
- (void)setHasQoSnodataCFpoll:(bool)arg1;
- (void)setHasQoSnull:(bool)arg1;
- (void)setNull:(unsigned long long)arg1;
- (void)setQoSdata:(unsigned long long)arg1;
- (void)setQoSdataCFack:(unsigned long long)arg1;
- (void)setQoSdataCFackCFpoll:(unsigned long long)arg1;
- (void)setQoSnodataCFack:(unsigned long long)arg1;
- (void)setQoSnodataCFpoll:(unsigned long long)arg1;
- (void)setQoSnull:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
