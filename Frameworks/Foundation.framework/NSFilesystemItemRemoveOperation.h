/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilesystemItemRemoveOperation : NSOperation {
    id  _delegate;
    NSError * _error;
    bool  _filterUnderbars;
    NSString * _removePath;
    void * _state;
}

+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;
+ (id)filesystemItemRemoveOperationWithPath:(id)arg1;

- (bool)_filtersUnderbars;
- (void)_setError:(id)arg1;
- (void)_setFilterUnderbars:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)initWithPath:(id)arg1;
- (void)main;
- (void)setDelegate:(id)arg1;

@end
