/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintRangePickerView : UIPickerView {
    double  _shift;
}

- (bool)_forceTextAlignmentCentered;
- (double)_wheelShift;
- (void)layoutSubviews;

@end
