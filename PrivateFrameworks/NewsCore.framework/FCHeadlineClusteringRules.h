/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCHeadlineClusteringRules : NSObject {
    double  _autoFavoriteClusterMaxSizeMultiplier;
    double  _autoFavoriteClusterMinSizeMultiplier;
    bool  _enableOptimizedLayout;
    double  _expandedAutofavoriteClusterMaxSizeMultiplier;
    double  _expandedAutofavoriteClusterMinSizeMultiplier;
    unsigned long long  _maxClusterSize;
    unsigned long long  _maxClusterSizeAutoFavorite;
    double  _maxExpandedAutofavoriteGroupCandidateRatio;
    unsigned long long  _maxIdealClusterSize;
    unsigned long long  _maxIdealClusterSizeAutoFavorite;
    unsigned long long  _minClusterSize;
    unsigned long long  _minClusterSizeAutoFavorite;
    unsigned long long  _minIdealClusterSize;
    unsigned long long  _minIdealClusterSizeAutoFavorite;
    double  _minSubscribedChannelRatioForUGroup;
    unsigned long long  _optimizedLayoutIncrementUnit;
    unsigned long long  _optimizedLayoutSizeThreshold;
    FCSolConfiguration * _solConfiguration;
}

@property (nonatomic) double autoFavoriteClusterMaxSizeMultiplier;
@property (nonatomic) double autoFavoriteClusterMinSizeMultiplier;
@property (nonatomic, readonly) bool enableOptimizedLayout;
@property (nonatomic, readonly) double expandedAutofavoriteClusterMaxSizeMultiplier;
@property (nonatomic, readonly) double expandedAutofavoriteClusterMinSizeMultiplier;
@property (nonatomic, readonly) unsigned long long maxClusterSize;
@property (nonatomic) unsigned long long maxClusterSizeAutoFavorite;
@property (nonatomic, readonly) double maxExpandedAutofavoriteGroupCandidateRatio;
@property (nonatomic, readonly) unsigned long long maxIdealClusterSize;
@property (nonatomic) unsigned long long maxIdealClusterSizeAutoFavorite;
@property (nonatomic, readonly) unsigned long long minClusterSize;
@property (nonatomic) unsigned long long minClusterSizeAutoFavorite;
@property (nonatomic, readonly) unsigned long long minIdealClusterSize;
@property (nonatomic) unsigned long long minIdealClusterSizeAutoFavorite;
@property (nonatomic, readonly) double minSubscribedChannelRatioForUGroup;
@property (nonatomic, readonly) unsigned long long optimizedLayoutIncrementUnit;
@property (nonatomic, readonly) unsigned long long optimizedLayoutSizeThreshold;
@property (nonatomic, retain) FCSolConfiguration *solConfiguration;

+ (id)rulesWithTreatment:(id)arg1 deviceIsiPad:(bool)arg2;

- (void).cxx_destruct;
- (double)autoFavoriteClusterMaxSizeMultiplier;
- (double)autoFavoriteClusterMinSizeMultiplier;
- (bool)enableOptimizedLayout;
- (double)expandedAutofavoriteClusterMaxSizeMultiplier;
- (double)expandedAutofavoriteClusterMinSizeMultiplier;
- (id)init;
- (id)initWithMinClusterSize:(unsigned long long)arg1 maxClusterSize:(unsigned long long)arg2 minIdealClusterSize:(unsigned long long)arg3 maxIdealClusterSize:(unsigned long long)arg4 minClusterSizeAutoFavorite:(unsigned long long)arg5 maxClusterSizeAutoFavorite:(unsigned long long)arg6 minIdealClusterSizeAutoFavorite:(unsigned long long)arg7 maxIdealClusterSizeAutoFavorite:(unsigned long long)arg8 enableOptimizedLayout:(bool)arg9 optimizedLayoutSizeThreshold:(unsigned long long)arg10 optimizedLayoutIncrementUnit:(unsigned long long)arg11 solConfiguration:(id)arg12 minSubscribedChannelRatioForUGroup:(double)arg13 maxExpandedAutofavoriteGroupCandidateRatio:(double)arg14 expandedAutofavoriteClusterMinSizeMultiplier:(double)arg15 expandedAutofavoriteClusterMaxSizeMultiplier:(double)arg16;
- (unsigned long long)maxClusterSize;
- (unsigned long long)maxClusterSizeAutoFavorite;
- (double)maxExpandedAutofavoriteGroupCandidateRatio;
- (unsigned long long)maxIdealClusterSize;
- (unsigned long long)maxIdealClusterSizeAutoFavorite;
- (unsigned long long)minClusterSize;
- (unsigned long long)minClusterSizeAutoFavorite;
- (unsigned long long)minIdealClusterSize;
- (unsigned long long)minIdealClusterSizeAutoFavorite;
- (double)minSubscribedChannelRatioForUGroup;
- (unsigned long long)optimizedLayoutIncrementUnit;
- (unsigned long long)optimizedLayoutSizeThreshold;
- (void)setAutoFavoriteClusterMaxSizeMultiplier:(double)arg1;
- (void)setAutoFavoriteClusterMinSizeMultiplier:(double)arg1;
- (void)setMaxClusterSizeAutoFavorite:(unsigned long long)arg1;
- (void)setMaxIdealClusterSizeAutoFavorite:(unsigned long long)arg1;
- (void)setMinClusterSizeAutoFavorite:(unsigned long long)arg1;
- (void)setMinIdealClusterSizeAutoFavorite:(unsigned long long)arg1;
- (void)setSolConfiguration:(id)arg1;
- (id)solConfiguration;

@end
