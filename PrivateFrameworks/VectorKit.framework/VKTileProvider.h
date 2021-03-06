/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient> {
    <VKTileProviderClient> * _client;
    double  _contentScale;
    <VKMapLayer> * _debugLayer;
    GEOTileKeyList * _debugLayerKeys;
    _VKTileProviderTimerTarget * _evaluationTarget;
    VKTimer * _evaluationTimer;
    bool  _exclusionAreaVisible;
    struct vector<md::TileExclusionArea, std::__1::allocator<md::TileExclusionArea> > { 
        struct TileExclusionArea {} *__begin_; 
        struct TileExclusionArea {} *__end_; 
        struct __compressed_pair<md::TileExclusionArea *, std::__1::allocator<md::TileExclusionArea> > { 
            struct TileExclusionArea {} *__first_; 
        } __end_cap_; 
    }  _exclusionAreas;
    unsigned char  _fallbackFunction;
    NSMutableSet * _fallbackTiles;
    bool  _finishedLoading;
    bool  _finishedLoadingOptionalLayers;
    bool  _hasFailedTile;
    NSArray * _holes;
    VKTileKeyList * _keysInView;
    struct VKCameraState { 
        struct RigidTransform<double> { 
            struct Quaternion<double> { 
                struct Matrix<double, 3, 1> { 
                    double _e[3]; 
                } _imaginary; 
                double _scalar; 
            } _rotation; 
            struct Matrix<double, 3, 1> { 
                double _e[3]; 
            } _translation; 
        } transform; 
        double aspectRatio; 
        double verticalFieldOfView; 
        double horizontalOffset; 
    }  _lastCameraState;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastCanvasSize;
    double  _lastFetchTime;
    double  _lastHoleLogTime;
    float  _lastMidDisplayZoomLevel;
    double  _lastSelectTime;
    float  _loadingProgress;
    NSLocale * _locale;
    NSMutableSet * _lostTiles;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    int  _mode;
    VKTileKeyList * _neighborKeys;
    unsigned long long  _neighborMode;
    NSMutableSet * _neighborTiles;
    VKTileSource * _optionalTileSources;
    bool  _prefetchEnabled;
    VKTileKeyList * _prefetchKeys;
    unsigned int  _prefetchNumberOfScreens;
    _VKTileProviderTimerTarget * _prefetchTarget;
    VKTimer * _prefetchTimer;
    VKTileKeyList * _previousTiles;
    VKMapRasterizer * _rasterizer;
    struct { 
        double x; 
        double y; 
    }  _sortPoint;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    VKTileCache * _tilePool;
    unsigned long long  _tileReserveLimit;
    struct unique_ptr<md::TileSelector, std::__1::default_delete<md::TileSelector> > { 
        struct __compressed_pair<md::TileSelector *, std::__1::default_delete<md::TileSelector> > { 
            struct TileSelector {} *__first_; 
        } __ptr_; 
    }  _tileSelector;
    bool  _tilesChanged;
    VKTileSource * _tilesSources;
    NSMutableSet * _tilesToRender;
    bool  _useSmallTileCache;
    bool  _useStableFallback;
}

