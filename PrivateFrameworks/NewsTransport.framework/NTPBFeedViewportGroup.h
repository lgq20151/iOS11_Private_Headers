/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportGroup : PBCodable <NSCopying> {
    NTPBDate * _creationDate;
    NTPBDate * _editionFeedEndDate;
    NTPBDate * _editionFeedStartDate;
    NTPBDate * _editionKeyDate;
    struct { 
        unsigned int mergeID : 1; 
        unsigned int options : 1; 
        unsigned int l2TagIDRef : 1; 
        unsigned int nameRef : 1; 
        unsigned int sourceIdentifierRef : 1; 
        unsigned int themeTagIDRef : 1; 
        unsigned int type : 1; 
        unsigned int isFirstFromEdition : 1; 
    }  _has;
    NSMutableArray * _headlines;
    NSString * _identifier;
    bool  _isFirstFromEdition;
    int  _l2TagIDRef;
    unsigned long long  _mergeID;
    int  _nameRef;
    unsigned long long  _options;
    int  _sourceIdentifierRef;
    int  _themeTagIDRef;
    int  _type;
}

@property (nonatomic, retain) NTPBDate *creationDate;
@property (nonatomic, retain) NTPBDate *editionFeedEndDate;
@property (nonatomic, retain) NTPBDate *editionFeedStartDate;
@property (nonatomic, retain) NTPBDate *editionKeyDate;
@property (nonatomic, readonly) bool hasCreationDate;
@property (nonatomic, readonly) bool hasEditionFeedEndDate;
@property (nonatomic, readonly) bool hasEditionFeedStartDate;
@property (nonatomic, readonly) bool hasEditionKeyDate;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsFirstFromEdition;
@property (nonatomic) bool hasL2TagIDRef;
@property (nonatomic) bool hasMergeID;
@property (nonatomic) bool hasNameRef;
@property (nonatomic) bool hasOptions;
@property (nonatomic) bool hasSourceIdentifierRef;
@property (nonatomic) bool hasThemeTagIDRef;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *headlines;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isFirstFromEdition;
@property (nonatomic) int l2TagIDRef;
@property (nonatomic) unsigned long long mergeID;
@property (nonatomic) int nameRef;
@property (nonatomic) unsigned long long options;
@property (nonatomic) int sourceIdentifierRef;
@property (nonatomic) int themeTagIDRef;
@property (nonatomic) int type;

+ (Class)headlinesType;

- (void)addHeadlines:(id)arg1;
- (void)clearHeadlines;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)editionFeedEndDate;
- (id)editionFeedStartDate;
- (id)editionKeyDate;
- (bool)hasCreationDate;
- (bool)hasEditionFeedEndDate;
- (bool)hasEditionFeedStartDate;
- (bool)hasEditionKeyDate;
- (bool)hasIdentifier;
- (bool)hasIsFirstFromEdition;
- (bool)hasL2TagIDRef;
- (bool)hasMergeID;
- (bool)hasNameRef;
- (bool)hasOptions;
- (bool)hasSourceIdentifierRef;
- (bool)hasThemeTagIDRef;
- (bool)hasType;
- (unsigned long long)hash;
- (id)headlines;
- (id)headlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)headlinesCount;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isFirstFromEdition;
- (int)l2TagIDRef;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)mergeID;
- (int)nameRef;
- (unsigned long long)options;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setEditionFeedEndDate:(id)arg1;
- (void)setEditionFeedStartDate:(id)arg1;
- (void)setEditionKeyDate:(id)arg1;
- (void)setHasIsFirstFromEdition:(bool)arg1;
- (void)setHasL2TagIDRef:(bool)arg1;
- (void)setHasMergeID:(bool)arg1;
- (void)setHasNameRef:(bool)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setHasSourceIdentifierRef:(bool)arg1;
- (void)setHasThemeTagIDRef:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsFirstFromEdition:(bool)arg1;
- (void)setL2TagIDRef:(int)arg1;
- (void)setMergeID:(unsigned long long)arg1;
- (void)setNameRef:(int)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setSourceIdentifierRef:(int)arg1;
- (void)setThemeTagIDRef:(int)arg1;
- (void)setType:(int)arg1;
- (int)sourceIdentifierRef;
- (int)themeTagIDRef;
- (int)type;
- (void)writeTo:(id)arg1;

@end
