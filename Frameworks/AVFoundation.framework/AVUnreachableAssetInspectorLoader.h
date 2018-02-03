/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVUnreachableAssetInspectorLoader : AVAssetInspectorLoader {
    int  _figError;
    NSDictionary * _figErrorUserInfo;
}

- (Class)_classForTrackInspectors;
- (void)dealloc;
- (id)initWithFigError:(int)arg1 userInfo:(id)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;

@end
