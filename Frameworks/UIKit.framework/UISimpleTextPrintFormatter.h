/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISimpleTextPrintFormatter : UIPrintFormatter

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;

- (id)initWithAttributedText:(id)arg1;
- (id)initWithText:(id)arg1;

@end
