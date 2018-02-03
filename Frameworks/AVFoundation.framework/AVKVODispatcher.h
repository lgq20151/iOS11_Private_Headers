/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVKVODispatcher : NSObject {
    AVCallbackContextRegistry * _callbackContextRegistry;
}

+ (id)sharedKVODispatcher;

- (void)dealloc;
- (id)initWithDescriptionOfHowAllObservedPropertyChangesAreSerializedWithDispatcherDeallocation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)startObservingObject:(id)arg1 weakObserver:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5;
- (id)startObservingObject:(id)arg1 weakObserver:(id)arg2 forTwoPartKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5;
- (id)startObservingValueAtKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)startObservingValueAtKeyPath:(id)arg1 withoutKeepingAliveObservedObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)startObservingValueAtTwoPartKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;

@end
