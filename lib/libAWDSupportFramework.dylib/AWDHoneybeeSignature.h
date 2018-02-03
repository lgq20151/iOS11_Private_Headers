/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHoneybeeSignature : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int instances : 1; 
    }  _has;
    int  _instances;
    NSMutableArray * _keywords;
    NSString * _radarAttachmentFilename;
    NSMutableArray * _radarAttachmentTypes;
    NSString * _radarAttachmentUUID;
    NSString * _radarComponent;
    NSString * _radarDescription;
    NSString * _radarSignature;
    NSString * _radarTitle;
    NSString * _radarVersion;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasInstances;
@property (nonatomic, readonly) bool hasRadarAttachmentFilename;
@property (nonatomic, readonly) bool hasRadarAttachmentUUID;
@property (nonatomic, readonly) bool hasRadarComponent;
@property (nonatomic, readonly) bool hasRadarDescription;
@property (nonatomic, readonly) bool hasRadarSignature;
@property (nonatomic, readonly) bool hasRadarTitle;
@property (nonatomic, readonly) bool hasRadarVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int instances;
@property (nonatomic, retain) NSMutableArray *keywords;
@property (nonatomic, retain) NSString *radarAttachmentFilename;
@property (nonatomic, retain) NSMutableArray *radarAttachmentTypes;
@property (nonatomic, retain) NSString *radarAttachmentUUID;
@property (nonatomic, retain) NSString *radarComponent;
@property (nonatomic, retain) NSString *radarDescription;
@property (nonatomic, retain) NSString *radarSignature;
@property (nonatomic, retain) NSString *radarTitle;
@property (nonatomic, retain) NSString *radarVersion;
@property (nonatomic) unsigned long long timestamp;

+ (Class)keywordsType;
+ (Class)radarAttachmentTypesType;

- (void)addKeywords:(id)arg1;
- (void)addRadarAttachmentTypes:(id)arg1;
- (void)clearKeywords;
- (void)clearRadarAttachmentTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInstances;
- (bool)hasRadarAttachmentFilename;
- (bool)hasRadarAttachmentUUID;
- (bool)hasRadarComponent;
- (bool)hasRadarDescription;
- (bool)hasRadarSignature;
- (bool)hasRadarTitle;
- (bool)hasRadarVersion;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)instances;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)keywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keywordsCount;
- (void)mergeFrom:(id)arg1;
- (id)radarAttachmentFilename;
- (id)radarAttachmentTypes;
- (id)radarAttachmentTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)radarAttachmentTypesCount;
- (id)radarAttachmentUUID;
- (id)radarComponent;
- (id)radarDescription;
- (id)radarSignature;
- (id)radarTitle;
- (id)radarVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasInstances:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInstances:(int)arg1;
- (void)setKeywords:(id)arg1;
- (void)setRadarAttachmentFilename:(id)arg1;
- (void)setRadarAttachmentTypes:(id)arg1;
- (void)setRadarAttachmentUUID:(id)arg1;
- (void)setRadarComponent:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarSignature:(id)arg1;
- (void)setRadarTitle:(id)arg1;
- (void)setRadarVersion:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
