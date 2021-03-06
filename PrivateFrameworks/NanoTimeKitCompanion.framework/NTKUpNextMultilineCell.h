/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextMultilineCell : NTKUpNextBaseCell {
    NTKUpNextAccessoryView * _accessoryView;
    UILayoutGuide * _bodyImageSizingLayoutGuide;
    CLKFont * _boldFont;
    UILayoutGuide * _contentLayoutGuide;
    NTKUpNextImageView * _descriptionImageView;
    NTKColoringLabel * _descriptionLine1Label;
    NTKColoringLabel * _descriptionLine2Label;
    UILayoutGuide * _descriptionTextLayoutGuide;
    NTKUpNextImageView * _headerImage;
    unsigned int  _headerImageEdge;
    NTKColoringLabel * _headerLabel;
    NSArray * _headerWithLeftImageConstraints;
    NSArray * _headerWithNoImageConstraints;
    NSArray * _headerWithRightImageConstraints;
    CLKFont * _italicFont;
    bool  _showingAccessory;
    bool  _showingDescriptionImage;
    bool  _showingHeader;
    bool  _showingHeaderImage;
    bool  _showingThreeLineLayout;
    CLKFont * _standardFont;
    bool  _usingStretchableImage;
    NSArray * _withDescription2Constraints;
    NSArray * _withDescriptionAccessoryConstraints;
    NSArray * _withDescriptionImageViewConstraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withStretchableDescriptionImageViewConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutDescriptionAccessoryConstraints;
    NSArray * _withoutDescriptionImageViewConstraints;
    NSArray * _withoutHeaderConstraints;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;

@end
