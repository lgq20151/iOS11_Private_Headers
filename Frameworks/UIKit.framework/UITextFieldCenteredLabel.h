/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextFieldCenteredLabel : UITextFieldLabel {
    double  _textWidth;
    double  _textXPosition;
}

@property (nonatomic) double textWidth;
@property (nonatomic) double textXPosition;

- (bool)_isTextFieldCenteredLabel;
- (void)setTextWidth:(double)arg1;
- (void)setTextXPosition:(double)arg1;
- (double)textWidth;
- (double)textXPosition;

@end
