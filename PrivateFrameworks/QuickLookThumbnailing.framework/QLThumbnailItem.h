/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailItem : NSObject <NSSecureCoding> {
    NSString * _contentType;
    NSData * _data;
    long long  _fileExtensionHandle;
    NSString * _fileExtensionToken;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *contentType;
@property (readonly) NSData *data;
@property (readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_issueFileExtensionForURL:(id)arg1;
- (void)consumeFileExtension;
- (id)contentType;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)issueFileExtension;
- (id)url;

@end