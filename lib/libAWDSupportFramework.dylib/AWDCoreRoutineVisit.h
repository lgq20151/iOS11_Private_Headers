/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineVisit : PBCodable <NSCopying> {
    unsigned long long  _dwellTime;
    struct { 
        unsigned int dwellTime : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mapItemSources;
    NSMutableArray * _possibleMapItems;
    AWDCoreRoutineMapItem * _selectedMapItem;
}

@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) bool hasDwellTime;
@property (nonatomic, readonly) bool hasSelectedMapItem;
@property (nonatomic, readonly) int*mapItemSources;
@property (nonatomic, readonly) unsigned long long mapItemSourcesCount;
@property (nonatomic, retain) NSMutableArray *possibleMapItems;
@property (nonatomic, retain) AWDCoreRoutineMapItem *selectedMapItem;

+ (Class)possibleMapItemsType;

- (int)StringAsMapItemSources:(id)arg1;
- (void)addMapItemSources:(int)arg1;
- (void)addPossibleMapItems:(id)arg1;
- (void)clearMapItemSources;
- (void)clearPossibleMapItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)dwellTime;
- (bool)hasDwellTime;
- (bool)hasSelectedMapItem;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int*)mapItemSources;
- (id)mapItemSourcesAsString:(int)arg1;
- (int)mapItemSourcesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapItemSourcesCount;
- (void)mergeFrom:(id)arg1;
- (id)possibleMapItems;
- (id)possibleMapItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)possibleMapItemsCount;
- (bool)readFrom:(id)arg1;
- (id)selectedMapItem;
- (void)setDwellTime:(unsigned long long)arg1;
- (void)setHasDwellTime:(bool)arg1;
- (void)setMapItemSources:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPossibleMapItems:(id)arg1;
- (void)setSelectedMapItem:(id)arg1;
- (void)writeTo:(id)arg1;

@end
