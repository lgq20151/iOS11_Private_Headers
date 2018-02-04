/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying> {
    unsigned long long  _cutoffTime;
    int  _fetchingBin;
    struct { 
        unsigned int cutoffTime : 1; 
        unsigned int headlinesPerFeedFetchCount : 1; 
        unsigned int subscriptionsFetchCount : 1; 
        unsigned int fetchingBin : 1; 
    }  _has;
    unsigned long long  _headlinesPerFeedFetchCount;
    unsigned long long  _subscriptionsFetchCount;
}

@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) int fetchingBin;
@property (nonatomic) bool hasCutoffTime;
@property (nonatomic) bool hasFetchingBin;
@property (nonatomic) bool hasHeadlinesPerFeedFetchCount;
@property (nonatomic) bool hasSubscriptionsFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long subscriptionsFetchCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cutoffTime;
- (id)description;
- (id)dictionaryRepresentation;
- (int)fetchingBin;
- (bool)hasCutoffTime;
- (bool)hasFetchingBin;
- (bool)hasHeadlinesPerFeedFetchCount;
- (bool)hasSubscriptionsFetchCount;
- (unsigned long long)hash;
- (unsigned long long)headlinesPerFeedFetchCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCutoffTime:(unsigned long long)arg1;
- (void)setFetchingBin:(int)arg1;
- (void)setHasCutoffTime:(bool)arg1;
- (void)setHasFetchingBin:(bool)arg1;
- (void)setHasHeadlinesPerFeedFetchCount:(bool)arg1;
- (void)setHasSubscriptionsFetchCount:(bool)arg1;
- (void)setHeadlinesPerFeedFetchCount:(unsigned long long)arg1;
- (void)setSubscriptionsFetchCount:(unsigned long long)arg1;
- (unsigned long long)subscriptionsFetchCount;
- (void)writeTo:(id)arg1;

@end