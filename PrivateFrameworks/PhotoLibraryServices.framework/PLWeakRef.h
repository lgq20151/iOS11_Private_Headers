/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWeakRef : NSObject {
    id  _object;
}

@property (nonatomic, readonly) id object;

+ (id)weakRefWithObject:(id)arg1;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)object;

@end