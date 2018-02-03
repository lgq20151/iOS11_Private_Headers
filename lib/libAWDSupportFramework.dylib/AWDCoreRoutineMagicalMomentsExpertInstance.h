/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineMagicalMomentsExpertInstance : PBCodable <NSCopying> {
    NSMutableArray * _addons;
    int  _confidence;
    int  _expertType;
    struct { 
        unsigned int confidence : 1; 
        unsigned int expertType : 1; 
        unsigned int modelType : 1; 
        unsigned int sampleCounts : 1; 
    }  _has;
    NSMutableArray * _instances;
    int  _modelType;
    int  _sampleCounts;
}

@property (nonatomic, retain) NSMutableArray *addons;
@property (nonatomic) int confidence;
@property (nonatomic) int expertType;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasExpertType;
@property (nonatomic) bool hasModelType;
@property (nonatomic) bool hasSampleCounts;
@property (nonatomic, retain) NSMutableArray *instances;
@property (nonatomic) int modelType;
@property (nonatomic) int sampleCounts;

+ (Class)addonsType;
+ (Class)instancesType;

- (void)addAddons:(id)arg1;
- (void)addInstances:(id)arg1;
- (id)addons;
- (id)addonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)addonsCount;
- (void)clearAddons;
- (void)clearInstances;
- (int)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)expertType;
- (bool)hasConfidence;
- (bool)hasExpertType;
- (bool)hasModelType;
- (bool)hasSampleCounts;
- (unsigned long long)hash;
- (id)instances;
- (id)instancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instancesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)modelType;
- (bool)readFrom:(id)arg1;
- (int)sampleCounts;
- (void)setAddons:(id)arg1;
- (void)setConfidence:(int)arg1;
- (void)setExpertType:(int)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasExpertType:(bool)arg1;
- (void)setHasModelType:(bool)arg1;
- (void)setHasSampleCounts:(bool)arg1;
- (void)setInstances:(id)arg1;
- (void)setModelType:(int)arg1;
- (void)setSampleCounts:(int)arg1;
- (void)writeTo:(id)arg1;

@end
