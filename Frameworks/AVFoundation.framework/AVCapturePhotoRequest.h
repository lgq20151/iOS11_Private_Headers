/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePhotoRequest : NSObject {
    AVWeakReferencingDelegateStorage * _delegateStorage;
    NSArray * _expectedPhotoManifest;
    unsigned int  _firedCallbackFlags;
    unsigned long long  _firedPhotoCallbacksCount;
    unsigned int  _photoCallbackFlavor;
    struct opaqueCMSampleBuffer { } * _previewSampleBuffer;
    struct __IOSurface { } * _previewSurface;
    AVCaptureResolvedPhotoSettings * _resolvedSettings;
    AVCapturePhotoSettings * _unresolvedSettings;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (nonatomic, readonly) unsigned long long expectedPhotoCount;
@property (nonatomic, readonly) NSArray *expectedPhotoManifest;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (nonatomic) unsigned long long firedPhotoCallbacksCount;
@property (readonly) unsigned int photoCallbackFlavor;
@property (nonatomic, retain) struct opaqueCMSampleBuffer { }*previewSampleBuffer;
@property (nonatomic, retain) struct __IOSurface { }*previewSurface;
@property (nonatomic, retain) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) AVCapturePhotoSettings *unresolvedSettings;

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2;

- (void)_resolveExpectedPhotoManifest;
- (void)dealloc;
- (id)delegateStorage;
- (unsigned long long)expectedPhotoCount;
- (id)expectedPhotoManifest;
- (unsigned int)firedCallbackFlags;
- (unsigned long long)firedPhotoCallbacksCount;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;
- (unsigned int)photoCallbackFlavor;
- (struct opaqueCMSampleBuffer { }*)previewSampleBuffer;
- (struct __IOSurface { }*)previewSurface;
- (id)resolvedSettings;
- (void)setFiredCallbackFlags:(unsigned int)arg1;
- (void)setFiredPhotoCallbacksCount:(unsigned long long)arg1;
- (void)setPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setPreviewSurface:(struct __IOSurface { }*)arg1;
- (void)setResolvedSettings:(id)arg1;
- (id)unresolvedSettings;

@end
