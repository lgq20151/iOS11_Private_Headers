/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUANFEndOfArticlePublisherOperationResult : NSObject {
    UIImage * _nameButtonHighlightImage;
    UIImage * _nameButtonImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _nameButtonImageSize;
    NSAttributedString * _titleAttributedString;
}

@property (nonatomic, retain) UIImage *nameButtonHighlightImage;
@property (nonatomic, retain) UIImage *nameButtonImage;
@property (nonatomic) struct CGSize { double x1; double x2; } nameButtonImageSize;
@property (nonatomic, retain) NSAttributedString *titleAttributedString;

+ (id)titleAttributes;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 buttonImage:(id)arg2 buttonSize:(struct CGSize { double x1; double x2; })arg3;
- (id)nameButtonHighlightImage;
- (id)nameButtonImage;
- (struct CGSize { double x1; double x2; })nameButtonImageSize;
- (void)setNameButtonHighlightImage:(id)arg1;
- (void)setNameButtonImage:(id)arg1;
- (void)setNameButtonImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTitleAttributedString:(id)arg1;
- (id)titleAttributedString;

@end
