/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        long long userInterfaceIdiom; 
        double displayScale; 
        long long displayGamut; 
        long long touchLevel; 
        unsigned long long interactionModel; 
        unsigned long long primaryInteractionModel; 
        long long horizontalSizeClass; 
        long long verticalSizeClass; 
        long long userInterfaceStyle; 
        long long layoutDirection; 
        long long forceTouchCapability; 
        long long preferredContentSizeCategory; 
        double displayCornerRadius; 
    }  _builtinTraits;
    NSDictionary * _clientDefinedTraits;
}

@property (nonatomic, readonly) long long barMetrics;
@property (nonatomic, readonly) long long barPosition;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) long long forceTouchCapability;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) long long userInterfaceIdiom;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long verticalSizeClass;

+ (id)_emptyTraitCollection;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)traitCollectionWithBarMetrics:(long long)arg1;
+ (id)traitCollectionWithBarPosition:(long long)arg1;
+ (id)traitCollectionWithDisplayCornerRadius:(double)arg1;
+ (id)traitCollectionWithDisplayGamut:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithForceTouchCapability:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithLayoutDirection:(long long)arg1;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)arg1;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;

- (bool)_changedContentSizeCategoryFromTraitCollection:(id)arg1;
- (long long)_compare:(id)arg1;
- (id)_initWithBuiltinTraitStorage:(struct { long long x1; double x2; long long x3; long long x4; unsigned long long x5; unsigned long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; double x13; }*)arg1 clientDefinedTraits:(id)arg2;
- (bool)_matchesIntersectionWithTraitCollection:(id)arg1;
- (id)_namedImageDescription;
- (id)_traitCollectionByReplacingValue:(id)arg1 forTraitName:(id)arg2;
- (id)_valueForTraitNamed:(id)arg1;
- (long long)barMetrics;
- (long long)barPosition;
- (bool)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)displayCornerRadius;
- (long long)displayGamut;
- (double)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (long long)forceTouchCapability;
- (unsigned long long)hash;
- (long long)horizontalSizeClass;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionModel;
- (bool)isEqual:(id)arg1;
- (long long)layoutDirection;
- (id)preferredContentSizeCategory;
- (unsigned long long)primaryInteractionModel;
- (long long)touchLevel;
- (long long)userInterfaceIdiom;
- (long long)userInterfaceStyle;
- (long long)verticalSizeClass;

@end
