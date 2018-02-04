/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentDataProvider : NSObject {
    NSURL * _url;
}

@property (retain) NSURL *url;

+ (id)dataProviderWithPath:(id)arg1;
+ (id)dataProviderWithURL:(id)arg1;

- (id)_fileAttributes:(id)arg1;
- (bool)_isFileURL;
- (id)_path;
- (id)data;
- (void)dealloc;
- (id)errorWithMessage:(id)arg1 code:(long long)arg2;
- (bool)exists;
- (id)initWithURL:(id)arg1;
- (bool)save:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end