/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMockVideoSDOFNode : BWNode {
    struct opaqueCMFormatDescription { } * _copyFormatDescription;
    struct OpaqueVTPixelTransferSession { } * _copyTransferSession;
    BWFigVideoCaptureDevice * _device;
    float  _fNumberForRendering;
    BWPixelBufferPool * _sdofOutputPool;
}

@property (nonatomic, retain) BWPixelBufferPool *sdofOutputPool;

+ (void)initialize;

- (void)_setDeviceFramerate:(int)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (float)fNumberForRendering;
- (id)initWithCaptureDevice:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sdofOutputPool;
- (void)setFNumberForRendering:(float)arg1;
- (void)setSdofOutputPool:(id)arg1;

@end