/* made by EzioChiu
   Image: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

@interface EAGLContext : NSObject {
    struct _EAGLContextPrivate { id x1; unsigned long long x2; unsigned int x3; struct __GLIContextRec {} *x4; struct __GLIFunctionDispatchRec { int (*x_5_1_1)(); int (*x_5_1_2)(); int (*x_5_1_3)(); int (*x_5_1_4)(); int (*x_5_1_5)(); int (*x_5_1_6)(); int (*x_5_1_7)(); int (*x_5_1_8)(); int (*x_5_1_9)(); int (*x_5_1_10)(); int (*x_5_1_11)(); int (*x_5_1_12)(); int (*x_5_1_13)(); int (*x_5_1_14)(); int (*x_5_1_15)(); int (*x_5_1_16)(); int (*x_5_1_17)(); int (*x_5_1_18)(); int (*x_5_1_19)(); int (*x_5_1_20)(); int (*x_5_1_21)(); int (*x_5_1_22)(); int (*x_5_1_23)(); int (*x_5_1_24)(); int (*x_5_1_25)(); int (*x_5_1_26)(); int (*x_5_1_27)(); int (*x_5_1_28)(); int (*x_5_1_29)(); int (*x_5_1_30)(); int (*x_5_1_31)(); int (*x_5_1_32)(); int (*x_5_1_33)(); int (*x_5_1_34)(); int (*x_5_1_35)(); int (*x_5_1_36)(); int (*x_5_1_37)(); int (*x_5_1_38)(); int (*x_5_1_39)(); int (*x_5_1_40)(); int (*x_5_1_41)(); int (*x_5_1_42)(); int (*x_5_1_43)(); int (*x_5_1_44)(); int (*x_5_1_45)(); int (*x_5_1_46)(); int (*x_5_1_47)(); int (*x_5_1_48)(); int (*x_5_1_49)(); int (*x_5_1_50)(); int (*x_5_1_51)(); int (*x_5_1_52)(); int (*x_5_1_53)(); int (*x_5_1_54)(); int (*x_5_1_55)(); } x5; } * _private;
    NSString * debugLabel;
}

@property (readonly) unsigned long long API;
@property (nonatomic, copy) NSString *debugLabel;
@property (getter=isMultiThreaded, nonatomic) bool multiThreaded;
@property (readonly) EAGLSharegroup *sharegroup;

+ (id)currentContext;
+ (bool)setCurrentContext:(id)arg1;

- (unsigned long long)API;
- (struct EAGLMacroContext { }*)GetMacroContextPrivate;
- (bool)attachImage:(unsigned long long)arg1 toCoreSurface:(struct __IOSurface { }*)arg2 invertedRender:(bool)arg3;
- (id)commonInitWithAPI:(unsigned long long)arg1 properties:(id)arg2;
- (void)dealloc;
- (id)debugLabel;
- (struct EAGLMacroContext { }*)getMacroContextPrivate;
- (unsigned long long)getParameter:(unsigned int)arg1 to:(int*)arg2;
- (id)init;
- (id)initWithAPI:(unsigned long long)arg1;
- (id)initWithAPI:(unsigned long long)arg1 properties:(id)arg2;
- (id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(bool)arg2;
- (id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2;
- (bool)isMultiThreaded;
- (bool)presentRenderbuffer:(unsigned long long)arg1;
- (bool)presentRenderbuffer:(unsigned long long)arg1 afterMinimumDuration:(double)arg2;
- (bool)presentRenderbuffer:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2;
- (void)sendNotification:(unsigned int)arg1 forTransaction:(unsigned int)arg2 onLayer:(unsigned int)arg3;
- (bool)setBlockFence:(id /* block */)arg1 onQueue:(id)arg2;
- (void)setDebugLabel:(id)arg1;
- (void)setMultiThreaded:(bool)arg1;
- (unsigned long long)setParameter:(unsigned int)arg1 to:(int*)arg2;
- (id)sharegroup;
- (void)swapNotification:(struct __IOMobileFramebuffer { }*)arg1 forTransaction:(unsigned int)arg2 onLayer:(unsigned int)arg3;
- (bool)texImageIOSurface:(struct __IOSurface { }*)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned int)arg8;
- (bool)texImageIOSurface:(struct __IOSurface { }*)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned int)arg8 invert:(bool)arg9;

@end
