/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyDisplayContents : NSObject {
    long long  _displayPathType;
    NSString * _displayString;
    NSString * _displayStringImage;
    UIKBKeyDisplayContents * _fallbackContents;
    bool  _fillPath;
    bool  _flipImageHorizontally;
    bool  _force1xImages;
    NSArray * _highlightedVariantsList;
    NSArray * _secondaryDisplayStringImages;
    NSArray * _secondaryDisplayStrings;
    bool  _stringKeycapOverImage;
    NSArray * _variantDisplayContents;
}

@property (nonatomic) long long displayPathType;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, retain) NSString *displayStringImage;
@property (nonatomic, retain) UIKBKeyDisplayContents *fallbackContents;
@property (nonatomic) bool fillPath;
@property (nonatomic) bool flipImageHorizontally;
@property (nonatomic) bool force1xImages;
@property (nonatomic, retain) NSArray *highlightedVariantsList;
@property (nonatomic, retain) NSArray *secondaryDisplayStringImages;
@property (nonatomic, retain) NSArray *secondaryDisplayStrings;
@property (nonatomic) bool stringKeycapOverImage;
@property (nonatomic, retain) NSArray *variantDisplayContents;

+ (id)displayContents;

- (void)dealloc;
- (id)description;
- (long long)displayPathType;
- (id)displayString;
- (id)displayStringImage;
- (id)fallbackContents;
- (bool)fillPath;
- (bool)flipImageHorizontally;
- (bool)force1xImages;
- (id)highlightedVariantsList;
- (id)secondaryDisplayStringImages;
- (id)secondaryDisplayStrings;
- (void)setDisplayPathType:(long long)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayStringImage:(id)arg1;
- (void)setFallbackContents:(id)arg1;
- (void)setFillPath:(bool)arg1;
- (void)setFlipImageHorizontally:(bool)arg1;
- (void)setForce1xImages:(bool)arg1;
- (void)setHighlightedVariantsList:(id)arg1;
- (void)setSecondaryDisplayStringImages:(id)arg1;
- (void)setSecondaryDisplayStrings:(id)arg1;
- (void)setStringKeycapOverImage:(bool)arg1;
- (void)setVariantDisplayContents:(id)arg1;
- (bool)stringKeycapOverImage;
- (id)variantDisplayContents;

@end
