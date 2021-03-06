/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _WrappedTextLayerView : UIView <CLKUILabel> {
    NSAttributedString * _attributedText;
    UIFont * _font;
    bool  _isValid;
    NSString * _text;
    long long  _textAlignment;
    UIColor * _textColor;
}

@property (nonatomic, readonly) double _lastLineBaseline;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } opticalInsets;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (double)_lastLineBaseline;
- (id)attributedText;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textLayer;

@end
