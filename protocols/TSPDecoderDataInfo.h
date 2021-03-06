/* made by EzioChiu.
 */

@protocol TSPDecoderDataInfo <NSObject>

@required

- (TSPDataMetadata *)dataMetadata;
- (TSPDigest *)digest;
- (NSString *)documentResourceLocator;
- (NSString *)externalFilePath;
- (long long)identifier;
- (NSString *)preferredFilename;

@end
