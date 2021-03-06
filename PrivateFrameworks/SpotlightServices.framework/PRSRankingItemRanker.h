/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingItemRanker : NSObject {
    NSMapTable * _bundleFeatures;
    double * _bundleFeaturesScratchBuf;
    CSAttributeEvaluator * _evaluator;
    double  _experimentalWeight1;
    double  _experimentalWeight2;
    bool  _isInternalDevice;
    double  _lastIsSpaceFeature;
    NSString * _meContactIdentifier;
    bool  _policyDisabled;
    NSString * _searchString;
}

@property (nonatomic, retain) NSMapTable *bundleFeatures;
@property (nonatomic) double*bundleFeaturesScratchBuf;
@property (nonatomic, retain) CSAttributeEvaluator *evaluator;
@property (nonatomic) double experimentalWeight1;
@property (nonatomic) double experimentalWeight2;
@property bool isInternalDevice;
@property (nonatomic) double lastIsSpaceFeature;
@property (nonatomic, retain) NSString *meContactIdentifier;
@property (nonatomic) bool policyDisabled;
@property (nonatomic, retain) NSString *searchString;

+ (id)appsBundle;
+ (id)calendarBundle;
+ (id)contactsBundle;
+ (id)importantAttributesForBundle:(id)arg1;
+ (void)initialize;
+ (id)mailBundle;
+ (id)messagesBundle;
+ (id)musicBundle;
+ (id)notesBundle;
+ (id)requiredAttributes;
+ (id /* block */)shouldUpdateFuncForSnippetFeature:(unsigned long long)arg1;
+ (id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1;

- (void).cxx_destruct;
- (void)activate;
- (id)bundleFeatures;
- (double*)bundleFeaturesScratchBuf;
- (id /* block */)comparatorByJoiningComparator:(id /* block */)arg1 withPredicate:(id)arg2;
- (void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2;
- (void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2;
- (double*)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (void)deactivate;
- (void)dealloc;
- (id)evaluator;
- (double)experimentalWeight1;
- (double)experimentalWeight2;
- (id)getDateInGMT:(id)arg1;
- (void)hackMusicResultsWithItem:(id)arg1 featureVector:(id)arg2;
- (id)init;
- (id)initWithSearchString:(id)arg1 language:(id)arg2;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 experimentalWeight1:(double)arg3 experimentalWeight2:(double)arg4;
- (bool)isInternalDevice;
- (double)lastIsSpaceFeature;
- (id)meContactIdentifier;
- (void)pickMostRecentDateForItem:(id)arg1 pastItems:(id*)arg2 futureItems:(id*)arg3;
- (bool)policyDisabled;
- (void)populateLocalResultSetDateFeaturesForItems:(id)arg1;
- (void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2;
- (void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2;
- (void)prepareItems:(id)arg1 inBundle:(id)arg2;
- (id)rankingConfiguration;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5;
- (void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned long long*)arg2 relRankFeatureOut:(unsigned long long*)arg3;
- (void)rerankItemsWithPolicyForBundleItems:(id)arg1;
- (void)resetbundleFeaturesScratchBuf;
- (id)searchString;
- (void)setBundleFeatures:(id)arg1;
- (void)setBundleFeaturesScratchBuf:(double*)arg1;
- (void)setEvaluator:(id)arg1;
- (void)setExperimentalWeight1:(double)arg1;
- (void)setExperimentalWeight2:(double)arg1;
- (void)setIsInternalDevice:(bool)arg1;
- (void)setLastIsSpaceFeature:(double)arg1;
- (void)setMeContactIdentifier:(id)arg1;
- (void)setPolicyDisabled:(bool)arg1;
- (void)setSearchString:(id)arg1;
- (bool)updateFeedbackScoresForPreparedItems:(id)arg1 currentL2ModelVersion:(id*)arg2 currentL2ShadowModelVersion:(id*)arg3 currentL3ModelVersion:(id*)arg4;
- (void)updateResultSetContext:(struct _resultset_computation_ctx { double *x1; bool x2; bool x3; bool x4; double x5; double x6; double x7; double x8[44]; }*)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3;
- (void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(struct _resultset_computation_ctx { double *x1; bool x2; bool x3; bool x4; double x5; double x6; double x7; double x8[44]; }*)arg2 uniqueScores:(id)arg3;
- (void)updateScoresForPreparedItems:(id)arg1;
- (bool)wasItemCreatedWithinAWeek:(id)arg1;

@end
