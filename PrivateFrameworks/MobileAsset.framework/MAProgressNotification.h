/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAProgressNotification : NSObject {
    long long  _totalExpected;
    long long  _totalWritten;
}

@property (nonatomic) long long totalExpected;
@property (nonatomic) long long totalWritten;

- (void)setTotalExpected:(long long)arg1;
- (void)setTotalWritten:(long long)arg1;
- (long long)totalExpected;
- (long long)totalWritten;

@end
