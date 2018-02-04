/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewElementHorizontalLayout : NSObject {
    double  _elementSpacing;
    double  _layoutWidth;
    long long  _maximumElementsPerLine;
    long long  _maximumLines;
}

@property (nonatomic) double elementSpacing;
@property (nonatomic) double layoutWidth;
@property (nonatomic) long long maximumElementsPerLine;
@property (nonatomic) long long maximumLines;

- (double)elementSpacing;
- (id)layoutViewElements:(id)arg1 usingSizingBlock:(id /* block */)arg2;
- (double)layoutWidth;
- (long long)maximumElementsPerLine;
- (long long)maximumLines;
- (void)setElementSpacing:(double)arg1;
- (void)setLayoutWidth:(double)arg1;
- (void)setMaximumElementsPerLine:(long long)arg1;
- (void)setMaximumLines:(long long)arg1;

@end