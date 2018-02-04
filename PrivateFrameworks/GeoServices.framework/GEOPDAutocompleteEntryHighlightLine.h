/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {
    NSString * _line;
    NSMutableArray * _spans;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLine;
@property (nonatomic, retain) NSString *line;
@property (nonatomic, retain) NSMutableArray *spans;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)spanType;

- (void).cxx_destruct;
- (void)addSpan:(id)arg1;
- (void)clearSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLine;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)line;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setSpans:(id)arg1;
- (id)spanAtIndex:(unsigned long long)arg1;
- (id)spans;
- (unsigned long long)spansCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end