/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigVideoContainerLayer : FigBaseCALayer {
    bool  _shouldResizeVideoLayer;
    CALayer * _videoLayer;
}

@property (nonatomic) bool shouldResizeVideoLayer;
@property (nonatomic, retain) CALayer *videoLayer;

+ (id)defaultActionForKey:(id)arg1;

- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (void)layoutSublayers;
- (void)setShouldResizeVideoLayer:(bool)arg1;
- (void)setVideoLayer:(id)arg1;
- (bool)shouldResizeVideoLayer;
- (id)videoLayer;

@end