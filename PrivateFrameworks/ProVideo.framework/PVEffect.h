/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVEffect : NSObject <NSCopying, NSSecureCoding> {
    bool  _conformToInputAspect;
    NSString * _displayName;
    NSString * _effectID;
    NSMutableDictionary * _effectParameters;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _effectRange;
    NSString * _effectType;
    NSMutableDictionary * _inspectableProperties;
    NSLock * _inspectablePropertiesLock;
    bool  _isPreview;
    bool  _isRecording;
    struct PCAtomicValue { int x1; } * _loadCount;
    bool  _useLocalLoopTime;
}

@property (nonatomic) bool conformToInputAspect;
@property (nonatomic, retain) NSMutableDictionary *effectParameters;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } effectRange;
@property (nonatomic, retain) NSMutableDictionary *inspectableProperties;
@property (nonatomic) bool isPreview;
@property (nonatomic) bool isRecording;
@property (nonatomic) bool useLocalLoopTime;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)_effectRegistry;
+ (id)_effectRegistryForLookup;
+ (void)_registerBuiltInEffects;
+ (void)_registerEffectsInBundle:(id)arg1 atPath:(id)arg2;
+ (id)_registeredEffectClasses;
+ (id)_registryEntryForEffectID:(id)arg1;
+ (id)allRegisteredEffectIDs;
+ (void)appFinishedLaunching:(id)arg1;
+ (id)categoryForEffectID:(id)arg1;
+ (Class)classForEffectID:(id)arg1;
+ (void)cleanupEffectsCache;
+ (void)clearPreviewStats;
+ (id)defaultVideoTransitionEffectID;
+ (void)deferEffectRegistrationForClass:(Class)arg1;
+ (id)descriptionForEffectID:(id)arg1;
+ (id)displayNameForEffectID:(id)arg1;
+ (id)displayNameForEffectType:(id)arg1;
+ (bool)effectIDIsRegistered:(id)arg1;
+ (id)effectTypeForEffectID:(id)arg1;
+ (void)ensureEffectsRegistered;
+ (id)firstRegisteredEffectIDContainingSubstring:(id)arg1;
+ (void)initEffectRegistry;
+ (bool)isVideoForEffectID:(id)arg1;
+ (id)newEffectWithData:(id)arg1;
+ (id)newEffectWithData:(id)arg1;
+ (id)newEffectWithID:(id)arg1;
+ (id)newEffectWithURL:(id)arg1;
+ (id)newEffectWithURL:(id)arg1;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)noteApplicationWillTerminate;
+ (id)propertiesForEffect:(id)arg1;
+ (void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3;
+ (void)registerEffects;
+ (id)registeredEffectIDsForClass:(Class)arg1;
+ (id)registeredEffectIDsForEffectType:(id)arg1;
+ (id)registeredEffectIDsForEffectTypes:(id)arg1;
+ (void)runDeferredRegistration;
+ (bool)supportsSecureCoding;
+ (id)themeForEffectID:(id)arg1;
+ (id)userVisibleEffectIDs;
+ (void)willTerminate:(id)arg1;

- (void).cxx_destruct;
- (void)_copyWithZone:(struct _NSZone { }*)arg1 into:(id)arg2;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (void)_postInit:(id)arg1;
- (void)applyInspectableProperties;
- (id)categoryName;
- (void)clearTranscription;
- (bool)conformToInputAspect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (id)description;
- (void)disableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (id)displayName;
- (id)effectDescription;
- (id)effectID;
- (id)effectParameters;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })effectRange;
- (id)effectType;
- (void)enableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(const struct PVInputHGNodeMap<unsigned int> { struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (void)imagePoints:(struct CGPoint { double x1; double x2; }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)imagePoints:(struct CGPoint { double x1; double x2; }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 includeDropShadow:(bool)arg3;
- (void)imagePointsAtPosterFrameTime:(struct CGPoint { double x1; double x2; }*)arg1 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)imagePointsAtPosterFrameTime:(struct CGPoint { double x1; double x2; }*)arg1 componentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 includeDropShadow:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectID:(id)arg1;
- (id)inspectableProperties;
- (bool)isPreview;
- (bool)isRecording;
- (bool)isTextFlipped;
- (bool)isTranscription;
- (void)loadEffect;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)orientation;
- (int)origin;
- (struct CGSize { double x1; double x2; })outputSize;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })previewHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputHGNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderer:(struct HGRenderer { int (**x1)(); unsigned int x2; struct HGNode {} *x3; struct HGBitmap {} *x4; struct HGRendererTextureUnit { struct HGBitmap {} *x_5_1_1; struct HGTransform {} *x_5_1_2; int x_5_1_3; } x5[8]; struct vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_6_1_1; struct DepthBufferManager {} **x_6_1_2; struct __compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_3_2_1; } x_6_1_3; } x6; struct vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_7_1_1; struct HGExecutionUnit {} **x_7_1_2; struct __compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_3_2_1; } x_7_1_3; } x7; struct HGExecutionData {} *x8; struct HGSyncData {} *x9; struct _opaque_pthread_rwlock_t { long long x_10_1_1; BOOL x_10_1_2[192]; } x10; struct _opaque_pthread_mutex_t { long long x_11_1_1; BOOL x_11_1_2[56]; } x11; struct HGLUTCacheManager {} *x12; }*)arg4;
- (void)releaseEffect;
- (void)releaseResources;
- (void)resetToDefaultTranscription;
- (void)setConformToInputAspect:(bool)arg1;
- (void)setEffectParameters:(id)arg1;
- (void)setEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setInspectableProperties:(id)arg1;
- (void)setIsPreview:(bool)arg1;
- (void)setIsRecording:(bool)arg1;
- (void)setTopLevelGroupTransform:(id)arg1;
- (void)setTranscriptionText:(id)arg1;
- (void)setUseLocalLoopTime:(bool)arg1;
- (bool)shouldRenderPreviewAtPosterTime;
- (bool)supportsExtendedRangeInputs;
- (bool)supportsFlippingText;
- (bool)supportsOrientation;
- (id)textEditingBounds:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)textImagePoints:(struct CGPoint { double x1; double x2; }*)arg1 textAtIndex:(unsigned long long)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)textImagePoints:(struct CGPoint { double x1; double x2; }*)arg1 textAtIndex:(unsigned long long)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeDropShadow:(bool)arg4;
- (id)textTransforms:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)topLevelGroupTransform;
- (double)topLevelOpacity;
- (bool)transcriptionHitTest:(struct CGPoint { double x1; double x2; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)updateInspectableProperties;
- (void)updateInspectableProperties:(id)arg1;
- (bool)useLocalLoopTime;
- (bool)usesDefaultChannelDataEncoding;
- (bool)writeDefaultChannels;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;

- (id)plistRepresentation;

@end
