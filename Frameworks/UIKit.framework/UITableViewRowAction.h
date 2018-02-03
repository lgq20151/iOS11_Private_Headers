/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewRowAction : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIVisualEffect * _backgroundEffect;
    _UITableViewCellActionButton * _button;
    id /* block */  _handler;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIVisualEffect *backgroundEffect;
@property (getter=_handler, nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) long long style;
@property (nonatomic, copy) NSString *title;

+ (id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_button;
- (id /* block */)_handler;
- (id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(id /* block */)arg3;
- (void)_setButton:(id)arg1;
- (id)backgroundColor;
- (id)backgroundEffect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundEffect:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
