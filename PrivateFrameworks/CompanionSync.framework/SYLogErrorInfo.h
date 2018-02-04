/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogErrorInfo : PBCodable <NSCopying> {
    long long  _code;
    NSString * _domain;
}

@property (nonatomic, readonly) NSError *cocoaError;
@property (nonatomic) long long code;
@property (nonatomic, retain) NSString *domain;

- (void).cxx_destruct;
- (id)cocoaError;
- (long long)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (unsigned long long)hash;
- (id)initWithCocoaError:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)writeTo:(id)arg1;

@end