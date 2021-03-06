/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSelfIdentificationModel : SGModel

+ (unsigned long long)addItem:(id)arg1 featuresToArray:(id)arg2;
+ (void)enumerateNamesInArray:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)featuresFromConversation:(id)arg1 withSupervision:(id)arg2 usingBlock:(id /* block */)arg3;
+ (id)featurizeString:(id)arg1 withLocale:(id)arg2 supervision:(id)arg3;
+ (id)newTransformerInstanceForLanguage:(id)arg1;
+ (id)temporaryKeyMap;

@end
