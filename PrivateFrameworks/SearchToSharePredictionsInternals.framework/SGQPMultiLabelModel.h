/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPMultiLabelModel : NSObject <PMLPlistAndChunksSerializableProtocol> {
    NSDictionary * _modelsMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithModelsAndLabelsMapping:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)rankedLabelsForCovariates:(id)arg1;
- (id)scoredLabelsForCovariates:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end
