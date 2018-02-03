/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemClient : NSObject {
    BrightnessSystemClientInternal * bsci;
}

- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isAlsSupported;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1 forProperties:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;

@end
