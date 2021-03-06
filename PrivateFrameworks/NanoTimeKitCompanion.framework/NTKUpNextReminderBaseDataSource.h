/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextReminderBaseDataSource : NTKUpNextElementDataSource

+ (double)_defaultEventDuration;
+ (id)_description2TextProviderWithDueDate:(id)arg1 locationString:(id)arg2;
+ (id)_headerImageProviderWithDueDate:(id)arg1 locationString:(id)arg2;
+ (id)_locationStringForLocation:(id)arg1;
+ (id)_relevanceProvidersWithDueDate:(id)arg1 location:(id)arg2 proximity:(long long)arg3 priority:(unsigned long long)arg4;
+ (id)_reminderElementWithTitle:(id)arg1 color:(id)arg2 dueDate:(id)arg3 location:(id)arg4 proximity:(long long)arg5 priority:(unsigned long long)arg6 url:(id)arg7 reminderId:(id)arg8;
+ (id)bundleIdentifier;
+ (id)sampleContentElements;

@end
