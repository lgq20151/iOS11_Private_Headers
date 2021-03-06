/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyLogArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {
    NSMutableSet * _objects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *objects;
@property (readonly) Class superclass;

- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)objects;

@end
