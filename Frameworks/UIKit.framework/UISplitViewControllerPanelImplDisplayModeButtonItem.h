/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISplitViewControllerPanelImplDisplayModeButtonItem : UIBarButtonItem {
    UISplitViewControllerPanelImpl * _panelImpl;
    bool  _wasAddedToNavigationItem;
}

@property (getter=_panelImpl, setter=_setPanelImpl:, nonatomic) UISplitViewControllerPanelImpl *panelImpl;
@property (getter=_wasAddedToNavigationItem, setter=_setWasAddedToNavigationItem:, nonatomic) bool wasAddedToNavigationItem;

- (void).cxx_destruct;
- (id)_panelImpl;
- (void)_setOwningNavigationItem:(id)arg1;
- (void)_setPanelImpl:(id)arg1;
- (void)_setWasAddedToNavigationItem:(bool)arg1;
- (bool)_wasAddedToNavigationItem;

@end
