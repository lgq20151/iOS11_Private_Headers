/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSceneClassifierSinkNode : BWSinkNode {
    BWFigVideoCaptureDevice * _device;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    int  _maxDebugOverlaySceneCount;
    <BWQRCodeSceneObserver> * _qrCodeSceneObserver;
    FigSmartcam * _smartCam;
    struct { 
        float sceneConfidences[13]; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } sceneConfidencesTimestamp; 
    }  _smartCamHints;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _smartCamHintsLock;
    bool  _useISPClassifier;
}

@property (readonly) NSString *babySceneConfidence;
@property (readonly) NSString *brightStageSceneConfidence;
@property (readonly) NSString *documentSceneConfidence;
@property (readonly) NSString *petSceneConfidence;
@property (nonatomic) <BWQRCodeSceneObserver> *qrCodeSceneObserver;
@property (readonly) NSString *qrSceneConfidence;
@property (readonly) NSArray *sceneConfidences;
@property (readonly) NSString *sunsetSunriseSceneConfidence;

+ (void)initialize;

- (id)_confidenceStringForSceneType:(int)arg1;
- (id)babySceneConfidence;
- (id)brightStageSceneConfidence;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)documentSceneConfidence;
- (id)initWithCaptureDevice:(id)arg1;
- (id)nodeSubType;
- (id)petSceneConfidence;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)qrCodeSceneObserver;
- (id)qrSceneConfidence;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sceneConfidences;
- (void)setQrCodeSceneObserver:(id)arg1;
- (id)sunsetSunriseSceneConfidence;

@end
