/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTaskStatusResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithTaskStatusToConfirm:(long long)arg1;
+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)successWithResolvedTaskStatus:(long long)arg1;
+ (id)successWithResolvedValue:(long long)arg1;

@end
