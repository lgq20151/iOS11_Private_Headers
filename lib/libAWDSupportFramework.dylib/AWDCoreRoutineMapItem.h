/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineMapItem : PBCodable <NSCopying> {
    struct { 
        unsigned int hasMuid : 1; 
    }  _has;
    bool  _hasMuid;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _mapItemSources;
}

@property (nonatomic) bool hasHasMuid;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) int*mapItemSources;
@property (nonatomic, readonly) unsigned long long mapItemSourcesCount;

- (int)StringAsMapItemSources:(id)arg1;
- (void)addMapItemSources:(int)arg1;
- (void)clearMapItemSources;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasMuid;
- (bool)hasMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int*)mapItemSources;
- (id)mapItemSourcesAsString:(int)arg1;
- (int)mapItemSourcesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapItemSourcesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHasMuid:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMapItemSources:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
