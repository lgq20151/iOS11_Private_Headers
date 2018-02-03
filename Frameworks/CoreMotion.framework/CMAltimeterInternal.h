/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMAltimeterInternal : NSObject {
    NSObject<OS_dispatch_queue> * fAppQueue;
    float  fBarometricBaseAltitude;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fBaseAltimeterSample;
    bool  fBaselineReceived;
    double  fElevationAscendedOffset;
    double  fElevationDescendedOffset;
    double  fFilteredElevationOffset;
    /* Warning: unhandled struct encoding: '{Dispatcher=^^?@}' */ struct Dispatcher { int (**x1)(); id x2; } * fFilteredPressureDispatcher;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; bool x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; } * fLocationdConnection;
    float  fMostRecentFilteredPressure;
    struct deque<float, std::__1::allocator<float> > { 
        struct __split_buffer<float *, std::__1::allocator<float *> > { 
            float **__first_; 
            float **__begin_; 
            float **__end_; 
            struct __compressed_pair<float **, std::__1::allocator<float *> > { 
                float **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<float> > { 
            unsigned long long __first_; 
        } __size_; 
    }  fPressureSamples;
    id /* block */  fRelativeAltimeterHandler;
    NSOperationQueue * fRelativeAltimeterQueue;
    id /* block */  fSignificantElevationSampleHandler;
    bool  fStopRelativeAltitudeUpdates;
    bool  fStopSignificantElevationUpdates;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_startElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)_startRelativeAltitudeUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)_startWatchdogCheckins;
- (void)_stopElevationUpdates;
- (void)_stopRelativeAltitudeUpdates;
- (void)_stopSignificantElevationUpdates;
- (void)_stopWatchdogCheckins;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
