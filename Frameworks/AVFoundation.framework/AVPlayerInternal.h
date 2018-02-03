/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerInternal : NSObject {
    void * IAPDCallbackToken;
    bool  IOwnTheFigPlayer;
    bool  allowsOutOfBandTextTrackRendering;
    NSString * ancillaryPerformanceInformationForDisplay;
    AVAudioSession * audioSession;
    AVAudioSessionMediaPlayerOnly * audioSessionMediaPlayerOnly;
    bool  autoSwitchStreamVariants;
    bool  automaticallyWaitsToMinimizeStalling;
    NSHashTable * avPlayerLayers;
    NSDictionary * cachedFigMediaSelectionCriteriaProperty;
    NSString * captionPipelineStrategy;
    NSString * captionRenderingStrategy;
    NSMutableArray * closedCaptionLayers;
    NSObject<OS_dispatch_queue> * configurationQueue;
    AVPlayerItem * currentItem;
    <AVCallbackCancellation><AVKVOIntrospection> * currentItemPreferredPixelBufferAttributesCallbackInvoker;
    NSObject<OS_dispatch_queue> * currentItemPropertyUpdateQueue;
    <AVCallbackCancellation><AVKVOIntrospection> * currentItemSuppressesVideoLayersCallbackInvoker;
    struct CGSize { 
        double width; 
        double height; 
    }  dimensionsOfReservedVideoMemory;
    NSArray * displaysUsedForPlayback;
    NSError * error;
    NSArray * expectedAssetTypes;
    NSString * externalPlaybackVideoGravity;
    NSObject<OS_dispatch_queue> * figConfigurationQueue;
    struct OpaqueCMClock { } * figMasterClock;
    struct OpaqueFigPlaybackItem { } * figPlaybackItemToIdentifyNextCurrentItem;
    struct OpaqueFigPlayer { } * figPlayer;
    bool  hadAssociatedOnscreenPlayerLayerWhenSuspended;
    NSMutableArray * handlersToCallWhenReadyToPlay;
    bool  hostApplicationInForeground;
    NSMutableSet * items;
    NSArray * itemsInFigPlayQueue;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    AVPlayerItem * lastItem;
    bool  layerDestinationIsTVOut;
    NSObject<OS_dispatch_queue> * layerInteractionQueue;
    NSObject<OS_dispatch_queue> * layersQ;
    bool  logPerformanceData;
    NSString * multichannelAudioStrategy;
    bool  needsToCreateFigPlayer;
    int  nextPrerollIDToGenerate;
    AVOutputContext * outputContext;
    NSMutableDictionary * pendingFigPlayerProperties;
    int  pendingPrerollID;
    AVPixelBufferAttributeMediator * pixelBufferAttributeMediator;
    NSString * playerRole;
    bool  preparesItemsForPlaybackAsynchronously;
    id /* block */  prerollCompletionHandler;
    struct OpaqueFigSimpleMutex { } * prerollIDMutex;
    AVPropertyStorage * propertyStorage;
    struct OpaqueCMTimebase { } * proxyTimebase;
    NSArray * queueModifications;
    bool  reevaluateBackgroundPlayback;
    bool  shouldReduceResourceUsage;
    NSObject<OS_dispatch_queue> * stateDispatchQueue;
    long long  status;
    NSMutableArray * subtitleLayers;
    bool  usesDedicatedNotificationQueueForMediaServices;
    bool  usesLegacyAutomaticWaitingBehavior;
    NSDictionary * vibrationPattern;
    struct __CFDictionary { } * videoLayers;
    AVWeakReference * weakReference;
}

@end
