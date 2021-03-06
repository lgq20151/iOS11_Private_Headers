/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKLocationDescriptionGenerator : NSObject

+ (id)labelForLocation:(id)arg1;
+ (id)locationStringForEvent:(id)arg1;
+ (id)locationStringForEvent:(id)arg1 options:(unsigned long long)arg2;
+ (void)locationStringForEvent:(id)arg1 options:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
+ (id)locationStringForLocation:(id)arg1 locationWithoutPrediction:(id)arg2 preferredLocation:(id)arg3;
+ (id)locationStringForLocation:(id)arg1 locationWithoutPrediction:(id)arg2 preferredLocation:(id)arg3 options:(unsigned long long)arg4;

@end
