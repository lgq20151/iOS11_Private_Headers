/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMenuItem : NSObject {
    SEL  _action;
    bool  _dontDismiss;
    NSString * _title;
}

@property (nonatomic) SEL action;
@property (nonatomic) bool dontDismiss;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (SEL)action;
- (bool)dontDismiss;
- (id)init;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;
- (void)setAction:(SEL)arg1;
- (void)setDontDismiss:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
