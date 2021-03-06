/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPosterEffectPool : NSObject {
    NSMutableDictionary * _pool;
    NSLock * _poolLock;
}

- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)pooledEffectForID:(id)arg1;
- (void)preloadAndPoolEffectIfNeeded:(id)arg1;
- (void)returnEffectToPool:(id)arg1;

@end
