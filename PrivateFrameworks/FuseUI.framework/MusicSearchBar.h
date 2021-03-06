/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchBar : UISearchBar

@property (nonatomic) <MusicSearchBarDelegate> *delegate;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } searchBarContentEdgeInsets;

- (bool)_isInBar;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })searchBarContentEdgeInsets;

@end
