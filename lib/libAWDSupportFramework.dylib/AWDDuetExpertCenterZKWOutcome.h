/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDDuetExpertCenterZKWOutcome : PBCodable <NSCopying> {
    unsigned long long  _egress;
    bool  _engaged;
    unsigned long long  _expert;
    struct { 
        unsigned int egress : 1; 
        unsigned int expert : 1; 
        unsigned int timestamp : 1; 
        unsigned int itemsShown : 1; 
        unsigned int engaged : 1; 
        unsigned int itemSelected : 1; 
        unsigned int sameCategorySelected : 1; 
        unsigned int typedQuery : 1; 
    }  _has;
    bool  _itemSelected;
    unsigned int  _itemsShown;
    bool  _sameCategorySelected;
    unsigned long long  _timestamp;
    bool  _typedQuery;
}

@property (nonatomic) unsigned long long egress;
@property (nonatomic) bool engaged;
@property (nonatomic) unsigned long long expert;
@property (nonatomic) bool hasEgress;
@property (nonatomic) bool hasEngaged;
@property (nonatomic) bool hasExpert;
@property (nonatomic) bool hasItemSelected;
@property (nonatomic) bool hasItemsShown;
@property (nonatomic) bool hasSameCategorySelected;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTypedQuery;
@property (nonatomic) bool itemSelected;
@property (nonatomic) unsigned int itemsShown;
@property (nonatomic) bool sameCategorySelected;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool typedQuery;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)egress;
- (bool)engaged;
- (unsigned long long)expert;
- (bool)hasEgress;
- (bool)hasEngaged;
- (bool)hasExpert;
- (bool)hasItemSelected;
- (bool)hasItemsShown;
- (bool)hasSameCategorySelected;
- (bool)hasTimestamp;
- (bool)hasTypedQuery;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)itemSelected;
- (unsigned int)itemsShown;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)sameCategorySelected;
- (void)setEgress:(unsigned long long)arg1;
- (void)setEngaged:(bool)arg1;
- (void)setExpert:(unsigned long long)arg1;
- (void)setHasEgress:(bool)arg1;
- (void)setHasEngaged:(bool)arg1;
- (void)setHasExpert:(bool)arg1;
- (void)setHasItemSelected:(bool)arg1;
- (void)setHasItemsShown:(bool)arg1;
- (void)setHasSameCategorySelected:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTypedQuery:(bool)arg1;
- (void)setItemSelected:(bool)arg1;
- (void)setItemsShown:(unsigned int)arg1;
- (void)setSameCategorySelected:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTypedQuery:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)typedQuery;
- (void)writeTo:(id)arg1;

@end
