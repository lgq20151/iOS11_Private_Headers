/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _attributes;
    id  _reserved1;
    id  _reserved2;
    id  _reserved3;
    id  _reserved4;
    id  _reserved5;
}

@property (nonatomic, readonly) NSDictionary *fontAttributes;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } matrix;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) NSString *postscriptName;
@property (nonatomic, readonly) unsigned int symbolicTraits;

+ (id)_createMungledDictionary:(id)arg1;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)_attributes;
- (id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2;
- (id)_visibleName;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fontAttributes;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)fontDescriptorWithFace:(id)arg1;
- (id)fontDescriptorWithFamily:(id)arg1;
- (id)fontDescriptorWithMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)fontDescriptorWithSize:(double)arg1;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontAttributes:(id)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })matrix;
- (id)objectForKey:(id)arg1;
- (double)pointSize;
- (id)postscriptName;
- (unsigned int)symbolicTraits;

@end
