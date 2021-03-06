/* made by EzioChiu.
 */

@protocol ICDeviceManagerProtocol <NSObject>

@required

- (int)aptpRequestDataForFiles:(NSArray *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void*)arg3;
- (int)aptpRetrieveDataForFiles:(ICCameraDevice *)arg1 contextInfo:(void*)arg2;
- (int)closeDevice:(ICDevice *)arg1 contextInfo:(void*)arg2;
- (int)closeSession:(ICDevice *)arg1 contextInfo:(void*)arg2;
- (int)deleteFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void*)arg3;
- (int)downloadFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 options:(NSDictionary *)arg3 contextInfo:(void*)arg4;
- (int)eject:(ICCameraDevice *)arg1;
- (void)enumerateContent;
- (int)getMetadataOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void*)arg3;
- (int)getThumbnailOfFile:(ICCameraFile *)arg1 fromDevice:(ICCameraDevice *)arg2 contextInfo:(void*)arg3;
- (int)openDevice:(NSDictionary *)arg1 contextInfo:(void*)arg2;
- (int)openSession:(ICDevice *)arg1 contextInfo:(void*)arg2;
- (int)syncClock:(ICDevice *)arg1 contextInfo:(void*)arg2;

@end
