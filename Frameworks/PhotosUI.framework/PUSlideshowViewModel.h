/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowViewModel : PUViewModel {
    long long  _currentState;
    bool  _wantsChromeVisible;
}

@property (nonatomic) long long currentState;
@property (setter=setWantsChromeVisible:, nonatomic) bool wantsChromeVisible;

- (id)currentChange;
- (long long)currentState;
- (id)newViewModelChange;
- (void)registerChangeObserver:(id)arg1;
- (void)setCurrentState:(long long)arg1;
- (void)setWantsChromeVisible:(bool)arg1;
- (void)setWantsChromeVisible:(bool)arg1 changeReason:(long long)arg2;
- (void)unregisterChangeObserver:(id)arg1;
- (bool)wantsChromeVisible;

@end