/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSL2FeatureVectorProcessingContext : NSObject {
    unsigned long long  _expandedFeatureCount;
    unsigned long long * _expandedFeatureExecutionOrder;
}

@property (nonatomic) unsigned long long expandedFeatureCount;
@property (nonatomic) unsigned long long*expandedFeatureExecutionOrder;

- (void)dealloc;
- (unsigned long long)expandedFeatureCount;
- (unsigned long long*)expandedFeatureExecutionOrder;
- (id)initWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
- (void)setExpandedFeatureCount:(unsigned long long)arg1;
- (void)setExpandedFeatureExecutionOrder:(unsigned long long*)arg1;

@end
