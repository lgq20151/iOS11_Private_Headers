/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSStateCaptureInvalidator : NSObject <BSInvalidatable> {
    unsigned long long  _handle;
    bool  _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithHandle:(unsigned long long)arg1;
- (void)invalidate;

@end
