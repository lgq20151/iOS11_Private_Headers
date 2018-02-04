/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXIconLocation : NSObject {
    long long  _folderPage;
    long long  _idx;
    long long  _page;
}

@property (nonatomic) long long folderPage;
@property (nonatomic) long long idx;
@property (nonatomic) long long page;

- (long long)folderPage;
- (long long)idx;
- (id)initWithPage:(long long)arg1 pageIndex:(long long)arg2 folderPage:(long long)arg3;
- (long long)page;
- (void)setFolderPage:(long long)arg1;
- (void)setIdx:(long long)arg1;
- (void)setPage:(long long)arg1;

@end