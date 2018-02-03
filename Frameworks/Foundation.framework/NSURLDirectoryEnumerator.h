/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {
    struct __CFURLEnumerator { } * _enumerator;
    id /* block */  _errorHandler;
    bool  shouldContinue;
}

@property (copy) id /* block */ errorHandler;

- (void)dealloc;
- (id)directoryAttributes;
- (id /* block */)errorHandler;
- (id)fileAttributes;
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(id /* block */)arg4;
- (unsigned long long)level;
- (id)nextObject;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)skipDescendants;
- (void)skipDescendents;

@end
