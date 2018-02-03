/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSAssertionClient : NSObject {
    BKSAssertionClientMultiplexer * _multiplexer;
    BKSProcessAssertionClient * _processAssertionClient;
    BKSTerminationAssertionClient * _terminationAssertionClient;
}

@property (nonatomic, readonly) BKSAssertionClientMultiplexer *multiplexer;
@property (nonatomic, readonly) BKSProcessAssertionClient *processAssertionClient;
@property (nonatomic, readonly) BKSTerminationAssertionClient *terminationAssertionClient;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)multiplexer;
- (id)processAssertionClient;
- (id)terminationAssertionClient;

@end
