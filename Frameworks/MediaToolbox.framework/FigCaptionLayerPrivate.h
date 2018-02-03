/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigCaptionLayerPrivate : NSObject {
    NSMutableArray * captionBackdropLayers;
    NSMutableArray * captionElementLayers;
    unsigned char  enableBackdrop;
    struct OpaqueFigReentrantMutex { } * layoutSublayersMutex;
    struct OpaqueFigSimpleMutex { } * renderMutex;
    struct OpaqueFigCFCaptionRenderer { } * renderer;
    unsigned char  shouldDrawGrid;
}

@end
