/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic, readonly) NSArray *processIds;

- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithInsecureProcessIds:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)processIds;

@end
