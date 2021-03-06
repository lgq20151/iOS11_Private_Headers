/* made by EzioChiu.
 */

@protocol BCSAction <NSObject>

@required

- (NSArray *)actionPickerItems;
- (NSString *)defaultActionTargetApplicationBundleIdentifier;
- (<BCSActionDelegate> *)delegate;
- (NSString *)localizedActionDescription;
- (NSString *)localizedDefaultActionDescription;
- (void)performAction;
- (void)performDefaultAction;
- (void)setDelegate:(id <BCSActionDelegate>)arg1;
- (void)showActionPicker;
- (NSURL *)urlThatCanBeOpened;

@end
