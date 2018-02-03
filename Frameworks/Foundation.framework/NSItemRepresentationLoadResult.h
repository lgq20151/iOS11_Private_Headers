/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSItemRepresentationLoadResult : NSObject <NSCopying> {
    NSString * _archivedObjectClassName;
    id /* block */  _cleanupHandler;
    NSData * _data;
    NSError * _error;
    NSSecurityScopedURLWrapper * _urlWrapper;
    bool  _wasOpenedInPlace;
}

@property (nonatomic, copy) NSString *archivedObjectClassName;
@property (nonatomic, copy) id /* block */ cleanupHandler;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) NSSecurityScopedURLWrapper *urlWrapper;
@property (nonatomic) bool wasOpenedInPlace;

+ (id)resultWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(id /* block */)arg3 error:(id)arg4;
+ (id)resultWithError:(id)arg1;

- (id)archivedObjectClassName;
- (id /* block */)cleanupHandler;
- (id)copyWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(id /* block */)arg3 error:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)error;
- (void)setArchivedObjectClassName:(id)arg1;
- (void)setCleanupHandler:(id /* block */)arg1;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setUrlWrapper:(id)arg1;
- (void)setWasOpenedInPlace:(bool)arg1;
- (id)urlWrapper;
- (bool)wasOpenedInPlace;

@end
