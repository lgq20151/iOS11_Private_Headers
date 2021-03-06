/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPGlyphStyle : NSObject {
    LPImage * _image;
    LPImageViewStyle * _imageStyle;
    double  _opacity;
    LPPadding * _padding;
}

@property (nonatomic, retain) LPImage *image;
@property (nonatomic, readonly) LPImageViewStyle *imageStyle;
@property (nonatomic) double opacity;
@property (nonatomic, readonly, retain) LPPadding *padding;

- (void).cxx_destruct;
- (id)image;
- (id)imageStyle;
- (id)initSearchGlyph;
- (double)opacity;
- (id)padding;
- (void)setImage:(id)arg1;
- (void)setOpacity:(double)arg1;

@end
