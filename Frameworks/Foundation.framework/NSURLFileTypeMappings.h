/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLFileTypeMappings : NSObject {
    NSURLFileTypeMappingsInternal * _internal;
}

+ (id)sharedMappings;

- (id)MIMETypeForExtension:(id)arg1;
- (id)_UTIMIMETypeForExtension:(id)arg1;
- (id)_UTIextensionForMIMEType:(id)arg1;
- (id)_init;
- (id)extensionsForMIMEType:(id)arg1;
- (id)preferredExtensionForMIMEType:(id)arg1;

@end