/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionManagerInternal : NSObject {
    NSOperationQueue * _fDeviceMotionLiteClientQueue;
    id /* block */  _fDeviceMotionLiteFusedHandler;
    NSString * _fDeviceMotionLitePhysicalDeviceID;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fAccelerometerDispatcher;
    id /* block */  fAccelerometerHandler;
    NSOperationQueue * fAccelerometerQueue;
    double  fAccelerometerUpdateInterval;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fAmbientPressureDispatcher;
    id /* block */  fAmbientPressureHandler;
    NSOperationQueue * fAmbientPressureQueue;
    double  fAmbientPressureUpdateInterval;
    unsigned long long  fAttitudeReferenceFrame;
    long long  fCaptureMode;
    bool  fCompassCalibrationHud;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fCompensatedAmbientPressureDispatcher;
    id /* block */  fCompensatedAmbientPressureHandler;
    NSOperationQueue * fCompensatedAmbientPressureQueue;
    double  fCompensatedAmbientPressureUpdateInterval;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; bool x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; } * fConnection;
    NSObject<OS_dispatch_queue> * fConnectionQueue;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fDeviceMotionDispatcher;
    id /* block */  fDeviceMotionHandler;
    struct unique_ptr<CLDeviceMotionLiteService, std::__1::default_delete<CLDeviceMotionLiteService> > { 
        struct __compressed_pair<CLDeviceMotionLiteService *, std::__1::default_delete<CLDeviceMotionLiteService> > { 
            struct CLDeviceMotionLiteService {} *__first_; 
        } __ptr_; 
    }  fDeviceMotionLiteService;
    int  fDeviceMotionMode;
    NSOperationQueue * fDeviceMotionQueue;
    double  fDeviceMotionStartTimestamp;
    double  fDeviceMotionUpdateInterval;
    struct { 
        double x; 
        double y; 
        double z; 
        double magnitude; 
        double horizontal; 
        double declination; 
        double inclination; 
        double timestamp; 
    }  fGeomagneticModel;
    struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > { 
        struct __compressed_pair<CLGeomagneticModelProvider_Type::Client *, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > { 
            struct Client {} *__first_; 
        } __ptr_; 
    }  fGeomagneticModelProviderClient;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fGyroDispatcher;
    id /* block */  fGyroHandler;
    NSOperationQueue * fGyroQueue;
    double  fGyroUpdateInterval;
    bool  fHaveSentDeviceRequiresMovementError;
    bool  fHaveSentTrueNorthUnavailableError;
    bool  fIsApplicationActive;
    bool  fIsCompassCalibrated;
    bool  fIsUsingCalibratedCompass;
    double  fLastAccelerometerNotificationTimestamp;
    double  fLastAmbientPressureNotificationTimestamp;
    double  fLastCompensatedAmbientPressureNotificationTimestamp;
    double  fLastDeviceMotionNotificationTimestamp;
    double  fLastGyroNotificationTimestamp;
    double  fLastMagnetometerNotificationTimestamp;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } acceleration; 
    }  fLatestAccelerometerSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fLatestAmbientPressureSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fLatestCompensatedAmbientPressureSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } rotationRate; 
        unsigned short sampleNum; 
        bool fsync; 
    }  fLatestGyroSample;
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
    }  fLatestMagnetometerSample;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fMagnetometerDispatcher;
    id /* block */  fMagnetometerHandler;
    NSOperationQueue * fMagnetometerQueue;
    double  fMagnetometerUpdateInterval;
    int (* fPrivateAccelerometerDataCallback;
    void * fPrivateAccelerometerDataCallbackInfo;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateAccelerometerDataDispatcher;
    int (* fPrivateDeviceMotionCallback;
    void * fPrivateDeviceMotionCallbackInfo;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateDeviceMotionDispatcher;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateDeviceMotionSensorStatusDispatcher;
    bool  fPrivateDeviceMotionUse9Axis;
    int (* fPrivateGyroDataCallback;
    void * fPrivateGyroDataCallbackInfo;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateGyroDataDispatcher;
    int (* fPrivateMagnetometerDataCallback;
    void * fPrivateMagnetometerDataCallbackInfo;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fPrivateMagnetometerDataDispatcher;
    int (* fPrivateNotificationCallback;
    void * fPrivateNotificationCallbackInfo;
    int  fPrivatePowerConservationMode;
    bool  fPrivateUseAccelerometer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  fSampleLock;
    bool  fShowsDeviceMovementDisplay;
    bool  fSidebandSensorFusionEnabled;
    bool  fSidebandSensorFusionLatency;
    bool  fSidebandSensorFusionSnoop;
    struct unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor> > { 
        struct __compressed_pair<CLIspDataVisitor *, std::__1::default_delete<CLIspDataVisitor> > { 
            struct CLIspDataVisitor {} *__first_; 
        } __ptr_; 
    }  fSidebandVisitor;
    struct __CFRunLoopTimer { } * fWatchdogTimer;
}

@property (nonatomic, retain) NSOperationQueue *fDeviceMotionLiteClientQueue;
@property (nonatomic, copy) id /* block */ fDeviceMotionLiteFusedHandler;
@property (nonatomic, retain) NSString *fDeviceMotionLitePhysicalDeviceID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fDeviceMotionLiteClientQueue;
- (id /* block */)fDeviceMotionLiteFusedHandler;
- (id)fDeviceMotionLitePhysicalDeviceID;
- (id)init;
- (void)setFDeviceMotionLiteClientQueue:(id)arg1;
- (void)setFDeviceMotionLiteFusedHandler:(id /* block */)arg1;
- (void)setFDeviceMotionLitePhysicalDeviceID:(id)arg1;
- (void)teardownPrivate;

@end
