/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetDownloadSessionInternal : NSObject {
    NSURL * URL;
    AVURLAsset * asset;
    struct CMBaseObject { } * assetDownloader;
    NSNumber * cachePrimingDownloadTokenNum;
    NSURL * destinationURL;
    unsigned long long  downloadToken;
    NSError * error;
    struct OpaqueFigAsset { } * figAsset;
    struct OpaqueFigPlaybackItem { } * playbackItem;
    struct OpaqueFigPlayer { } * player;
    long long  priority;
    NSObject<OS_dispatch_queue> * readWriteQueue;
    long long  status;
    AVWeakReference * weakReference;
}

@end
