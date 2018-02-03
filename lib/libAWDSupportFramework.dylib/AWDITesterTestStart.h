/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDITesterTestStart : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _testName;
    unsigned long long  _timestamp;
    NSString * _uniqueKey;
}

@property (nonatomic, readonly) bool hasTestName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUniqueKey;
@property (nonatomic, retain) NSString *testName;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *uniqueKey;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTestName;
- (bool)hasTimestamp;
- (bool)hasUniqueKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTestName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUniqueKey:(id)arg1;
- (id)testName;
- (unsigned long long)timestamp;
- (id)uniqueKey;
- (void)writeTo:(id)arg1;

@end
