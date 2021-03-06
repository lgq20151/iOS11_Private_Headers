/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying> {
    NSMutableArray * _restoredPaidSubscriptionChannelIds;
}

@property (nonatomic, retain) NSMutableArray *restoredPaidSubscriptionChannelIds;

+ (Class)restoredPaidSubscriptionChannelIdsType;

- (void).cxx_destruct;
- (void)addRestoredPaidSubscriptionChannelIds:(id)arg1;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)restoredPaidSubscriptionChannelIds;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;
- (void)setRestoredPaidSubscriptionChannelIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
