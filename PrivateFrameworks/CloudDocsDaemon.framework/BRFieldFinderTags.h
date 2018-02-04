/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldFinderTags : PBCodable <NSCopying> {
    NSMutableArray * _tags;
}

@property (nonatomic, retain) NSMutableArray *tags;

+ (Class)tagsType;

- (void).cxx_destruct;
- (void)addTags:(id)arg1;
- (void)clearTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTags:(id)arg1;
- (id)tags;
- (id)tagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tagsCount;
- (void)writeTo:(id)arg1;

@end