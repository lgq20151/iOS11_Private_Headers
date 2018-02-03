/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext {
    id /* block */  _workBlock;
}

- (void)dealloc;
- (void)executeRequestCore:(id*)arg1;
- (id)initWithBlock:(id /* block */)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;

@end
