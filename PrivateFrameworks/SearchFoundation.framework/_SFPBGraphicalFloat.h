/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBGraphicalFloat : PBCodable <NSSecureCoding, _SFPBGraphicalFloat> {
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
    }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) bool hasDoubleValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasDoubleValue;
- (unsigned long long)hash;
- (id)initWithCGFloat:(double)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)writeTo:(id)arg1;

@end
