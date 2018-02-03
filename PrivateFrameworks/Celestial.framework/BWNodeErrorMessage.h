/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeErrorMessage : BWNodeMessage {
    BWNodeError * _nodeError;
}

@property (readonly) BWNodeError *nodeError;

+ (id)newMessageWithNodeError:(id)arg1;

- (id)_initWithNodeError:(id)arg1;
- (void)dealloc;
- (id)nodeError;

@end
