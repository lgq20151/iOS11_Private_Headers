/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit {
    unsigned long long  _currentSelected;
    long long  _lastUsedCategory;
    bool  _whiteText;
}

@property bool whiteText;

- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setRenderConfig:(id)arg1;
- (void)setWhiteText:(bool)arg1;
- (id)symbolForRow:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)titleForRow:(long long)arg1 fallback:(bool)arg2;
- (void)updateCategorySelectedIndicator:(long long)arg1;
- (void)updateToCategory:(long long)arg1;
- (bool)whiteText;

@end
