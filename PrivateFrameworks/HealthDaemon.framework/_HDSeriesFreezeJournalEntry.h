/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry {
    NSDictionary * _metadata;
    Class  _seriesClass;
    NSUUID * _seriesIdentifier;
}

@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) Class seriesClass;
@property (nonatomic, readonly, copy) NSUUID *seriesIdentifier;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeriesPersistentID:(id)arg1 metadata:(id)arg2 class:(Class)arg3;
- (id)metadata;
- (Class)seriesClass;
- (id)seriesIdentifier;

@end
