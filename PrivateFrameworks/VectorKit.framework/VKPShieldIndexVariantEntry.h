/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldIndexVariantEntry : PBCodable <NSCopying> {
    NSMutableArray * _entries;
    struct { 
        unsigned int variantType : 1; 
    }  _has;
    NSMutableArray * _textEntries;
    int  _variantType;
}

@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic) bool hasVariantType;
@property (nonatomic, retain) NSMutableArray *textEntries;
@property (nonatomic) int variantType;

- (void)addEntries:(id)arg1;
- (void)addTextEntries:(id)arg1;
- (void)clearEntries;
- (void)clearTextEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (bool)hasVariantType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setHasVariantType:(bool)arg1;
- (void)setTextEntries:(id)arg1;
- (void)setVariantType:(int)arg1;
- (id)textEntries;
- (id)textEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textEntriesCount;
- (int)variantType;
- (void)writeTo:(id)arg1;

@end