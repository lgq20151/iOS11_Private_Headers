/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface _CPPowerAssertionThread : NSThread {
    NSDate * _earliest;
    NSTimer * _timer;
}

- (void)addAssertion:(id)arg1;
- (void)didTimeOut:(id)arg1;
- (void)main;

@end
