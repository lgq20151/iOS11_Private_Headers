/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {
    double  _baselineDelta;
    CUICatalog * _catalog;
    NSConcreteNotifyingMutableAttributedString * _contents;
    double  _defaultTighteningFactor;
    NSLayoutManager * _layoutManager;
    struct { 
        unsigned int _typesetterBehavior : 4; 
        unsigned int _needToFlushCache : 1; 
        unsigned int _baselineMode : 1; 
        unsigned int _forceWordWrapping : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
        unsigned int _reserved : 24; 
    }  _sdflags;
    CUIStyleEffectConfiguration * _styleEffects;
    NSTextContainer * _textContainer;
}

@property (nonatomic, retain) CUICatalog *cuiCatalog;
@property (nonatomic, retain) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (readonly, copy) NSString *debugDescription;
@property double defaultTighteningFactor;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:, nonatomic) bool usesSimpleTextEffects;

+ (bool)_hasCustomSettings;
+ (void)_setHasCustomSettings:(bool)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)stringDrawingTextStorage;

- (double)_baselineDelta;
- (bool)_baselineMode;
- (bool)_forceWordWrapping;
- (bool)_isDeallocating;
- (bool)_isStringDrawingTextStorage;
- (void)_setBaselineDelta:(double)arg1;
- (void)_setBaselineMode:(bool)arg1;
- (void)_setForceWordWrapping:(bool)arg1;
- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (bool)_shouldSetOriginalFontAttribute;
- (bool)_tryRetain;
- (bool)_usesSimpleTextEffects;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })defaultTextContainerOriginForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)defaultTighteningFactor;
- (void)drawTextContainer:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 graphicsContext:(struct CGContext { }*)arg4 baselineMode:(bool)arg5 scrollable:(bool)arg6 padding:(double)arg7;
- (void)drawTextContainer:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 graphicsContext:(struct CGContext { }*)arg3 baselineMode:(bool)arg4 scrollable:(bool)arg5 padding:(double)arg6;
- (void)fontSetChanged;
- (id)init;
- (id)layoutManager;
- (unsigned long long)length;
- (void)processEditing;
- (oneway void)release;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setCuiCatalog:(id)arg1;
- (void)setCuiStyleEffects:(id)arg1;
- (void)setDefaultTighteningFactor:(double)arg1;
- (id)string;
- (id)textContainer;
- (id)textContainerForAttributedString:(id)arg1;
- (id)textContainerForAttributedString:(id)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2 lineFragmentPadding:(double)arg3;
- (long long)typesetterBehavior;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usedRectForTextContainer:(id)arg1;

@end
