/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCompositionInternal : NSObject {
    NSDictionary * URLAssetInitializationOptions;
    AVAssetInspector * assetInspector;
    long long  assetInspectorInitializationOnce;
    AVAssetInspectorLoader * assetInspectorLoader;
    struct OpaqueFigAsset { } * figAsset;
    long long  figAssetInitializationOnce;
    struct OpaqueFigFormatReader { } * formatReader;
    long long  formatReaderInitializationOnce;
    struct OpaqueFigMutableComposition { } * mutableComposition;
    struct CGSize { 
        double width; 
        double height; 
    }  naturalSize;
    NSMutableArray * tracks;
    long long  tracksInitializationOnce;
}

@end
