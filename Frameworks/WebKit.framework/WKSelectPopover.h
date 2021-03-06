/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    struct RetainPtr<WKSelectTableViewController> { 
        void *m_ptr; 
    }  _tableViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1 hasGroups:(bool)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(bool)arg3;

@end
