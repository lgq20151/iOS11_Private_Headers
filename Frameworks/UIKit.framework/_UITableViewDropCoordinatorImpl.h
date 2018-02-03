/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITableViewDropCoordinatorImpl : NSObject <_UITableViewDropCoordinator> {
    <_UITableViewDropCoordinatorDelegate> * _delegate;
    NSIndexPath * _destinationIndexPath;
    NSArray * _items;
    UITableViewDropProposal * _proposal;
    <UIDropSession> * _session;
    NSIndexPath * _translatedDestinationIndexPath;
}

@property (nonatomic, readonly) NSIndexPath *_destinationIndexPath;
@property (nonatomic, readonly) UITableViewDropProposal *_dropProposal;
@property (nonatomic, readonly) <UIDropSession> *_dropSession;
@property (nonatomic, readonly) NSArray *_items;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UITableViewDropCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSIndexPath *destinationIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) UITableViewDropProposal *proposal;
@property (nonatomic, retain) <UIDropSession> *session;
@property (readonly) Class superclass;
@property (getter=_translatedDestinationIndexPath, setter=_setTranslatedDestinationIndexPath:, nonatomic, retain) NSIndexPath *translatedDestinationIndexPath;

- (void).cxx_destruct;
- (id)_destinationIndexPath;
- (void)_dropItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;
- (id)_dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(id /* block */)arg5;
- (void)_dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (void)_dropItem:(id)arg1 toTarget:(id)arg2;
- (id)_dropProposal;
- (id)_dropSession;
- (id)_items;
- (void)_setTranslatedDestinationIndexPath:(id)arg1;
- (id)_sourceIndexPaths;
- (void)_translateDestinationIndexPath:(id /* block */)arg1;
- (void)_translateSourceIndexPathsOfDropItems:(id /* block */)arg1;
- (id)_translatedDestinationIndexPath;
- (id)delegate;
- (id)destinationIndexPath;
- (id)dropItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
- (id)dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(id /* block */)arg5;
- (id)dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (id)dropItem:(id)arg1 toTarget:(id)arg2;
- (id)initWithDelegate:(id)arg1 destinationIndexPath:(id)arg2 dropProposal:(id)arg3 session:(id)arg4;
- (id)items;
- (id)proposal;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setDestinationIndexPath:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setProposal:(id)arg1;
- (void)setSession:(id)arg1;

@end
