/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIArchiveExtractionController : NSObject {
    NSString * _destinationContentProtectionType;
    NSString * _destinationExtractionRootPath;
    NSArray * _extractedContentAbsolutePaths;
    NSString * _sourceArchiveExtractionRootPath;
    NSString * _sourceArchivePath;
}

@property (nonatomic, retain) NSString *destinationContentProtectionType;
@property (nonatomic, retain) NSString *destinationExtractionRootPath;
@property (nonatomic, retain) NSString *sourceArchiveExtractionRootPath;
@property (nonatomic, readonly) NSString *sourceArchivePath;

- (void).cxx_destruct;
- (bool)_createDestinationRoot:(id*)arg1;
- (id)destinationContentProtectionType;
- (id)destinationExtractionRootPath;
- (bool)extractArchiveContent:(id*)arg1;
- (id)extractedContentAbsolutePathsMatchingPredicate:(id /* block */)arg1;
- (id)initWithSourceArchivePath:(id)arg1 destinationExtractionRootPath:(id)arg2;
- (void)setDestinationContentProtectionType:(id)arg1;
- (void)setDestinationExtractionRootPath:(id)arg1;
- (void)setSourceArchiveExtractionRootPath:(id)arg1;
- (id)sourceArchiveExtractionRootPath;
- (id)sourceArchivePath;

@end