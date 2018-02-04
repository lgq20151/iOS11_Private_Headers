/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementContent : NSObject <NSCopying> {
    CLKImageProvider * _bodyImageProvider;
    bool  _bodyImageShouldStretch;
    unsigned long long  _description1FontStyle;
    CLKTextProvider * _description1TextProvider;
    unsigned long long  _description2FontStyle;
    CLKTextProvider * _description2TextProvider;
    CLKTextProvider * _description3TextProvider;
    NTKUpNextAccessoryDescription * _descriptionAccessory;
    unsigned int  _headerImageEdge;
    CLKImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageFocusRect;
    UIImage * _overrideBodyImage;
    NSString * _overrideBodyString;
    UIImage * _overrideHeaderImage;
    unsigned long long  _style;
    UIColor * _tintColor;
    bool  _tintColorAffectsHeader;
    bool  _useMonospaceFont;
    bool  _wantsFullCellPhoto;
}

@property (nonatomic, copy) CLKImageProvider *bodyImageProvider;
@property (nonatomic) bool bodyImageShouldStretch;
@property (nonatomic) unsigned long long description1FontStyle;
@property (nonatomic, copy) CLKTextProvider *description1TextProvider;
@property (nonatomic) unsigned long long description2FontStyle;
@property (nonatomic, copy) CLKTextProvider *description2TextProvider;
@property (nonatomic, copy) CLKTextProvider *description3TextProvider;
@property (nonatomic, copy) NTKUpNextAccessoryDescription *descriptionAccessory;
@property (nonatomic) unsigned int headerImageEdge;
@property (nonatomic, copy) CLKImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFocusRect;
@property (nonatomic, retain) UIImage *overrideBodyImage;
@property (nonatomic, retain) NSString *overrideBodyString;
@property (nonatomic, retain) UIImage *overrideHeaderImage;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic) bool tintColorAffectsHeader;
@property (nonatomic) bool useMonospaceFont;

+ (id)dashedContentTextProvider;

- (void).cxx_destruct;
- (id)_descriptionForProvider:(id)arg1;
- (id)bodyImageProvider;
- (bool)bodyImageShouldStretch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)description1FontStyle;
- (id)description1TextProvider;
- (unsigned long long)description2FontStyle;
- (id)description2TextProvider;
- (id)description3TextProvider;
- (id)descriptionAccessory;
- (unsigned long long)hash;
- (unsigned int)headerImageEdge;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFocusRect;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)overrideBodyImage;
- (id)overrideBodyString;
- (id)overrideHeaderImage;
- (void)setBodyImageProvider:(id)arg1;
- (void)setBodyImageShouldStretch:(bool)arg1;
- (void)setDescription1FontStyle:(unsigned long long)arg1;
- (void)setDescription1TextProvider:(id)arg1;
- (void)setDescription2FontStyle:(unsigned long long)arg1;
- (void)setDescription2TextProvider:(id)arg1;
- (void)setDescription3TextProvider:(id)arg1;
- (void)setDescriptionAccessory:(id)arg1;
- (void)setHeaderImageEdge:(unsigned int)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (void)setImageFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverrideBodyImage:(id)arg1;
- (void)setOverrideBodyString:(id)arg1;
- (void)setOverrideHeaderImage:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColorAffectsHeader:(bool)arg1;
- (void)setUseMonospaceFont:(bool)arg1;
- (void)setWantsFullCellPhoto:(bool)arg1;
- (unsigned long long)style;
- (id)tintColor;
- (bool)tintColorAffectsHeader;
- (bool)useMonospaceFont;
- (bool)wantsFullCellPhoto;

@end