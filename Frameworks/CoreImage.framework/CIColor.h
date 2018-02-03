/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColor : NSObject <NSCopying, NSSecureCoding> {
    void * _pad;
    void * _priv;
}

@property (readonly) double alpha;
@property (readonly) double blue;
@property (readonly) struct CGColorSpace { }*colorSpace;
@property (readonly) const double*components;
@property (readonly) double green;
@property (readonly) unsigned long long numberOfComponents;
@property (readonly) double red;
@property (readonly) NSString *stringRepresentation;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

+ (id)blackColor;
+ (id)blueColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
+ (id)colorWithString:(id)arg1;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)magentaColor;
+ (id)redColor;
+ (bool)supportsSecureCoding;
+ (id)whiteColor;
+ (id)yellowColor;

- (double)alpha;
- (double)blue;
- (struct CGColor { }*)cgColor;
- (struct CGColorSpace { }*)colorSpace;
- (const double*)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (double)green;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfComponents;
- (double)red;
- (id)stringRepresentation;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)initWithColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

+ (id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)colorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;

@end
