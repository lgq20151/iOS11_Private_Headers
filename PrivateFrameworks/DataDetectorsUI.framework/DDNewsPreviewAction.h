/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDNewsPreviewAction : DDPreviewAction

+ (bool)handlesUrl:(id)arg1 result:(struct __DDResult { }*)arg2;
+ (id)urlForURL:(id)arg1 result:(struct __DDResult { }*)arg2;

- (id)commitURL;
- (id)createViewController;
- (bool)requiresEmbeddingNavigationController;

@end
