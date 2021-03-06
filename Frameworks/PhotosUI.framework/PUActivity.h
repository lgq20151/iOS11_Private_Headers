/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivity : UIActivity <PUActivity> {
    UIImage * _cachedCustomImage;
    UIImage * _cachedSmallCustomImage;
    <PUActivityDataSource> * _dataSource;
    struct { 
        bool respondsToActivityViewControllerForActivity; 
        bool respondsToActivityItemsForActivity; 
    }  _dataSourceFlags;
    PUActivityItemSourceController * _itemSourceController;
}

@property (nonatomic) <PUActivityDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PUActivityItemSourceController *itemSourceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)itemSourceController;
- (id)pu_activityImageNamed:(id)arg1;
- (id)pu_activitySettingsImageNamed:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setItemSourceController:(id)arg1;
- (void)tearDownForCompletion;
- (void)updateActivityViewControllerVisibileShareActions;

@end
