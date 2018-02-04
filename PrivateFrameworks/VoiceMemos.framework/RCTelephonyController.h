/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCTelephonyController : NSObject

@property (nonatomic, readonly) bool isCallPresent;

+ (id)sharedTelephonyController;

- (bool)isCallPresent;

@end