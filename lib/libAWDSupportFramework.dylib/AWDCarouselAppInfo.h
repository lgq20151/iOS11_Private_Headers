/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselAppInfo : PBCodable <NSCopying> {
    bool  _development;
    struct { 
        unsigned int development : 1; 
        unsigned int watchKit : 1; 
    }  _has;
    NSString * _identifier;
    bool  _watchKit;
}

@property (nonatomic) bool development;
@property (nonatomic) bool hasDevelopment;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasWatchKit;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool watchKit;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)development;
- (id)dictionaryRepresentation;
- (bool)hasDevelopment;
- (bool)hasIdentifier;
- (bool)hasWatchKit;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDevelopment:(bool)arg1;
- (void)setHasDevelopment:(bool)arg1;
- (void)setHasWatchKit:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setWatchKit:(bool)arg1;
- (bool)watchKit;
- (void)writeTo:(id)arg1;

@end
