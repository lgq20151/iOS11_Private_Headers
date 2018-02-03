/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSShadow : NSObject <NSCoding, NSCopying> {
    double  _shadowBlurRadius;
    NSColor * _shadowColor;
    unsigned long long  _shadowFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
}

@property (nonatomic) double shadowBlurRadius;
@property (nonatomic, retain) id shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;

+ (id)defaultShadowColor;
+ (void)initialize;
+ (id)shadow;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithShadow:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setShadowBlurRadius:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (double)shadowBlurRadius;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;

@end
