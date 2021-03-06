/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController {
    TLKAuxilliaryTextView * _auxilliaryTextView;
    bool  _shouldCenter;
}

@property (retain) TLKAuxilliaryTextView *auxilliaryTextView;
@property bool shouldCenter;

+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)auxilliaryTextView;
- (void)setAuxilliaryTextView:(id)arg1;
- (void)setShouldCenter:(bool)arg1;
- (id)setupViewWithStyle:(unsigned long long)arg1;
- (bool)shouldCenter;
- (bool)shouldVerticallyCenter;
- (void)updateWithResult:(id)arg1;

@end
