/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAttributionLabel : UIView {
    NSAttributedString * _innerText;
    unsigned long long  _mapType;
    NSAttributedString * _strokeText;
    bool  _useDarkText;
}

@property (nonatomic) unsigned long long mapType;

- (void).cxx_destruct;
- (id)_attributesWithStroke:(bool)arg1;
- (void)_prepareLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)mapType;
- (void)setMapType:(unsigned long long)arg1;
- (void)sizeToFit;

@end