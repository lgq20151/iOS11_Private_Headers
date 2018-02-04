/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBMapCardSection : PBCodable <NSSecureCoding, _SFPBMapCardSection> {
    _SFPBColor * _backgroundColor;
    _SFPBMapRegion * _boundingMapRegion;
    bool  _canBeHidden;
    NSString * _footnote;
    NSString * _footnoteLabel;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int interactive : 1; 
        unsigned int sizeFormat : 1; 
        unsigned int pinBehavior : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    bool  _interactive;
    _SFPBLatLng * _location;
    int  _pinBehavior;
    _SFPBColor * _pinColor;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    int  _sizeFormat;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic, retain) _SFPBMapRegion *boundingMapRegion;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, copy) NSString *footnoteLabel;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasBoundingMapRegion;
@property (nonatomic, readonly) bool hasCanBeHidden;
@property (nonatomic, readonly) bool hasFootnote;
@property (nonatomic, readonly) bool hasFootnoteLabel;
@property (nonatomic, readonly) bool hasHasBottomPadding;
@property (nonatomic, readonly) bool hasHasTopPadding;
@property (nonatomic, readonly) bool hasInteractive;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasPinBehavior;
@property (nonatomic, readonly) bool hasPinColor;
@property (nonatomic, readonly) bool hasPunchoutPickerDismissText;
@property (nonatomic, readonly) bool hasPunchoutPickerTitle;
@property (nonatomic, readonly) bool hasSeparatorStyle;
@property (nonatomic, readonly) bool hasSizeFormat;
@property (nonatomic) bool hasTopPadding;
@property (nonatomic, readonly) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interactive;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBLatLng *location;
@property (nonatomic) int pinBehavior;
@property (nonatomic, retain) _SFPBColor *pinColor;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic) int sizeFormat;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (id)boundingMapRegion;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (id)dictionaryRepresentation;
- (id)footnote;
- (id)footnoteLabel;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasBoundingMapRegion;
- (bool)hasCanBeHidden;
- (bool)hasFootnote;
- (bool)hasFootnoteLabel;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasInteractive;
- (bool)hasLocation;
- (bool)hasPinBehavior;
- (bool)hasPinColor;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasSizeFormat;
- (bool)hasTopPadding;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)interactive;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (int)pinBehavior;
- (id)pinColor;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setBoundingMapRegion:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setFootnote:(id)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSizeFormat:(int)arg1;
- (void)setType:(id)arg1;
- (int)sizeFormat;
- (id)type;
- (void)writeTo:(id)arg1;

@end