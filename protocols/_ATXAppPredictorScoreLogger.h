/* made by EzioChiu.
 */

@protocol _ATXAppPredictorScoreLogger <NSObject>

@required

- (void)logInputs:(NSDictionary *)arg1 subscores:(NSDictionary *)arg2 forBundleId:(NSString *)arg3;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)setPredictionClass:(NSString *)arg1;

@end
