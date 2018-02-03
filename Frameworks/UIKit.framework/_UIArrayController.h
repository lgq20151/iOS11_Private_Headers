/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIArrayController : NSObject {
    <_UIArrayControllerDelegate> * _delegate;
    bool  _firstUpdateSent;
    bool  _invalidated;
    NSOrderedSet * _lastSnapshot;
    NSOperationQueue * _operationQueue;
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
}

@property (nonatomic) <_UIArrayControllerDelegate> *delegate;
@property (nonatomic, copy) NSOrderedSet *lastSnapshot;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (id)lastSnapshot;
- (bool)objectAttributeModified:(id)arg1 newObject:(id)arg2;
- (id)operationQueue;
- (id)predicate;
- (void)processUpdate:(id)arg1 changedObjects:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLastSnapshot:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
