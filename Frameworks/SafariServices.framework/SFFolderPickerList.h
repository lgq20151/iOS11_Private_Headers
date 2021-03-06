/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFFolderPickerList : NSObject {
    WebBookmarkCollection * _bookmarkCollection;
    unsigned long long  _style;
}

- (void).cxx_destruct;
- (void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4;
- (void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4;
- (id)folderListItemsIgnoringIdentifiers:(id)arg1;
- (id)initWithBookmarkCollection:(id)arg1 style:(unsigned long long)arg2;

@end
