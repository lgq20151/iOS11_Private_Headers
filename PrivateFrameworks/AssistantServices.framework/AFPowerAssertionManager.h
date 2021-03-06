/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPowerAssertionManager : NSObject {
    NSString * _debugName;
    unsigned int  _powerAssertion;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)releasePowerAssertion;
- (void)takePowerAssertionWithName:(id)arg1;

@end
