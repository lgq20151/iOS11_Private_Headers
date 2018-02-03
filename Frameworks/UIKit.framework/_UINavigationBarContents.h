/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarContents : NSObject {
    UIBarButtonItem * _backBarButtonItem;
    UINavigationItem * _backItem;
    NSArray * _cancelBarButtonItems;
    UIView * _largeTitleView;
    NSArray * _otherBarButtonItems;
    UIView * _promptView;
    UIView * _titleView;
    UINavigationItem * _topItem;
    NSArray * _viewsRepresentingBackButton;
    NSArray * _viewsRepresentingContentBackground;
}

@property (nonatomic, retain) UIBarButtonItem *backBarButtonItem;
@property (nonatomic, retain) UINavigationItem *backItem;
@property (nonatomic, copy) NSArray *cancelBarButtonItems;
@property (nonatomic, retain) UIView *largeTitleView;
@property (nonatomic, copy) NSArray *otherBarButtonItems;
@property (nonatomic, retain) UIView *promptView;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic, retain) UINavigationItem *topItem;
@property (nonatomic, copy) NSArray *viewsRepresentingBackButton;
@property (nonatomic, retain) NSArray *viewsRepresentingContentBackground;

- (void).cxx_destruct;
- (id)backBarButtonItem;
- (id)backItem;
- (id)cancelBarButtonItems;
- (id)init;
- (id)largeTitleView;
- (id)otherBarButtonItems;
- (id)promptView;
- (void)setBackBarButtonItem:(id)arg1;
- (void)setBackItem:(id)arg1;
- (void)setCancelBarButtonItems:(id)arg1;
- (void)setLargeTitleView:(id)arg1;
- (void)setOtherBarButtonItems:(id)arg1;
- (void)setPromptView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTopItem:(id)arg1;
- (void)setViewsRepresentingBackButton:(id)arg1;
- (void)setViewsRepresentingContentBackground:(id)arg1;
- (id)titleView;
- (id)topItem;
- (id)viewsRepresentingBackButton;
- (id)viewsRepresentingContentBackground;

@end
