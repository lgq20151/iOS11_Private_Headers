/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPreviewAction : NSObject <NSCopying, UIPreviewActionItem, UIPreviewActionItem_Internal> {
    UIColor * _color;
    id /* block */  _handler;
    NSString * _identifier;
    UIImage * _image;
    long long  _style;
    NSString * _title;
}

@property (getter=_color, setter=_setColor:, nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_actionWithPreviewMenuItem:(id)arg1;
+ (id)_actionWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(id /* block */)arg4;
+ (id)_actionWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 image:(id)arg4 handler:(id /* block */)arg5;
+ (id)_actionWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(id /* block */)arg4;
+ (id)_checkmarkImage;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_color;
- (id)_effectiveColor;
- (id)_effectiveImage;
- (void)_setColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)handler;
- (id)identifier;
- (id)image;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
