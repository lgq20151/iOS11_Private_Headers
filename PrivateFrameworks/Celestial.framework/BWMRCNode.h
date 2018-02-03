/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMRCNode : BWNode <BWQRCodeSceneObserver> {
    int (* _createSampleBufferProcessorFunction;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        BOOL confidenceHysteresisTemporalLagBeforeConfident; 
        BOOL confidenceHysteresisTemporalLagBeforeNotConfident; 
        BOOL currentTemporalHysteresis; 
        char *name; 
    }  _documentScene;
    long long  _lastMRCCount;
    bool  _lowPowerModeEnabled;
    NSDictionary * _metadataIdentifierToSymbologyDictionary;
    NSArray * _mrcIdentifiers;
    struct BWSmartCameraScene { 
        bool enabled; 
        bool confident; 
        float confidenceFilterRatio; 
        float filteredConfidence; 
        float confidenceThreshold; 
        float confidenceHysteresisValueLag; 
        BOOL confidenceHysteresisTemporalLagBeforeConfident; 
        BOOL confidenceHysteresisTemporalLagBeforeNotConfident; 
        BOOL currentTemporalHysteresis; 
        char *name; 
    }  _qrCodeScene;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectOfInterest;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    bool  _sceneLikelyToHaveQRCodes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sceneLock;
    NSArray * _symbologiesArray;
    bool  _usesSceneClassifierToGateQRCodeDetection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)_newSymbologiesArrayFromIdentifiers:(id)arg1;
- (int)_setupSampleBufferProcessor;
- (bool)_shouldEmitSBufForBarcodeCount:(long long)arg1;
- (void)_teardownSampleBufferProcessor;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)init;
- (bool)lowPowerModeEnabled;
- (id)mrcIdentifiers;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterest;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)sceneConfidenceDidChangeForQR:(float)arg1 document:(float)arg2;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setMrcIdentifiers:(id)arg1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesSceneClassifierToGateQRCodeDetection:(bool)arg1;
- (bool)usesSceneClassifierToGateQRCodeDetection;

@end
