/* made by EzioChiu.
 */

@protocol TPMasterDrawableProvider <NSObject>

@required

- (void)addMasterDrawable:(TSDDrawableInfo *)arg1 atIndex:(unsigned long long)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(bool)arg4;
- (void)addMasterDrawables:(NSArray *)arg1 atIndex:(unsigned long long)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(bool)arg4;
- (unsigned long long)countOfMasterDrawables;
- (unsigned long long)indexOfMasterDrawable:(TSDDrawableInfo *)arg1;
- (NSArray *)masterDrawables;
- (NSArray *)masterDrawablesSortedByZOrder:(NSSet *)arg1;
- (void)removeMasterDrawable:(TSDDrawableInfo *)arg1 suppressDOLC:(bool)arg2;

@end
