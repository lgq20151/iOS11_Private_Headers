/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPBInterface : PBCodable <NSCopying> {
    unsigned int  _delegateIndex;
    bool  _expensive;
    unsigned int  _generation;
    struct { 
        unsigned int delegateIndex : 1; 
        unsigned int generation : 1; 
        unsigned int index : 1; 
        unsigned int mtu : 1; 
        unsigned int subtype : 1; 
        unsigned int type : 1; 
        unsigned int expensive : 1; 
    }  _has;
    unsigned int  _index;
    unsigned int  _mtu;
    NSString * _name;
    int  _subtype;
    int  _type;
}

@property (nonatomic) unsigned int delegateIndex;
@property (nonatomic) bool expensive;
@property (nonatomic) unsigned int generation;
@property (nonatomic) bool hasDelegateIndex;
@property (nonatomic) bool hasExpensive;
@property (nonatomic) bool hasGeneration;
@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasMtu;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasSubtype;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int mtu;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int subtype;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsSubtype:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)delegateIndex;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)expensive;
- (unsigned int)generation;
- (bool)hasDelegateIndex;
- (bool)hasExpensive;
- (bool)hasGeneration;
- (bool)hasIndex;
- (bool)hasMtu;
- (bool)hasName;
- (bool)hasSubtype;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)index;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)mtu;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDelegateIndex:(unsigned int)arg1;
- (void)setExpensive:(bool)arg1;
- (void)setGeneration:(unsigned int)arg1;
- (void)setHasDelegateIndex:(bool)arg1;
- (void)setHasExpensive:(bool)arg1;
- (void)setHasGeneration:(bool)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasMtu:(bool)arg1;
- (void)setHasSubtype:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setMtu:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setSubtype:(int)arg1;
- (void)setType:(int)arg1;
- (int)subtype;
- (id)subtypeAsString:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
