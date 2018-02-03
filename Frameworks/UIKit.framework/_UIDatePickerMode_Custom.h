/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerMode_Custom : _UIDatePickerMode {
    NSArray * _components;
    long long  _desiredUnits;
    long long  _displayedUnits;
    NSString * _originalFormat;
    NSArray * _sortedComponents;
}

- (void).cxx_destruct;
- (id)_componentForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)calendarUnitForComponent:(long long)arg1;
- (long long)componentForCalendarUnit:(unsigned long long)arg1;
- (id)components;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (long long)displayedCalendarUnits;
- (unsigned long long)extractableCalendarUnits;
- (id)initWithFormatString:(id)arg1 datePickerView:(id)arg2;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (void)noteCalendarChanged;
- (unsigned long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (void)resetComponentWidths;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;

@end
