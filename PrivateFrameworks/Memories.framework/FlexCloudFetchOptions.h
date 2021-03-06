/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexCloudFetchOptions : NSObject {
    bool  _localOnly;
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
}

@property (nonatomic) bool localOnly;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (bool)localOnly;
- (id)predicate;
- (void)setLocalOnly:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
