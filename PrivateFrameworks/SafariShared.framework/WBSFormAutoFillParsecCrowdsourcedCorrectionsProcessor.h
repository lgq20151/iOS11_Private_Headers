/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject

+ (id)_correctionsSchema;
+ (id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(bool)arg3;
+ (id)test_correctionsSchema;

- (id)_correctionsStore;
- (void)getLastCorrectionsRetrievalURLStringWithResultHandler:(id /* block */)arg1;
- (void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2;

@end
