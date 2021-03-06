/* made by EzioChiu.
 */

@protocol QLPreviewCollectionProtocol

@required

- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id <QLPreviewItemProvider>)arg3 stateManager:(id <QLPreviewControllerStateProtocol>)arg4;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(bool)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)invalidatePreviewCollection;
- (void)keyCommandWasPerformed:(UIKeyCommand *)arg1;
- (void)keyCommandsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setAppearance:(QLAppearance *)arg1 animated:(bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(bool)arg2;
- (void)setLoadingString:(NSString *)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)startTransitionWithSourceViewProvider:(void *)arg1 transitionController:(void *)arg2 presenting:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: QLTransitionContext *, <QLTransitionControllerProtocol> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)tearDownTransition:(bool)arg1;
- (void)toolbarButtonPressedWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)toolbarButtonsForTraitCollection:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: UITraitCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*

@end
