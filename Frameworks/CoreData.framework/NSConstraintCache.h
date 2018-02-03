/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSConstraintCache : NSObject {
    NSMutableArray * _children;
    NSArray * _constraint;
    NSEntityDescription * _entity;
    NSArray * _extension;
    NSMutableDictionary * _knownValues;
}

@property (nonatomic, readonly, retain) NSArray *children;
@property (nonatomic, readonly, retain) NSArray *constraint;
@property (nonatomic, readonly) NSEntityDescription *entity;
@property (nonatomic, readonly, retain) NSArray *extension;

+ (void)createCachesForEntity:(id)arg1 forValidator:(id)arg2;

- (void)_addChild:(id)arg1;
- (bool)_alreadyHasChildForEntity:(id)arg1 constraint:(id)arg2;
- (bool)_constraint:(id)arg1 extends:(id)arg2;
- (bool)_intraStoreConflictsExistForValues:(id)arg1;
- (id)children;
- (id)constraint;
- (void)dealloc;
- (id)description;
- (id)entity;
- (void)extendConstraint:(id)arg1 onParentEntity:(id)arg2 parentCache:(id)arg3;
- (id)extension;
- (id)initForEntity:(id)arg1 constraint:(id)arg2 extension:(id)arg3;
- (id)keyForValues:(id)arg1;
- (void)registerObject:(id)arg1;
- (void)registerObject:(id)arg1 forValues:(id)arg2;
- (void)reset;
- (id)validateForSave:(id)arg1;

@end
