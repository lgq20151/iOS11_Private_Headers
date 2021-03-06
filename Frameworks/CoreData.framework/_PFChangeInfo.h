/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFChangeInfo : NSObject {
    unsigned long long  _changeType;
    NSIndexPath * _finalIndexPath;
    _NSDefaultSectionInfo * _finalSectionInfo;
    NSManagedObject * _object;
    NSIndexPath * _startIndexPath;
    _NSDefaultSectionInfo * _startSectionInfo;
}

@property (nonatomic) unsigned long long changeType;
@property (nonatomic, retain) NSIndexPath *finalIndexPath;
@property (nonatomic, retain) _NSDefaultSectionInfo *finalSectionInfo;
@property (nonatomic, readonly, retain) NSManagedObject *object;
@property (nonatomic, retain) NSIndexPath *startIndexPath;
@property (nonatomic, retain) _NSDefaultSectionInfo *startSectionInfo;

- (unsigned long long)changeType;
- (void)dealloc;
- (id)description;
- (id)finalIndexPath;
- (id)finalSectionInfo;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 changeType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)object;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setFinalIndexPath:(id)arg1;
- (void)setFinalSectionInfo:(id)arg1;
- (void)setStartIndexPath:(id)arg1;
- (void)setStartSectionInfo:(id)arg1;
- (id)startIndexPath;
- (id)startSectionInfo;

@end
