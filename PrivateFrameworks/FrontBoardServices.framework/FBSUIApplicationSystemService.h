/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationSystemService : NSObject {
    <FBSUIApplicationSystemServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (nonatomic, readonly) double backgroundTimeRemaining;
@property (nonatomic) long long badgeNumber;
@property (nonatomic, copy) NSString *badgeString;
@property (nonatomic) double currentBacklightLevel;
@property (nonatomic) <FBSUIApplicationSystemServiceDelegate> *delegate;

- (id)_getBadgeValue;
- (long long)activeInterfaceOrientation;
- (double)backgroundTimeRemaining;
- (long long)badgeNumber;
- (id)badgeString;
- (double)currentBacklightLevel;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)setBadgeNumber:(long long)arg1;
- (void)setBadgeString:(id)arg1;
- (void)setCurrentBacklightLevel:(double)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setNextWakeInterval:(double)arg1;
- (void)suspendCurrentApplication;

@end
