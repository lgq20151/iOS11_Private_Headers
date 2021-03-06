/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayMode : NSObject {
    CADisplay * _dpy;
    unsigned long long  _height;
    struct Mode { 
        union { 
            struct { 
                unsigned int width : 16; 
                unsigned int height : 16; 
                unsigned int refresh_rate : 24; 
                unsigned int is_virtual : 1; 
                unsigned int pixel_format : 4; 
                unsigned int color_range : 2; 
            } s; 
            unsigned long long uint64; 
        } u; 
    }  _mode;
    unsigned long long  _width;
}

@property (nonatomic, readonly, copy) NSString *colorGamut;
@property (nonatomic, readonly, copy) NSString *colorMode;
@property (nonatomic, readonly, copy) NSString *hdrMode;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long internalRepresentation;
@property (nonatomic, readonly) bool isVirtual;
@property (nonatomic, readonly) double pixelAspectRatio;
@property (nonatomic, readonly) unsigned long long preferredScale;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) unsigned long long width;

+ (id)_displayModeWithMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 24; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 4; unsigned int x_1_2_6 : 2; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1 display:(id)arg2;

- (id).cxx_construct;
- (id)_display;
- (id)_initWithMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 24; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 4; unsigned int x_1_2_6 : 2; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1 display:(id)arg2;
- (struct Mode { union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 24; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 4; unsigned int x_1_2_6 : 2; } x_1_1_1; unsigned long long x_1_1_2; } x1; })_mode;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)colorGamut;
- (id)colorMode;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)hdrMode;
- (unsigned long long)height;
- (unsigned long long)internalRepresentation;
- (bool)isEqual:(id)arg1;
- (bool)isVirtual;
- (double)pixelAspectRatio;
- (unsigned long long)preferredScale;
- (double)refreshRate;
- (unsigned long long)width;

@end
