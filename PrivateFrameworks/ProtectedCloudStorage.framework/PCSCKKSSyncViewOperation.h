/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSCKKSSyncViewOperation : PCSCKKSOperation {
    PCSCKKSItemModifyContext * _context;
}

@property (readonly) PCSCKKSItemModifyContext *context;

- (void).cxx_destruct;
- (id)context;
- (id)initWithItemModifyContext:(id)arg1;
- (void)start;
- (void)syncView:(id)arg1;

@end
