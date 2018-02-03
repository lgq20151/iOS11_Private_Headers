/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageCloudKitSyncFailed : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int linkQuality : 1; 
        unsigned int nestedErrorCode : 1; 
        unsigned int topLevelErrorCode : 1; 
    }  _has;
    int  _linkQuality;
    int  _nestedErrorCode;
    NSString * _nestedErrorDomain;
    NSString * _syncType;
    unsigned long long  _timestamp;
    int  _topLevelErrorCode;
    NSString * _topLevelErrorDomain;
}

@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasNestedErrorCode;
@property (nonatomic, readonly) bool hasNestedErrorDomain;
@property (nonatomic, readonly) bool hasSyncType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTopLevelErrorCode;
@property (nonatomic, readonly) bool hasTopLevelErrorDomain;
@property (nonatomic) int linkQuality;
@property (nonatomic) int nestedErrorCode;
@property (nonatomic, retain) NSString *nestedErrorDomain;
@property (nonatomic, retain) NSString *syncType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int topLevelErrorCode;
@property (nonatomic, retain) NSString *topLevelErrorDomain;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLinkQuality;
- (bool)hasNestedErrorCode;
- (bool)hasNestedErrorDomain;
- (bool)hasSyncType;
- (bool)hasTimestamp;
- (bool)hasTopLevelErrorCode;
- (bool)hasTopLevelErrorDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (int)nestedErrorCode;
- (id)nestedErrorDomain;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasNestedErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTopLevelErrorCode:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setNestedErrorCode:(int)arg1;
- (void)setNestedErrorDomain:(id)arg1;
- (void)setSyncType:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopLevelErrorCode:(int)arg1;
- (void)setTopLevelErrorDomain:(id)arg1;
- (id)syncType;
- (unsigned long long)timestamp;
- (int)topLevelErrorCode;
- (id)topLevelErrorDomain;
- (void)writeTo:(id)arg1;

@end
