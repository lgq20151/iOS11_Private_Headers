/* made by EzioChiu.
 */

@protocol _DUIClientSessionCommon

@required

- (oneway void)requestDetailForItemIndex:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _DUIItemDetail *, void*
- (oneway void)requestImageForItemIndex:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, _DUIPreview *, BKSAnimationFenceHandle *, long long, void*
- (oneway void)updateDetail:(_DUIItemDetail *)arg1 forItemIndex:(unsigned long long)arg2;

@end
