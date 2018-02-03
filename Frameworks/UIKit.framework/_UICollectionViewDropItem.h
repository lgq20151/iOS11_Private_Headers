/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem> {
    UIDragItem * _dragItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _previewSize;
    NSIndexPath * _sourceIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragItem *dragItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } previewSize;
@property (nonatomic, retain) NSIndexPath *sourceIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)dragItem;
- (id)initWithDragItem:(id)arg1 previewSize:(struct CGSize { double x1; double x2; })arg2 sourceIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })previewSize;
- (void)setDragItem:(id)arg1;
- (void)setPreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceIndexPath:(id)arg1;
- (id)sourceIndexPath;

@end
