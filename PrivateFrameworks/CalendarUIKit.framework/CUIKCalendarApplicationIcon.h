/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKCalendarApplicationIcon : NSObject

+ (id)_dateNameFromDate:(id)arg1 calendar:(id)arg2 type:(long long)arg3 style:(long long)arg4;
+ (id)_dateNameFromDateComponents:(id)arg1 type:(long long)arg2 style:(long long)arg3;
+ (id)_dayNumberStringFromDate:(id)arg1 calendar:(id)arg2;
+ (id)_dayNumberStringFromDateComponents:(id)arg1;
+ (void)_drawGridInContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (void)_drawIconInContext:(struct CGContext { }*)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 iconBase:(id)arg3 calendar:(id)arg4 dayNumberString:(id)arg5 dateNameBlock:(id /* block */)arg6 dateNameFormatType:(long long)arg7 format:(long long)arg8 showGrid:(bool)arg9;
+ (void)_fillContextWithWhiteBackgroundIfNeededForFormat:(long long)arg1 context:(struct CGContext { }*)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (long long)_iconDateNameFormatTypeForDate:(id)arg1 calendar:(id)arg2 format:(int)arg3;
+ (long long)_iconDateNameFormatTypeForNotificationsWithDate:(id)arg1 calendar:(id)arg2;
+ (id)_iconImageWithFormat:(int)arg1 square:(bool)arg2 outline:(bool)arg3 drawBlock:(id /* block */)arg4;
+ (int)_iconVariantForFormat:(int)arg1 scale:(double)arg2 outline:(bool)arg3;
+ (double)_imageScaleForApplicationIconFormat:(int)arg1;
+ (bool)_isDate:(id)arg1 withinNextWeekOfDate:(id)arg2 calendar:(id)arg3;
+ (bool)_isDate:(id)arg1 withinPreviousWeekOfDate:(id)arg2 calendar:(id)arg3;
+ (bool)_isWithinNextWeek:(id)arg1 calendar:(id)arg2;
+ (bool)_isWithinPreviousWeek:(id)arg1 calendar:(id)arg2;
+ (id)_whiteImage;
+ (id)croppedIconImage:(id)arg1 format:(int)arg2;
+ (void)drawIconInContext:(struct CGContext { }*)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 iconBase:(id)arg3 date:(id)arg4 calendar:(id)arg5 format:(int)arg6;
+ (void)drawIconInContext:(struct CGContext { }*)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 iconBase:(id)arg3 dateComponents:(id)arg4 dateNameFormatType:(long long)arg5 format:(long long)arg6 showGrid:(bool)arg7;
+ (long long)dynamicIconFormat:(int)arg1;
+ (bool)formatSupportsDynamicIcon:(int)arg1;
+ (id)getMaskedIconImageWithFormat:(int)arg1 imageScale:(double)arg2;
+ (id)getUnmaskedIconImage:(int)arg1;
+ (id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3;
+ (id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3 outline:(bool)arg4;
+ (id)iconImageWithDateComponents:(id)arg1 dateNameFormatType:(long long)arg2 format:(int)arg3 square:(bool)arg4 showGrid:(bool)arg5;

@end