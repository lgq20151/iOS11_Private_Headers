/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector * _assetInspector;
}

- (id)assetInspector;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (unsigned long long)hash;
- (id)initWithAssetInspector:(id)arg1;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isEqual:(id)arg1;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)lyrics;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;

@end
