/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigCaptionBackdropLayer : CABackdropLayer {
    CAFilter * backdropFilter;
}

+ (void)initialize;
+ (unsigned char)isSupported;

- (void)applyRoundedCorners:(struct CGPath { }*)arg1;
- (void)configure;
- (void)dealloc;
- (id)init;
- (void)insertBackdropAsSublayerToLayer:(id)arg1 below:(id)arg2;
- (void)removeBackdropFromSuperLayer;

@end