@property (nonatomic) <VKTileProviderClient> *client;
@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <VKMapLayer> *debugLayer;
@property (nonatomic, readonly) GEOTileKeyList *debugLayerKeys;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char fallbackFunction;
@property (getter=isFinishedLoading, nonatomic, readonly) bool finishedLoading;
@property (getter=isFinishedLoadingOptionalLayers, nonatomic, readonly) bool finishedLoadingOptionalLayers;
@property (nonatomic, readonly) bool hasFailedTile;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VKTileKeyList *keysInView;
@property (nonatomic, readonly) float loadingProgress;
@property (nonatomic) double lodBias;
@property (nonatomic) int mode;
@property (nonatomic, readonly) VKTileKeyList *neighborKeys;
@property (nonatomic) unsigned long long neighborMode;
@property (nonatomic, readonly) NSSet *neighborTiles;
@property (getter=isPrefetchEnabled, nonatomic) bool prefetchEnabled;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tilesToRender;
@property (nonatomic) bool useStableFallback;
@property (nonatomic, readonly) NSArray *visibleTileSets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned char)arg3;
- (void)_disableTimers;
- (void)_fetchAvailableTiles:(bool)arg1;
- (void)_fillHoles:(id)arg1 context:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (void)_prefetchTiles;
- (void)_resizeCache;
- (void)_updateTimers:(int)arg1;
- (void)bestAccuracyFallbackForHoles:(id)arg1 context:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 previousTiles:(id)arg3;
- (bool)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg3;
- (bool)canRenderTile:(id)arg1;
- (void)cancelLoadForMapTile:(id)arg1;
- (void)cancelLoadingTiles;
- (void)changeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 toState:(unsigned long long)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned char)arg5;
- (void)clearScene;
- (id)client;
- (void)configureTileSelection;
- (double)contentScale;
- (void)dealloc;
- (id)debugLayer;
- (id)debugLayerKeys;
- (id)describeReasonForTileBeingHole:(id)arg1 atTime:(double)arg2;
- (void)describeTilesFromList:(id)arg1 output:(id)arg2;
- (void)describeTilesFromList:(id)arg1 outputtoDict:(id)arg2;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)dirtyTile:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 source:(id)arg2;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (bool)evaluateNeighborTileForRendering:(id)arg1;
- (bool)evaluateSelectedTileForRendering:(id)arg1;
- (unsigned char)fallbackFunction;
- (void)flushCaches:(bool)arg1;
- (void)foreachActiveLayer:(id /* block */)arg1;
- (void)foreachOptionalLayer:(id /* block */)arg1;
- (bool)hasAllTileData:(id)arg1;
- (bool)hasFailedTile;
- (bool)hasRequiredTileData:(id)arg1;
- (bool)inFailedState:(id)arg1;
- (id)initWithClient:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 taskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; })arg4 tileSelectionProfile:(struct unique_ptr<md::TileSelectionProfile, std::__1::default_delete<md::TileSelectionProfile> > { struct __compressed_pair<md::TileSelectionProfile *, std::__1::default_delete<md::TileSelectionProfile> > { struct TileSelectionProfile {} *x_1_1_1; } x1; }*)arg5;
- (void)invalidateRasterizedTiles;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (bool)isFinishedLoading;
- (bool)isFinishedLoadingOptionalLayers;
- (bool)isPrefetchEnabled;
- (id)keysInView;
- (unsigned char)layerForSource:(id)arg1;
- (float)loadingProgress;
- (double)lodBias;
- (void)logPersistentHoles;
- (int)mode;
- (id)neighborKeys;
- (unsigned long long)neighborMode;
- (id)neighborTiles;
- (void)populateDebugNode:(struct shared_ptr<md::DebugTreeNode> { struct DebugTreeNode {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)populateDebugNodeForKeys:(struct shared_ptr<md::DebugTreeNode> { struct DebugTreeNode {} *x1; struct __shared_weak_count {} *x2; })arg1 keys:(id)arg2;
- (void)populateDebugNodeForTiles:(struct shared_ptr<md::DebugTreeNode> { struct DebugTreeNode {} *x1; struct __shared_weak_count {} *x2; })arg1 tiles:(id)arg2;
- (void)prepareTileForRendering:(id)arg1;
- (void)quiesce;
- (void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)releaseBestAccuracyFallbackTilesForTile:(id)arg1 context:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 previousTiles:(id)arg3;
- (void)releaseFallbackTileForRendering:(id)arg1;
- (void)releaseNeighborTileForRendering:(id)arg1;
- (void)releaseTileForRendering:(id)arg1;
- (void)removeTileSourceForMapLayer:(unsigned char)arg1;
- (void)requireRasterization:(id)arg1;
- (void)rescindOverlappedTiles;
- (void)rescindTileForRendering:(id)arg1;
- (void)retireNeighborTiles:(id)arg1;
- (void)retireRenderTiles:(id)arg1;
- (id)selectTiles:(int*)arg1 needRasterization:(bool*)arg2;
- (void)setClient:(id)arg1;
- (void)setContentScale:(double)arg1;
- (void)setDebugLayer:(id)arg1;
- (void)setFallbackFunction:(unsigned char)arg1;
- (void)setLodBias:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setNeighborMode:(unsigned long long)arg1;
- (void)setPrefetchEnabled:(bool)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setTileExclusionAreas:(const struct vector<md::TileExclusionArea, std::__1::allocator<md::TileExclusionArea> > { struct TileExclusionArea {} *x1; struct TileExclusionArea {} *x2; struct __compressed_pair<md::TileExclusionArea *, std::__1::allocator<md::TileExclusionArea> > { struct TileExclusionArea {} *x_3_1_1; } x3; }*)arg1;
- (void)setTileSource:(id)arg1 forMapLayer:(unsigned char)arg2 optional:(bool)arg3;
- (void)setUseStableFallback:(bool)arg1;
- (id)sourceForLayer:(unsigned char)arg1;
- (id)sourceForMapLayer:(id)arg1;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (bool)tile:(id)arg1 hasBecomeTerminalSince:(double)arg2;
- (bool)tileExclusionAreaVisible;
- (id)tileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (bool)tileMatters:(id)arg1;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg2 level:(long long)arg3;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2;
- (bool)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg2;
- (long long)tileSource:(id)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (void)tileSourcesDidChange;
- (void)tileStatusFromList:(id)arg1 canRender:(out id*)arg2 canNotRender:(out id*)arg3;
- (id)tilesToRender;
- (double)timeTileLastUpdatedHoleStatus:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)updateWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1 selectionScale:(float)arg2;
- (bool)useStableFallback;
- (id)visibleTileSets;
- (void)willStartLoadingTiles;

@end
