/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _categorySuggestionEntry;
    NSData * _categorySuggestionEntryMetadata;
    struct { 
        unsigned int maxResults : 1; 
        unsigned int highlightDiff : 1; 
        unsigned int interleaveCategorySuggestions : 1; 
    }  _has;
    bool  _highlightDiff;
    bool  _interleaveCategorySuggestions;
    int  _maxResults;
    NSString * _query;
    PBUnknownFields * _unknownFields;
    GEOPDVenueIdentifier * _venueIdentifier;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *categorySuggestionEntry;
@property (nonatomic, retain) NSData *categorySuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasCategorySuggestionEntry;
@property (nonatomic, readonly) bool hasCategorySuggestionEntryMetadata;
@property (nonatomic) bool hasHighlightDiff;
@property (nonatomic) bool hasInterleaveCategorySuggestions;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasVenueIdentifier;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool highlightDiff;
@property (nonatomic) bool interleaveCategorySuggestions;
@property (nonatomic) int maxResults;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueIdentifier;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (id)categorySuggestionEntry;
- (id)categorySuggestionEntryMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategorySuggestionEntry;
- (bool)hasCategorySuggestionEntryMetadata;
- (bool)hasHighlightDiff;
- (bool)hasInterleaveCategorySuggestions;
- (bool)hasMaxResults;
- (bool)hasQuery;
- (bool)hasVenueIdentifier;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)highlightDiff;
- (bool)interleaveCategorySuggestions;
- (bool)isEqual:(id)arg1;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setCategorySuggestionEntry:(id)arg1;
- (void)setCategorySuggestionEntryMetadata:(id)arg1;
- (void)setHasHighlightDiff:(bool)arg1;
- (void)setHasInterleaveCategorySuggestions:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHighlightDiff:(bool)arg1;
- (void)setInterleaveCategorySuggestions:(bool)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setVenueIdentifier:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)unknownFields;
- (id)venueIdentifier;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
