/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSStringDrawingContext : NSObject {
    CUICatalog * _CUICatalog;
    CUIStyleEffectConfiguration * _CUIStyleEffects;
    double  _actualScaleFactor;
    double  _actualTrackingAdjustment;
    double  _baselineOffset;
    double  _firstBaselineOffset;
    id  _layout;
    NSDictionary * _linkAttributes;
    unsigned long long  _maximumNumberOfLines;
    double  _minimumScaleFactor;
    double  _minimumTrackingAdjustment;
    unsigned long long  _numberOfLineFragments;
    double  _scaledBaselineOffset;
    double  _scaledLineHeight;
    struct { 
        unsigned int _wantsNumberOfLineFragments : 1; 
        unsigned int _wrapsForTruncationMode : 1; 
        unsigned int _wantsBaselineOffset : 1; 
        unsigned int _wantsScaledBaselineOffset : 1; 
        unsigned int _wantsScaledLineHeight : 1; 
        unsigned int _drawsDebugBaselines : 1; 
        unsigned int _cachesLayout : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
        unsigned int _activeRenderers : 4; 
    }  _sdcFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _totalBounds;
}

@property (nonatomic) unsigned long long activeRenderers;
@property (nonatomic) double actualScaleFactor;
@property (nonatomic, readonly) double actualTrackingAdjustment;
@property (nonatomic) double actualTrackingAdjustment;
@property (nonatomic) double baselineOffset;
@property (nonatomic) bool cachesLayout;
@property (nonatomic, retain) CUICatalog *cuiCatalog;
@property (nonatomic, retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic) bool drawsDebugBaselines;
@property (nonatomic) double firstBaselineOffset;
@property (nonatomic, retain) id layout;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) double minimumTrackingAdjustment;
@property (nonatomic) unsigned long long numberOfLineFragments;
@property (nonatomic) double scaledBaselineOffset;
@property (nonatomic) double scaledLineHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } totalBounds;
@property (nonatomic) bool usesSimpleTextEffects;
@property (nonatomic) bool wantsBaselineOffset;
@property (nonatomic) bool wantsNumberOfLineFragments;
@property (nonatomic) bool wantsScaledBaselineOffset;
@property (nonatomic) bool wantsScaledLineHeight;
@property (nonatomic) bool wrapsForTruncationMode;

- (unsigned long long)activeRenderers;
- (double)actualScaleFactor;
- (double)actualTrackingAdjustment;
- (double)baselineOffset;
- (bool)cachesLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (id)description;
- (bool)drawsDebugBaselines;
- (double)firstBaselineOffset;
- (id)layout;
- (unsigned long long)maximumNumberOfLines;
- (double)minimumScaleFactor;
- (double)minimumTrackingAdjustment;
- (unsigned long long)numberOfLineFragments;
- (double)scaledBaselineOffset;
- (double)scaledLineHeight;
- (void)setActiveRenderers:(unsigned long long)arg1;
- (void)setActualScaleFactor:(double)arg1;
- (void)setActualTrackingAdjustment:(double)arg1;
- (void)setBaselineOffset:(double)arg1;
- (void)setCachesLayout:(bool)arg1;
- (void)setCuiCatalog:(id)arg1;
- (void)setCuiStyleEffects:(id)arg1;
- (void)setDrawsDebugBaselines:(bool)arg1;
- (void)setFirstBaselineOffset:(double)arg1;
- (void)setLayout:(id)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setMinimumTrackingAdjustment:(double)arg1;
- (void)setNumberOfLineFragments:(unsigned long long)arg1;
- (void)setScaledBaselineOffset:(double)arg1;
- (void)setScaledLineHeight:(double)arg1;
- (void)setTotalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesSimpleTextEffects:(bool)arg1;
- (void)setWantsBaselineOffset:(bool)arg1;
- (void)setWantsNumberOfLineFragments:(bool)arg1;
- (void)setWantsScaledBaselineOffset:(bool)arg1;
- (void)setWantsScaledLineHeight:(bool)arg1;
- (void)setWrapsForTruncationMode:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })totalBounds;
- (bool)usesSimpleTextEffects;
- (bool)wantsBaselineOffset;
- (bool)wantsNumberOfLineFragments;
- (bool)wantsScaledBaselineOffset;
- (bool)wantsScaledLineHeight;
- (bool)wrapsForTruncationMode;

@end
