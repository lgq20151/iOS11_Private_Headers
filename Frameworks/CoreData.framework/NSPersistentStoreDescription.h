/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreDescription : NSObject <NSCopying> {
    NSString * _configuration;
    NSMutableDictionary * _options;
    NSString * _type;
    NSURL * _url;
}

@property (copy) NSURL *URL;
@property (copy) NSString *configuration;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (getter=isReadOnly) bool readOnly;
@property bool shouldAddStoreAsynchronously;
@property bool shouldInferMappingModelAutomatically;
@property bool shouldMigrateStoreAutomatically;
@property (nonatomic, readonly, copy) NSDictionary *sqlitePragmas;
@property double timeout;
@property (copy) NSString *type;

+ (id)inMemoryPersistentStoreDescription;
+ (id)persistentStoreDescriptionWithURL:(id)arg1;

- (id)URL;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReadOnly;
- (id)mirroringDelegate;
- (id)mirroringOptions;
- (id)options;
- (void)setConfiguration:(id)arg1;
- (void)setMirroringDelegate:(id)arg1;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (void)setOption:(id)arg1 forMirroringKey:(id)arg2;
- (void)setReadOnly:(bool)arg1;
- (void)setShouldAddStoreAsynchronously:(bool)arg1;
- (void)setShouldInferMappingModelAutomatically:(bool)arg1;
- (void)setShouldInvokeCompletionHandlerConcurrently:(bool)arg1;
- (void)setShouldMigrateStoreAutomatically:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forPragmaNamed:(id)arg2;
- (bool)shouldAddStoreAsynchronously;
- (bool)shouldInferMappingModelAutomatically;
- (bool)shouldInvokeCompletionHandlerConcurrently;
- (bool)shouldMigrateStoreAutomatically;
- (id)sqlitePragmas;
- (double)timeout;
- (id)type;

@end
