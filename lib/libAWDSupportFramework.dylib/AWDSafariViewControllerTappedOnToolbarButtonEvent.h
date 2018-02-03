/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariViewControllerTappedOnToolbarButtonEvent : PBCodable <NSCopying> {
    int  _button;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int button : 1; 
        unsigned int usedLongTap : 1; 
    }  _has;
    unsigned long long  _timestamp;
    bool  _usedLongTap;
}

@property (nonatomic) int button;
@property (nonatomic) bool hasButton;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUsedLongTap;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool usedLongTap;

- (int)StringAsButton:(id)arg1;
- (int)button;
- (id)buttonAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasButton;
- (bool)hasTimestamp;
- (bool)hasUsedLongTap;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButton:(int)arg1;
- (void)setHasButton:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUsedLongTap:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsedLongTap:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)usedLongTap;
- (void)writeTo:(id)arg1;

@end
