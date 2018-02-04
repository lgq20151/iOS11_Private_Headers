/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAssetStateMatcher : NSObject <SUAssetMatcher> {
    NSString * _assetType;
    int  _interestedStates;
}

@property (nonatomic, readonly) NSString *assetType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int interestedStates;
@property (readonly) Class superclass;

- (id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2;
- (bool)_matchesFilterType:(id)arg1;
- (id)assetType;
- (id)findMatchFromCandidates:(id)arg1 error:(id*)arg2;
- (id)initWithType:(id)arg1 interestedStates:(int)arg2;
- (int)interestedStates;

@end