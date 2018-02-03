/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext> {
    bool  _complete;
    id  _context;
    bool  _failed;
}

@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFailed, nonatomic) bool failed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)context;
+ (id)failureContext;

- (id)context;
- (bool)isComplete;
- (bool)isFailed;
- (void)setComplete:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setFailed:(bool)arg1;

@end
