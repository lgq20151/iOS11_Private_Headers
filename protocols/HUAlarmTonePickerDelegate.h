/* made by EzioChiu.
 */

@protocol HUAlarmTonePickerDelegate <NSObject>

@required

- (void)tonePickerViewController:(HUAlarmTonePickerViewController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
- (void)tonePickerViewController:(HUAlarmTonePickerViewController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;

@end
