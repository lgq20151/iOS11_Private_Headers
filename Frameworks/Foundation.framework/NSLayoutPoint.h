/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutPoint : NSObject <NSCoding, NSCopying> {
    NSLayoutXAxisAnchor * _xAxisAnchor;
    NSLayoutYAxisAnchor * _yAxisAnchor;
}

@property (readonly, copy) NSLayoutXAxisAnchor *xAxisAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *yAxisAnchor;

+ (id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
+ (id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;

- (id)constraintsEqualToLayoutPoint:(id)arg1;
- (id)constraintsEqualToPoint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)ruleEqualToLayoutPoint:(id)arg1;
- (struct CGPoint { double x1; double x2; })valueInItem:(id)arg1;
- (id)xAxisAnchor;
- (id)yAxisAnchor;

@end
