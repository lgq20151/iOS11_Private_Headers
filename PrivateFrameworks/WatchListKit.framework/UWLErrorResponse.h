/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface UWLErrorResponse : PBCodable <NSCopying> {
    int  _retryPeriodInSeconds;
}

@property (nonatomic) int retryPeriodInSeconds;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)retryPeriodInSeconds;
- (void)setRetryPeriodInSeconds:(int)arg1;
- (void)writeTo:(id)arg1;

@end
