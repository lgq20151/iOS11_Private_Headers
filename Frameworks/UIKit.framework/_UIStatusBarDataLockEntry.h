/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDataLockEntry : _UIStatusBarDataBoolEntry {
    long long  _unlockFailureCount;
}

@property (nonatomic) long long unlockFailureCount;

- (void)setUnlockFailureCount:(long long)arg1;
- (long long)unlockFailureCount;

@end
