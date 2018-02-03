/* made by EzioChiu.
 */

@protocol UIDropSession <UIDragDropSession, NSProgressReporting>

@required

- (NSProgress *)loadObjectsOfClass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (<UIDragSession> *)localDragSession;
- (unsigned long long)progressIndicatorStyle;
- (void)setProgressIndicatorStyle:(unsigned long long)arg1;

@end
