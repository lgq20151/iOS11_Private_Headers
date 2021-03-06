/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTransientAchievementDataStore : HDAchievementDataStore {
    NSMutableArray * _achievements;
    NSMutableSet * _addedAchievements;
    NSMutableArray * _commitExpects;
    NSMutableDictionary * _committedValues;
    NSString * _databaseIdentifier;
    NSMutableSet * _unalertedAchievements;
    NSMutableDictionary * _uncommittedValues;
}

@property (nonatomic, retain) NSMutableArray *achievements;
@property (nonatomic, retain) NSMutableSet *addedAchievements;
@property (nonatomic, retain) NSMutableArray *commitExpects;
@property (nonatomic, retain) NSMutableDictionary *committedValues;
@property (nonatomic, retain) NSString *databaseIdentifier;
@property (nonatomic, retain) NSMutableSet *unalertedAchievements;
@property (nonatomic, retain) NSMutableDictionary *uncommittedValues;

- (void).cxx_destruct;
- (id)_cachedValueForKey:(id)arg1;
- (void)_removeDuplicateAddedAchievements;
- (id)_valueForKey:(id)arg1;
- (id)achievements;
- (void)addAchievement:(id)arg1;
- (id)addedAchievements;
- (id)allAchievements;
- (id)cachedDateValueForKey:(id)arg1;
- (id)cachedNumberValueForKey:(id)arg1;
- (void)clearAddedAchievements;
- (bool)commit:(id*)arg1;
- (id)commitExpects;
- (id)committedKeyValues;
- (id)committedValues;
- (unsigned long long)countOfUnalertedAchievements;
- (id)databaseIdentifier;
- (id)dateForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (id)earnedAchievementDefinitionIdentifiers;
- (void)expectCommitWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (void)markAchievementAlerted:(id)arg1;
- (id)modifiedKeyValues;
- (void)setAchievements:(id)arg1;
- (void)setAddedAchievements:(id)arg1;
- (void)setCommitExpects:(id)arg1;
- (void)setCommittedValues:(id)arg1;
- (void)setDatabaseIdentifier:(id)arg1;
- (bool)setDatabaseIdentifier:(id)arg1 error:(id*)arg2;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
- (void)setUnalertedAchievements:(id)arg1;
- (void)setUncommittedValues:(id)arg1;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (id)unalertedAchievements;
- (id)uncommittedAchievements;
- (id)uncommittedValues;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;

@end
