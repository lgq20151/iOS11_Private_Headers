/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXHost : NSObject

@property (nonatomic, readonly) bool active;

- (bool)active;
- (bool)canOpenURL:(id)arg1;
- (void)openURL:(id)arg1 completion:(id /* block */)arg2;

@end