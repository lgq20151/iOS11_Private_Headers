/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUUIApplicationTraceableResource : TSUTraceableResource

+ (id)sharedResource;

- (void)addToken:(id)arg1 isForTemporaryRelinquish:(bool)arg2;
- (void)removeToken:(id)arg1 isForTemporaryRelinquish:(bool)arg2;

@end
