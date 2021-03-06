/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFeedMetadata : NSObject <NSSecureCoding> {
    NSURL * _homepageURL;
    NSURL * _imageURL;
    NSString * _title;
}

@property (nonatomic, readonly) NSURL *homepageURL;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homepageURL;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 imageURL:(id)arg2 homepageURL:(id)arg3;
- (id)title;

@end
