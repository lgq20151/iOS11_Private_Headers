/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface PreferencesValueCell : EKUITableViewCell {
    <EKCellShortener> * _shortener;
}

@property (nonatomic) <EKCellShortener> *shortener;

- (void).cxx_destruct;
- (void)_checkValueWidth;
- (void)layoutSubviews;
- (void)setShortener:(id)arg1;
- (id)shortener;

@end
