/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ExFATCameraDevice : ICCameraDevice {
    void * _exFATCameraProperties;
}

- (void)dealloc;
- (bool)eject;
- (void)enumerateContent;
- (void)finalize;
- (id)initWithVolumePath:(id)arg1 mediaPaths:(id)arg2;
- (unsigned long long)itemsInFolder:(id)arg1;

@end
