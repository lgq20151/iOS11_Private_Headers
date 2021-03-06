/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLMutableCameraImportQueue : NSObject {
    NSMutableArray * _items;
}

- (void).cxx_destruct;
- (id)currentItem;
- (void)dequeueImportItem;
- (id)description;
- (void)enqueueImportItem:(id)arg1;
- (id)init;

@end
