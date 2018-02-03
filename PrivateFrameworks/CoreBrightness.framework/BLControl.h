/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BLControl : NSObject {
    bool  AABEnabled;
    id /* block */  _callback;
    void * _callbackContext;
    id /* block */  _ecoModeNotificationHandler;
    int  _ecoModeNotificationToken;
    id /* block */  _ecoModePreferencesUpdateNotificationHandler;
    int  _ecoModePreferencesUpdateNotificationToken;
    NightModeControl * _nightModeControl;
    bool  _useMultiCurves;
    struct AABC {} * aab;
    bool  aabExist;
    struct __IOHIDServiceClient {} * alsClient;
    unsigned int  alsCount;
    unsigned int  alsNode;
    unsigned int  alsOrientation;
    unsigned int  backlight;
    struct __Display {} * display;
    unsigned int  displayCount;
    unsigned int  driverNode;
    struct __IOHIDEventSystemClient { } * hidSystemClient;
    bool  ignoreALSEvents;
    bool  ignoreBrightnessKey;
    struct LegacyBacklightC { int (**x1)(); unsigned int x2; struct __Display {} *x3; unsigned int x4; int x5; struct __IOHIDServiceClient {} *x6; float x7; struct _ALS_Struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; int x_8_1_5; float x_8_1_6; float x_8_1_7; float x_8_1_8; float x_8_1_9; id x_8_1_10; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x_8_1_11; void*x_8_1_12; unsigned int x_8_1_13; bool x_8_1_14; bool x_8_1_15; float x_8_1_16; float x_8_1_17; float x_8_1_18; } x8; struct { int x_9_1_1; unsigned char x_9_1_2; float x_9_1_3; unsigned int x_9_1_4; id x_9_1_5; struct { unsigned char x_6_2_1; float x_6_2_2; id x_6_2_3; } x_9_1_6; struct __CFDictionary {} *x_9_1_7; float x_9_1_8; int (*x_9_1_9)(); void *x_9_1_10; } x9; } * legacyAutoBacklight;
    bool  monitorALSOnly;
    struct __IOHIDServiceClient {} * otherClients;
    unsigned int  otherClientsCount;
    bool  overrideIgnoreBrightness;
    NSObject<OS_dispatch_queue> * queue;
    NSObject<OS_dispatch_queue> * rootQueue;
    bool  useRootQueue;
}

- (void)callBlockWithProperty:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void*)copyBLControlPropertyWithkey:(struct __CFString { }*)arg1;
- (void*)copyPropertyWithKey:(struct __CFString { }*)arg1 client:(struct __CFNumber { }*)arg2;
- (struct __CFDictionary { }*)createDictWithUsagePairPage:(unsigned int)arg1 usage:(unsigned int)arg2;
- (bool)findAlsNodes;
- (bool)findBacklight;
- (bool)findHIDClients;
- (id)init;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (int)rootQueuePthreadAttrInit:(struct _opaque_pthread_attr_t { long long x1; BOOL x2[56]; }*)arg1;
- (bool)setBLControlPropertyWithKey:(struct __CFString { }*)arg1 property:(void*)arg2;
- (bool)setPropertyWithKey:(struct __CFString { }*)arg1 property:(void*)arg2 client:(struct __CFNumber { }*)arg3;
- (bool)start;
- (void)stop;
- (void)waitForALSArrival;

@end
