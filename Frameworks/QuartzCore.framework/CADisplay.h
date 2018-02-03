/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplay : NSObject {
    bool  _allowsVirtualModes;
    void * _impl;
}

@property bool allowsVirtualModes;
@property (nonatomic, readonly) NSArray *availableModes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (getter=isCloned, readonly) bool cloned;
@property (getter=isCloningSupported, readonly) bool cloningSupported;
@property (nonatomic, copy) NSString *colorMode;
@property (readonly) unsigned int connectionSeed;
@property (nonatomic, retain) CADisplayMode *currentMode;
@property (nonatomic, readonly) NSString *deviceName;
@property (readonly) unsigned int displayId;
@property (getter=isExternal, readonly) bool external;
@property (readonly) CADisplayAttributes *externalDisplayAttributes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) double heartbeatRate;
@property (readonly) long long minimumFrameDuration;
@property (nonatomic, readonly) NSString *name;
@property (readonly) NSString *nativeOrientation;
@property (nonatomic, copy) NSString *overscanAdjustment;
@property (readonly) double overscanAmount;
@property (readonly) struct CGSize { double x1; double x2; } overscanAmounts;
@property (getter=isOverscanned, readonly) bool overscanned;
@property (nonatomic, readonly) CADisplayMode *preferredMode;
@property (readonly) int processId;
@property (readonly) double refreshRate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeBounds;
@property (readonly) unsigned int seed;
@property (getter=isSupported, readonly) bool supported;
@property (readonly) bool supportsExtendedColors;
@property (readonly) long long tag;
@property (readonly) NSString *uniqueId;

+ (id)TVOutDisplay;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)displays;
+ (id)mainDisplay;

- (id)_initWithDisplay:(struct Display { int (**x1)(); id x2; struct __CFString {} x3; struct __CFString {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; struct __CFString {} *x8; struct ModeSet { struct vector<CA::WindowServer::Display::Mode, std::__1::allocator<CA::WindowServer::Display::Mode> > { struct Mode {} *x_1_2_1; struct Mode {} *x_1_2_2; struct __compressed_pair<CA::WindowServer::Display::Mode *, std::__1::allocator<CA::WindowServer::Display::Mode> > { struct Mode {} *x_3_3_1; } x_1_2_3; } x_9_1_1; } x9; struct Mode { union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 16; unsigned int x_1_3_3 : 24; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 4; unsigned int x_1_3_6 : 2; } x_1_2_1; unsigned long long x_1_2_2; } x_10_1_1; } x10; struct Mode { union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 16; unsigned int x_1_3_3 : 24; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 4; unsigned int x_1_3_6 : 2; } x_1_2_1; unsigned long long x_1_2_2; } x_11_1_1; } x11; struct Bounds { int x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; }*)arg1;
- (void)_invalidate;
- (bool)allowsVirtualModes;
- (id)availableModes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)colorMode;
- (unsigned int)connectionSeed;
- (id)currentMode;
- (id)description;
- (id)deviceName;
- (unsigned int)displayId;
- (id)externalDisplayAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (double)heartbeatRate;
- (bool)isCloned;
- (bool)isCloningSupported;
- (bool)isExternal;
- (bool)isOverscanned;
- (bool)isSupported;
- (long long)minimumFrameDuration;
- (id)name;
- (id)nativeOrientation;
- (id)overscanAdjustment;
- (double)overscanAmount;
- (struct CGSize { double x1; double x2; })overscanAmounts;
- (id)preferredMode;
- (int)processId;
- (double)refreshRate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeBounds;
- (unsigned int)seed;
- (void)setAllowsVirtualModes:(bool)arg1;
- (void)setColorMode:(id)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setOverscanAdjustment:(id)arg1;
- (bool)supportsExtendedColors;
- (long long)tag;
- (id)uniqueId;
- (void)update;

@end
