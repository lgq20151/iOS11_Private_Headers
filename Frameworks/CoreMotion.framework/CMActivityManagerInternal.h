/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityManagerInternal : NSObject {
    id /* block */  fActivityHandler;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; bool x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; } * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fMotionStateSimQueue;
    long long  fMotionStateSimResult;
    NSObject<OS_dispatch_semaphore> * fMotionStateSimSemaphore;
    bool  fMotionStateSimWaiting;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    NSObject<OS_dispatch_queue> * fSidebandOverrideQueue;
    long long  fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> * fSidebandOverrideSemaphore;
    bool  fSidebandOverrideWaiting;
    bool  fSubscribedToMotionState;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)overrideOscarSideband:(bool)arg1 withState:(long long)arg2;
- (void)simulateMotionState:(bool)arg1 withState:(long long)arg2;
- (void)startActivityUpdatesWithHandlerPrivate:(id /* block */)arg1;
- (void)startWatchdogCheckinsPrivate;
- (void)stopActivityUpdatesPrivate;
- (void)stopWatchdogCheckinsPrivate;

@end
