/* made by EzioChiu.
 */

@protocol AVOutputSettingsAssistantBaseSettingsProvider <NSObject>

@required

- (NSDictionary *)baseAudioSettings;
- (NSDictionary *)baseVideoSettings;

@end
