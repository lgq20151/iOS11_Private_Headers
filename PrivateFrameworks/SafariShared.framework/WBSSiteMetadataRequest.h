/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSiteMetadataRequest : NSObject <NSCopying> {
    NSDictionary * _extraInfo;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSDictionary *extraInfo;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extraInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)url;

@end
