/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAchievementProgressLocalJournalEntry : HDJournalEntry {
    long long  _category;
    HDCodableCategoryDomainDictionary * _dictionary;
    long long  _provenance;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 category:(long long)arg2 provenance:(long long)arg3;

@end
