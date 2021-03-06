/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionPresentationProperties : NSObject {
    UIColor * _color;
    NSNumber * _maximumNumberOfLines;
    NSString * _text;
    double  _textScale;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSNumber *maximumNumberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) double textScale;

- (void).cxx_destruct;
- (id)color;
- (id)init;
- (id)maximumNumberOfLines;
- (void)setColor:(id)arg1;
- (void)setMaximumNumberOfLines:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextScale:(double)arg1;
- (id)text;
- (double)textScale;

@end
