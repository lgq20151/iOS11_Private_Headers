/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupResultGroupSnapshot : NSObject {
    short  _category;
    NSString * _contentString;
    unsigned long long  _groupId;
    NSMutableArray * _matchRange;
    unsigned long long  _owningGroupId;
}

@property (nonatomic, readonly) short category;
@property (nonatomic, readonly, copy) NSString *contentString;
@property (nonatomic, readonly) unsigned long long groupId;
@property (nonatomic, readonly, retain) NSMutableArray *matchRange;
@property (nonatomic, readonly) unsigned long long owningGroupId;

- (short)category;
- (id)contentString;
- (void)dealloc;
- (unsigned long long)groupId;
- (id)initWithContentString:(id)arg1 category:(short)arg2 groupId:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4;
- (id)matchRange;
- (unsigned long long)owningGroupId;

@end
