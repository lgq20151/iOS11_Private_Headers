/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {
    bool  _centerFilled;
    NSObject * _geometryCacheKey;
    bool  _hasCandidateKeys;
    UITextInputTraits * _inputTraits;
    bool  _isSplit;
    UIKBTree * _keyplane;
    UIKBRenderConfig * _renderConfig;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _splitLeftCacheRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _splitLeftRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _splitRightCacheRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _splitRightRect;
    int  _topCorners;
    int  _visualStyle;
}

@property (nonatomic, readonly) bool cacheDeferable;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) double cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject *geometryCacheKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepNonPersistent;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (readonly) Class superclass;

- (bool)_canDrawContent;
- (bool)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (double)cachedWidth;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)geometryCacheKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)keepNonPersistent;
- (void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2;
- (id)renderConfig;
- (void)setGeometryCacheKey:(id)arg1;
- (void)setRenderConfig:(id)arg1;

@end
