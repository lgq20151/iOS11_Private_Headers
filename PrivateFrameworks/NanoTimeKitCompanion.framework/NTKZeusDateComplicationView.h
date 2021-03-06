/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusDateComplicationView : NTKZeusComplicationView <NTKDateComplicationDisplay> {
    int  _currentDayNumber;
    UIImageView * _imageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (unsigned long long)desiredDateComplicationDateStyle;
- (id)init;
- (void)layoutSubviews;
- (void)setDateComplicationText:(id)arg1 forDateStyle:(unsigned long long)arg2;
- (void)setStyle:(unsigned long long)arg1;

@end
