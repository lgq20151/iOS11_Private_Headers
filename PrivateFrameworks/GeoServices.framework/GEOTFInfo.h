/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFInfo : PBCodable <NSCopying> {
    NSString * _comment;
    NSString * _language;
}

@property (nonatomic, retain) NSString *comment;
@property (nonatomic, readonly) bool hasComment;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, retain) NSString *language;

- (void).cxx_destruct;
- (id)comment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComment;
- (bool)hasLanguage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
