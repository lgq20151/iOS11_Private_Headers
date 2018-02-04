/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCRelativePath : NSObject {
    NSString * _firstPathComponent;
    DCService * _service;
    NSString * _string;
}

@property (readonly, retain) NSString *firstPathComponent;
@property (readonly, retain) NSString *lastPathComponent;
@property (readonly, retain) DCService *service;
@property (readonly, retain) NSString *string;

+ (id)relativePathWithString:(id)arg1 forService:(id)arg2;
+ (id)rootForService:(id)arg1;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)firstPathComponent;
- (bool)isRoot;
- (id)lastPathComponent;
- (id)metadataPath;
- (id)relativePathByAppendingPath:(id)arg1;
- (id)relativePathByAppendingPathComponent:(id)arg1;
- (id)relativePathByDeletingLastPathComponent;
- (id)relativePathForAssetType:(id)arg1 withUnderlyingItemDocumentIdentifier:(id)arg2;
- (id)service;
- (id)string;

@end