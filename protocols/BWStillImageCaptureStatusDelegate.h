/* made by EzioChiu.
 */

@protocol BWStillImageCaptureStatusDelegate <NSObject>

@required

- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 didCapturePhotoForSettings:(FigCaptureStillImageSettings *)arg2;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 didResolveStillImagePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forSettings:(FigCaptureStillImageSettings *)arg3 resolvedCaptureType:(int)arg4 isPreBracketedEV0:(bool)arg5;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willBeginCaptureForSettings:(FigCaptureStillImageSettings *)arg2 resolvedCaptureSettings:(BWStillImageCaptureSettings *)arg3 photoManifest:(NSArray *)arg4;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willCapturePhotoForSettings:(FigCaptureStillImageSettings *)arg2 sisActive:(bool)arg3 error:(int)arg4;
- (void)stillImageCoordinator:(BWStillImageCoordinatorNode *)arg1 willPrepareStillImageCaptureWithSettings:(FigCaptureStillImageSettings *)arg2 clientInitiated:(bool)arg3;

@end
