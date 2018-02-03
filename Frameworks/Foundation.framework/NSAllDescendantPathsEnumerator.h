/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {
    BOOL  _padding;
    NSArray * contents;
    bool  cross;
    unsigned long long  depth;
    NSFileAttributes * directoryAttributes;
    unsigned long long  idx;
    NSString * path;
    NSString * pathToLastReportedItem;
    NSString * prepend;
    NSAllDescendantPathsEnumerator * under;
}

+ (id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(bool)arg4 depth:(unsigned long long)arg5;

- (id)_under;
- (id)currentSubdirectoryAttributes;
- (void)dealloc;
- (id)directoryAttributes;
- (id)fileAttributes;
- (unsigned long long)level;
- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;

@end
