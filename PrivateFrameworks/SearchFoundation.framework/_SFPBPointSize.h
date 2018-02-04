/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBPointSize : PBCodable <NSSecureCoding, _SFPBPointSize> {
    _SFPBGraphicalFloat * _height;
    _SFPBGraphicalFloat * _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasHeight;
@property (nonatomic, readonly) bool hasWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBGraphicalFloat *height;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBGraphicalFloat *width;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasWidth;
- (unsigned long long)hash;
- (id)height;
- (id)initWithCGSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)width;
- (void)writeTo:(id)arg1;

@end