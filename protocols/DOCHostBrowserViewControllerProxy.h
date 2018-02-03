/* made by EzioChiu.
 */

@protocol DOCHostBrowserViewControllerProxy

@required

- (void)browserDidFinishGatheringItemsAndThumbnails;
- (void)browserDidUpdateNumberOfItems:(unsigned long long)arg1;
- (void)browserDismissButtonWasTapped;
- (void)browserIsDisplayingEmptyCollection:(bool)arg1;
- (void)browserLocationsButtonWasTappedWithSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)builtinActionsDidChange:(NSArray *)arg1;
- (void)createNewFile;
- (void)createNewFolder;
- (void)didCommitPreviewOfDocument:(DOCItem *)arg1;
- (void)didPickItem:(DOCItem *)arg1;
- (void)didPickLocation:(DOCConcreteLocation *)arg1 forceReplaceLocation:(bool)arg2;
- (void)didSelectItems:(NSArray *)arg1;
- (void)didTriggerActionWithIdentifier:(NSString *)arg1 onItems:(NSArray *)arg2;
- (void)didTriggerFPUIActionWithIdentifier:(NSString *)arg1 providerIdentifier:(NSString *)arg2 domainIdentifier:(NSString *)arg3 title:(NSString *)arg4 onItems:(NSArray *)arg5;
- (void)didUpdateCurrentLocationCanSelect:(bool)arg1;
- (void)didUpdateCurrentLocationIsWritable:(bool)arg1;
- (void)didUpdateImportSupportInCurrentLocation:(bool)arg1;
- (void)showInfoForItem:(DOCItem *)arg1;

@end