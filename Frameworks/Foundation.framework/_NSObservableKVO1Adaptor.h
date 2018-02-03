/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSObservableKVO1Adaptor : _NSObservableObservation {
    bool  emitsChanges;
    NSObservableKeyPath * kp;
}

- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7;
- (void)_setEmitsChanges:(bool)arg1;
- (void)finishObserving;
- (id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)remove;

@end
