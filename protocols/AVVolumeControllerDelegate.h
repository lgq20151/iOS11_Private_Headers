/* made by EzioChiu.
 */

@protocol AVVolumeControllerDelegate <NSObject>

@required

- (void)volumeController:(AVVolumeController *)arg1 volumeDidChange:(float)arg2 effectiveVolumeLimit:(float)arg3;

@end
