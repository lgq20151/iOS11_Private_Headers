/* made by EzioChiu.
 */

@protocol HMMediaProfileDelegate <NSObject>

@optional

- (void)mediaProfile:(HMMediaProfile *)arg1 didUpdateMediaSession:(HMMediaSession *)arg2;
- (void)mediaProfile:(HMMediaProfile *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;

@end