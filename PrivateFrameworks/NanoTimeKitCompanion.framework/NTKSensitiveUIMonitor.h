/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSensitiveUIMonitor : NSObject {
    bool  _hideSensitiveUI;
    bool  _needPrefsUpdate;
    int  _notifyToken;
    NSHashTable * _observers;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)addSensitiveUIObserver:(id)arg1;
- (bool)faceStyleIsSensitive:(long long)arg1;
- (void)removeSensitiveUIObserver:(id)arg1;
- (bool)shouldHideSensitiveUI;
- (bool)shouldHideSensitiveUIForFaceStyle:(long long)arg1;

@end
