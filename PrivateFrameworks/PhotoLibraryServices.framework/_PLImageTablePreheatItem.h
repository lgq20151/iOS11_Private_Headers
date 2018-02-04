/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLImageTablePreheatItem : PLPreheatItem {
    unsigned long long  _index;
    PLImageTablePreheater * _preheater;
}

- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1 preheater:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)arg1;

@end