/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {
    NSFetchedResultsController * _controller;
    NSString * _indexTitle;
    NSString * _name;
    unsigned long long  _numberOfObjects;
    unsigned long long  _oldSectionNumber;
    id  _sectionObjects;
    unsigned long long  _sectionOffset;
}

@property (nonatomic, readonly) NSString *indexTitle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfObjects;
@property (nonatomic, readonly) NSArray *objects;
@property (nonatomic) unsigned long long oldSectionNumber;
@property (nonatomic, readonly) unsigned long long sectionNumber;
@property (nonatomic, readonly) unsigned long long sectionOffset;

- (void)clearSectionObjectsCache;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)indexTitle;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 name:(id)arg2 indexTitle:(id)arg3 sectionOffset:(unsigned long long)arg4;
- (id)name;
- (unsigned long long)numberOfObjects;
- (id)objects;
- (unsigned long long)oldSectionNumber;
- (unsigned long long)sectionNumber;
- (unsigned long long)sectionOffset;
- (void)setController:(id)arg1;
- (void)setNumberOfObjects:(unsigned long long)arg1;
- (void)setOldSectionNumber:(unsigned long long)arg1;
- (void)setSectionOffset:(unsigned long long)arg1;

@end
