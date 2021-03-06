/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBFormattedText : PBCodable <NSSecureCoding, _SFPBFormattedText> {
    _SFPBImage * _glyph;
    struct { 
        unsigned int isEmphasized : 1; 
        unsigned int isBold : 1; 
        unsigned int textColor : 1; 
    }  _has;
    bool  _isBold;
    bool  _isEmphasized;
    _SFPBText * _text;
    int  _textColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBImage *glyph;
@property (nonatomic, readonly) bool hasGlyph;
@property (nonatomic, readonly) bool hasIsBold;
@property (nonatomic, readonly) bool hasIsEmphasized;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, readonly) bool hasTextColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBold;
@property (nonatomic) bool isEmphasized;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBText *text;
@property (nonatomic) int textColor;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)glyph;
- (bool)hasGlyph;
- (bool)hasIsBold;
- (bool)hasIsEmphasized;
- (bool)hasText;
- (bool)hasTextColor;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isBold;
- (bool)isEmphasized;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setGlyph:(id)arg1;
- (void)setIsBold:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(int)arg1;
- (id)text;
- (int)textColor;
- (void)writeTo:(id)arg1;

@end
