/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupResult : NSObject <NSCopying> {
    PSIGroupResult * _additionalGroupResult;
    struct __CFArray { } * _assetIds;
    NSMutableArray * _assetUUIDs;
    bool  _didFetchOwningContentString;
    NSArray * _groups;
    PSIDatabase * _heldIdx;
    PSIDatabase * _idx;
    NSString * _owningContentString;
    NSObject<OS_dispatch_queue> * _queue;
    float  _score;
    NSArray * _searchTokens;
}

@property (nonatomic, retain) PSIGroupResult *additionalGroupResult;
@property (nonatomic, retain) struct __CFArray { }*assetIds;
@property (readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly, retain) NSArray *contentStrings;
@property (nonatomic, copy) NSArray *groups;
@property (nonatomic) PSIDatabase *idx;
@property (nonatomic, readonly) unsigned long long matchCount;
@property (nonatomic, readonly, retain) NSArray *matchRanges;
@property (readonly) NSString *owningContentString;
@property (nonatomic) float score;
@property (nonatomic, retain) NSArray *searchTokens;

- (void).cxx_destruct;
- (id)_prepareForFetchWithCount:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 outFetchOwningContentString:(bool*)arg3;
- (id)additionalGroupResult;
- (struct __CFArray { }*)assetIds;
- (id)assetUUIDs;
- (long long)categoryAtIndex:(long long)arg1;
- (id)contentStrings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)groups;
- (id)idx;
- (id)init;
- (unsigned long long)matchCount;
- (id)matchRanges;
- (id)owningContentString;
- (float)score;
- (id)searchTokens;
- (void)setAdditionalGroupResult:(id)arg1;
- (void)setAssetIds:(struct __CFArray { }*)arg1;
- (void)setGroups:(id)arg1;
- (void)setIdx:(id)arg1;
- (void)setScore:(float)arg1;
- (void)setSearchTokens:(id)arg1;
- (unsigned long long)tokenCount;
- (id)unitTestDescription;

@end
