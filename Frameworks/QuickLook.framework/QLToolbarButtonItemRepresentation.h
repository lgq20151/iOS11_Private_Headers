/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLToolbarButtonItemRepresentation : UIBarButtonItem {
    NSString * _identifier;
    QLToolbarButton * _originalButton;
    unsigned long long  _placement;
    QLPreviewController * _presentingViewController;
}

@property (retain) NSString *identifier;
@property QLToolbarButton *originalButton;
@property unsigned long long placement;
@property QLPreviewController *presentingViewController;

- (void).cxx_destruct;
- (id)identifier;
- (id)originalButton;
- (unsigned long long)placement;
- (id)presentingViewController;
- (void)setIdentifier:(id)arg1;
- (void)setOriginalButton:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
