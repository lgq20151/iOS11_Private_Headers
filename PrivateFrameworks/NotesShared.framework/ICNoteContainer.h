/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>

@property (nonatomic, retain) NSString *accountNameForAccountListSorting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAllNotesContainer;
@property (nonatomic) bool isHiddenNoteContainer;
@property (nonatomic, retain) NSString *nestedTitleForSorting;
@property (nonatomic, readonly) ICAccount *noteContainerAccount;
@property (nonatomic, retain) ICAccount *owner;
@property (nonatomic) int sortOrder;
@property (readonly) Class superclass;

+ (id)keyPathsForValuesAffectingCloudAccount;

- (id)accountName;
- (id)cloudAccount;
- (id)noteContainerAccount;
- (bool)noteIsVisible:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (bool)supportsEditingNotes;
- (bool)supportsVisibilityTestingType:(long long)arg1;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;

@end