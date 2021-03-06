/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility {
    struct ranking_index_score_t { 
        unsigned long long lsb; 
        unsigned long long msb; 
    }  _buddyScore;
    bool  _completed;
    NSString * _domainIdentifier;
    long long  _incomingCount;
    NSDate * _interestingDate;
    NSString * _itemIdentifier;
    long long  _outgoingCount;
    NSString * _relatedBundleID;
    NSString * _relatedUniqueIdentifier;
}

@property struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; } buddyScore;
@property (retain) NSArray *compatibilityDescriptions;
@property bool completed;
@property (retain) NSString *domainIdentifier;
@property long long incomingCount;
@property (retain) NSDate *interestingDate;
@property (retain) NSString *itemIdentifier;
@property long long outgoingCount;
@property (retain) NSString *relatedBundleID;
@property (retain) NSString *relatedUniqueIdentifier;

- (void).cxx_destruct;
- (struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; })buddyScore;
- (Class)classForCoder;
- (id)compatibilityDescriptions;
- (bool)completed;
- (id)debugDescription;
- (id)domainIdentifier;
- (bool)hasDetail;
- (long long)incomingCount;
- (id)init;
- (id)interestingDate;
- (id)itemIdentifier;
- (long long)outgoingCount;
- (id)relatedBundleID;
- (id)relatedUniqueIdentifier;
- (void)setBuddyScore:(struct ranking_index_score_t { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCompatibilityDescriptions:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setIncomingCount:(long long)arg1;
- (void)setInterestingDate:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setOutgoingCount:(long long)arg1;
- (void)setRelatedBundleID:(id)arg1;
- (void)setRelatedUniqueIdentifier:(id)arg1;

@end
