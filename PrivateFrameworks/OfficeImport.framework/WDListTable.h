/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListTable : NSObject {
    WDList * mDefaultList;
    WDDocument * mDocument;
    NSMutableDictionary * mListMapById;
    NSMutableArray * mLists;
    WDList * mNullList;
}

- (id)addListWithListId:(int)arg1 listDefinitionId:(int)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)listAt:(unsigned long long)arg1;
- (unsigned long long)listCount;
- (id)listWithListId:(int)arg1;
- (id)lists;

@end