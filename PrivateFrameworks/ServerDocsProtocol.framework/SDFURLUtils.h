/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFURLUtils : NSObject

+ (bool)copyFileACLsFromURL:(id)arg1 toURL:(id)arg2;
+ (id)dataContainingFileResourceIdentifierFromURL:(id)arg1 error:(id*)arg2;
+ (bool)existsOnDiskAtURL:(id)arg1;
+ (bool)fileResourceIdentifiersEqualAtURL:(id)arg1 andURL:(id)arg2 error:(id*)arg3;
+ (bool)isDirectoryAtURL:(id)arg1;
+ (bool)isFileAtURL:(id)arg1;
+ (id)realPathForURL:(id)arg1;
+ (id)urlByAppendingPathComponents:(id)arg1 toURL:(id)arg2;
+ (id)urlWithRealPathOfURL:(id)arg1;

@end
